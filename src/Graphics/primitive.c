#include "Graphics/primitive.h"
#include "Kernel/Kwln/kwln.h"
#include "sce/eestruct.h"
#include "libm.h"
extern void FUN_004c6be0(RwV3d* out, const RwV3d* in, const RwMatrix* matrix);

#define PRIM_RENDERSTATE_COUNT 6

// 8 bytes
typedef struct 
{
    RwRenderState renderState; // 0x00
    u32 val;         // 0x04
} PrimRenderState;

// 0069ce60
static const PrimRenderState sRenderStates[PRIM_RENDERSTATE_COUNT] =
{
    {rwRENDERSTATEFOGENABLE, false},
    {rwRENDERSTATEVERTEXALPHAENABLE, true}, 
    {rwRENDERSTATESHADEMODE, rwSHADEMODEGOURAUD},
    {rwRENDERSTATECULLMODE, rwCULLMODECULLNONE},
    {rwRENDERSTATEZTESTENABLE, true},
    {rwRENDERSTATEZWRITEENABLE, false}
};

// 0069ce90
static const RwV3d sAxisDirs[3] =
{
    {1.0f, 0.0f, 0.0f}, // X
    {0.0f, 1.0f, 0.0f}, // Y
    {0.0f, 0.0f, 1.0f}  // Z
};

// 0069ceb8
static const RwRGBA sAxisColors[3] =
{
    {255, 0, 0, 255}, // X (red)
    {0, 255, 0, 255}, // Y (green)
    {0, 0, 255, 255}  // Z (blue)
};

static const RwV3d sSphereRotAxis = {1.0f, 0.0f, 0.0f}; // 0069cec8


// FUN_00358a30
void primQuad3D(const RwV3d* pos, const RwRGBA* col, f32 size, u32 saveAndRestoreRenderState)
{
    u32 i;
    u32 j;
    const PrimRenderState* currRenderState;
    u32* currSavedRenderState;
    RwRenderStateSetFunc* setRenderState;
    RwV3d cameraPos;
    RwIm2DVertex vertices[4];
    u32 savedRenderStates[PRIM_RENDERSTATE_COUNT];
    f32 zBufferNear;
    f32 zBufferFar;
    f32 nearPlane;
    f32 farPlane;
    f32 screenZ;
    f32 recipZ;
    f32 screenX;
    f32 screenY;

    RwV3dTransformPoint(&cameraPos, pos, &kwlnGetMainCamera()->viewMatrix);
    zBufferNear = rwGlobals.device.zBufferNear;
    zBufferFar = rwGlobals.device.zBufferFar;
    farPlane = kwlnGetMainCamera()->farPlane;
    nearPlane = kwlnGetMainCamera()->nearPlane;

    if (cameraPos.z > nearPlane && cameraPos.z < farPlane)
    {

        size *= 0.5f;
        screenZ = zBufferNear + (nearPlane / cameraPos.z) *
                                      ((cameraPos.z - farPlane) * ((zBufferFar - zBufferNear) / (nearPlane - farPlane)));
        if (screenZ < 0.0f)
        {
            screenZ = 0.0f;
        }

        recipZ = 1.0f / screenZ;
        screenX = 640.0f * (cameraPos.x / cameraPos.z);
        screenY = 448.0f * (cameraPos.y / cameraPos.z);

        if (saveAndRestoreRenderState)
        {
            for (i = 0; i < PRIM_RENDERSTATE_COUNT; i++)
            {
                currRenderState = &sRenderStates[i];
                currSavedRenderState = &savedRenderStates[i];
                RwRenderStateGet(currRenderState->renderState, currSavedRenderState);
                RwRenderStateSet(currRenderState->renderState, currRenderState->val);
            }
            setRenderState = &rwGlobals.device.setRenderState;

            (*setRenderState)(rwRENDERSTATEZTESTENABLE, NULL);
            (*setRenderState)(rwRENDERSTATETEXTURERASTER, NULL);
            RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)SCE_GS_SET_ALPHA_1(0, 2, 0, 1, 0));
            RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)SCE_GS_SET_TEST_1(1, 0, 128, 1, 0, 0, 1, 3));
        }

        vertices[0].u.els.scrVertex.x = screenX - size;
        vertices[0].u.els.scrVertex.y = screenY - size;
        vertices[0].u.els.scrVertex.z = screenZ;
        vertices[0].u.els.recipZ = recipZ;
        vertices[0].u.els.color.r = (f32)col->r;
        vertices[0].u.els.color.g = (f32)col->g;
        vertices[0].u.els.color.b = (f32)col->b;
        vertices[0].u.els.color.a = (f32)col->a;

        vertices[1].u.els.scrVertex.x = screenX - size;
        vertices[1].u.els.scrVertex.y = screenY + size;
        vertices[1].u.els.scrVertex.z = screenZ;
        vertices[1].u.els.recipZ = recipZ;
        vertices[1].u.els.color.r = (f32)col->r;
        vertices[1].u.els.color.g = (f32)col->g;
        vertices[1].u.els.color.b = (f32)col->b;
        vertices[1].u.els.color.a = (f32)col->a;

        vertices[2].u.els.scrVertex.x = screenX + size;
        vertices[2].u.els.scrVertex.y = screenY - size;
        vertices[2].u.els.scrVertex.z = screenZ;
        vertices[2].u.els.recipZ = recipZ;
        vertices[2].u.els.color.r = (f32)col->r;
        vertices[2].u.els.color.g = (f32)col->g;
        vertices[2].u.els.color.b = (f32)col->b;
        vertices[2].u.els.color.a = (f32)col->a;

        vertices[3].u.els.scrVertex.x = screenX + size;
        vertices[3].u.els.scrVertex.y = screenY + size;
        vertices[3].u.els.scrVertex.z = screenZ;
        vertices[3].u.els.recipZ = recipZ;
        vertices[3].u.els.color.r = (f32)col->r;
        vertices[3].u.els.color.g = (f32)col->g;
        vertices[3].u.els.color.b = (f32)col->b;
        vertices[3].u.els.color.a = (f32)col->a;

        RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vertices, 4);

        if (saveAndRestoreRenderState)
        {
            for (j = 0; j < PRIM_RENDERSTATE_COUNT; j++)
            {
                RwRenderStateSet(sRenderStates[j].renderState, savedRenderStates[j]);
            }
        }
    }
}

// FUN_00359110
void primLine3D(const RwV3d* startPos, const RwV3d* endPos, const RwRGBA* color, u32 saveAndRestoreRenderState)
{
    u32 i;
    const PrimRenderState* currRenderState;
    u32* currSavedRenderState;
    RwIm3DVertex vertices[2];
    RwMatrix identity;
    u32 savedRenderStates[PRIM_RENDERSTATE_COUNT];
    u32 j;

    if (saveAndRestoreRenderState)
    {
        for (i = 0; i < PRIM_RENDERSTATE_COUNT; i++)
        {
            currRenderState = &sRenderStates[i];
            currSavedRenderState = &savedRenderStates[i];
            RwRenderStateGet(currRenderState->renderState, currSavedRenderState);
            RwRenderStateSet(currRenderState->renderState, currRenderState->val);
        }

        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);

        RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)SCE_GS_SET_ALPHA_1(0, 2, 0, 1, 0));
        RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)SCE_GS_SET_TEST_1(1, 0, 128, 1, 0, 0, 1, 3));
    }

    RwMatrixSetIdentity(&identity);

    RwIm3DVertexSetPos(&vertices[0], startPos->x, startPos->y, startPos->z);
    RwIm3DVertexSetPos(&vertices[1], endPos->x, endPos->y, endPos->z);
    RwIm3DVertexSetRGBA(&vertices[0], color->r, color->g, color->b, color->a);
    RwIm3DVertexSetRGBA(&vertices[1], color->r, color->g, color->b, color->a);

    RwIm3DTransform(vertices, 2, &identity, rwIM3D_ALLOPAQUE);
    RwIm3DRenderLine(0, 1);

    if (saveAndRestoreRenderState)
    {
        for (j = 0; j < PRIM_RENDERSTATE_COUNT; j++)
        {
            RwRenderStateSet(sRenderStates[j].renderState, savedRenderStates[j]);
        }
    }
}

// FUN_00359380
void primAxisLine3D(const RwMatrix* mat, f32 length, u32 saveAndRestoreRenderState)
{
    u32 i;
    const PrimRenderState* currRenderState;
    u32 savedRenderStates[PRIM_RENDERSTATE_COUNT];
    u32 j;
    const RwV3d* currAxisDir;
    RwV3d finalAxisPoint;
    RwV3d axisPoint;

    if (saveAndRestoreRenderState)
    {
        for (i = 0; i < PRIM_RENDERSTATE_COUNT; i++)
        {
            currRenderState = &sRenderStates[i];
            RwRenderStateGet(currRenderState->renderState, &savedRenderStates[i]);
            RwRenderStateSet(currRenderState->renderState, currRenderState->val);
        }

        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);

        RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)SCE_GS_SET_ALPHA_1(0, 2, 0, 1, 0));
        RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)SCE_GS_SET_TEST_1(1, 0, 128, 1, 0, 0, 1, 3));
    }

    for (j = 0; j < 3; j++)
    {
        currAxisDir = &sAxisDirs[j];

        axisPoint.x = length * currAxisDir->x;
        axisPoint.y = length * currAxisDir->y;
        axisPoint.z = length * currAxisDir->z;

        RwV3dTransformPoint(&finalAxisPoint, &axisPoint, mat);

        primLine3D(&mat->pos, &finalAxisPoint, &sAxisColors[j], false);
    }

    if (saveAndRestoreRenderState)
    {
        for (j = 0; j < PRIM_RENDERSTATE_COUNT; j++)
        {
            RwRenderStateSet(sRenderStates[j].renderState, savedRenderStates[j]);
        }
    }
}

// FUN_00359560
#pragma push
#pragma opt_lifetimes on
asm void primCircleLine3D(const RwV3d* center, f32 radius, const RwRGBA* color, const RwMatrix* mat, u32 saveAndRestoreRenderState)
{
  .set noreorder
  .word 0x27bdf9a0
  .word 0xffbf0070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x46006646
  .word 0x00a0882d
  .word 0x00c0902d
  .word 0x00e0802d
  .word 0xe7b9008c
  .word 0xc4800000
  .word 0xe7a00080
  .word 0xc4800004
  .word 0xe7a00084
  .word 0xc4800008
  .word 0xe7a00088
  .word 0x3c020096
  .word 0x8c440070
  .word 0x27a50080
  .word 0x0c13277c
  .word 0x00000000
  .word 0x1040014a
  .word 0x00000000
  .word 0x3c020096
  .word 0xc457008c
  .word 0x3c020096
  .word 0xc4540088
  .word 0x0c066164
  .word 0x00000000
  .word 0xc4550084
  .word 0x0c066164
  .word 0x00000000
  .word 0xc4560080
  .word 0x0c066164
  .word 0x00000000
  .word 0x24530020
  .word 0x1240000e
  .word 0x00000000
  .word 0x27a50090
  .word 0x24040008
  .word 0x8e430000
  .word 0x8e420004
  .word 0x26520008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa200b8
  .word 0xafa200a4
  .word 0xafa20090
  .word 0xafa000a0
  .word 0xafa00098
  .word 0xafa00094
  .word 0xafa000b4
  .word 0xafa000b0
  .word 0xafa000a8
  .word 0xafa000c8
  .word 0xafa000c4
  .word 0xafa000c0
  .word 0x8fa3009c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2009c
  .word 0xc6820000
  .word 0xc6810004
  .word 0xc6800008
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0x12000029
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000014
  .word 0x00000000
  .word 0x001418c0
  .word 0x3c02006a
  .word 0x2442ce60
  .word 0x00439021
  .word 0x00141080
  .word 0x005d1021
  .word 0x8e440000
  .word 0x244500d0
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440000
  .word 0x8e450004
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2e820006
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x27b400f0
  .word 0x4480c000
  .word 0xafa00654
  .word 0x0000902d
  .word 0x4617a041
  .word 0x4615b001
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600c802
  .word 0xe7a00650
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600c802
  .word 0xe7a00658
  .word 0x27a40640
  .word 0x27a50650
  .word 0x27a60090
  .word 0x0c131af8
  .word 0x00000000
  .word 0x27a40630
  .word 0x27a50640
  .word 0x0260302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a40638
  .word 0x00000000
  .word 0x4604b083
  .word 0x46152001
  .word 0x46140042
  .word 0x44800000
  .word 0x00000000
  .word 0x46170018
  .word 0x460110dc
  .word 0xc7a00630
  .word 0x46040043
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010082
  .word 0xe7a20630
  .word 0xc7a00634
  .word 0x46040043
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a00634
  .word 0xe6820000
  .word 0xe6800004
  .word 0xe6830008
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46030003
  .word 0x00000000
  .word 0xe6800018
  .word 0x92220000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800020
  .word 0x92220001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800024
  .word 0x92220002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800028
  .word 0x92220003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe680002c
  .word 0x26940040
  .word 0xc7808210
  .word 0x4600c600
  .word 0x26520001
  .word 0x2e420014
  .word 0x1440ff86
  .word 0x00000000
  .word 0xc7a000f0
  .word 0xe6800000
  .word 0xc7a000f4
  .word 0xe6800004
  .word 0xc7a000f8
  .word 0xe6800008
  .word 0xc7a00108
  .word 0xe6800018
  .word 0x92220000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800020
  .word 0x92220001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800024
  .word 0x92220002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6800028
  .word 0x92220003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe680002c
  .word 0x24040002
  .word 0x27a500f0
  .word 0x24060015
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x12000014
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x001018c0
  .word 0x3c02006a
  .word 0x2442ce60
  .word 0x00431821
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c640000
  .word 0x8c4500d0
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2e030006
  .word 0x1460fff1
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0660
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop

/* DUMMYDUMB session 2026-10-20: 40 differing bytes in a 784-byte function (the
 * size matches). The residual is a saved-register role difference (ours
 * $s0/$s1/$s2 where retail uses $s2/$s3/$s4) plus the FPU/branch roles.
 * Probed: the declaration-order lever (9 locals, 60 permutations) - every order
 * stayed at 40; the static data addressed by its retail address (0x0069cec8 for
 * sSphereRotAxis, 0x0069ce60 for sRenderStates) - that makes it much worse
 * (488 bytes, +8 bytes of code) because mwcc then materialises a third
 * instruction instead of the retail lui+load pair. Note the static-data
 * difference itself is relocation-masked and is not what the residual is about.
 * DUMMYDUMB session 2026-10-21: MATCHED. The residual was a register-LIFETIME
 * problem, not a register-role one, and the lever is a function-scoped
 * `#pragma opt_lifetimes on` (push/pop, so the file's pragma state is
 * restored): 40 -> 0 differing bytes, object size unchanged at 784. The
 * declaration order was the wrong lever for this function - the saved
 * registers were already right, the lifetimes were not. */
// FUN_00359b40
#pragma push
#pragma opt_lifetimes on
void primSphereLine3D(const RwV3d* center, f32 radius, const RwRGBA* color, u32 saveAndRestoreRenderState)
{
    const RwRGBA* color_p = color;
    f32 radius_p = radius;
    u32 i;
    const PrimRenderState* currRenderState;
    RwMatrix mat;
    u32 savedRenderStates[PRIM_RENDERSTATE_COUNT];
    u32* currSavedRenderState;
    RwV3d finalCenter;
    RwSphere rwSphere;
    RwV3d rotAxis;
    u32 j;
    f32 yOffset;
    f32 circleRadius;
    f32 angle;

    rotAxis = sSphereRotAxis;
    rwSphere.radius = radius_p;
    rwSphere.center.x = center->x;
    rwSphere.center.y = center->y;
    rwSphere.center.z = center->z;
    if (RwCameraFrustumTestSphere(RwCameraGetCurrentCamera(), &rwSphere) != rwSPHEREOUTSIDE)
    {
        if (saveAndRestoreRenderState)
        {
            for (i = 0; i < PRIM_RENDERSTATE_COUNT; i++)
            {
                currRenderState = &sRenderStates[i];
                RwRenderStateGet((currSavedRenderState = &savedRenderStates[i], currRenderState->renderState), currSavedRenderState);
                RwRenderStateSet(currRenderState->renderState, currRenderState->val);
            }

            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);

            RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)SCE_GS_SET_ALPHA_1(0, 2, 0, 1, 0));
            RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)SCE_GS_SET_TEST_1(1, 0, 128, 1, 0, 0, 1, 3));
        }

        mat.right.x = mat.up.y = mat.at.z = 1.0f;
        angle = 0.0f;
        mat.right.y = mat.right.z = mat.up.x = 0.0f;
        mat.up.z = mat.at.x = mat.at.y = 0.0f;
        mat.pos.x = mat.pos.y = mat.pos.z = 0.0f;
        mat.flags |= (rwMATRIXINTERNALIDENTITY | rwMATRIXTYPEORTHONORMAL);

        for (j = 0; j < 9; j++)
        {
            angle += g18deg;
            yOffset = radius_p * cosf(angle);
            circleRadius = radius_p * sinf(angle);

            finalCenter.x = center->x;
            finalCenter.y = center->y + yOffset;
            finalCenter.z = center->z;

            primCircleLine3D(&finalCenter, circleRadius, color_p, &mat, false);
        }

        RwMatrixRotate(&mat, &rotAxis, 90.0f, rwCOMBINEPOSTCONCAT);

        angle = 0.0f;
        for (j = 0; j < 9; j++)
        {
            angle += g18deg;
            yOffset = radius_p * cosf(angle);
            circleRadius = radius * sinf(angle);

            finalCenter.x = center->x;
            finalCenter.y = center->y;
            finalCenter.z = center->z + yOffset;

            primCircleLine3D(&finalCenter, circleRadius, color, &mat, false);
        }

        if (saveAndRestoreRenderState)
        {
            for (j = 0; j < PRIM_RENDERSTATE_COUNT; j++)
            {
                RwRenderStateSet((0, sRenderStates[j]).renderState, savedRenderStates[j]);
            }
        }
    }
}
#pragma pop

// FUN_00359e50
asm void primCylinderLine3D(const RwV3d* center, f32 radius, f32 height, const RwRGBA* color, u32 saveAndRestoreRenderState)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x46006606
  .word 0x46006dc6
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x4617c036
  .word 0x45010004
  .word 0x00000000
  .word 0x4600c006
  .word 0x10000002
  .word 0x00000000
  .word 0x4600b806
  .word 0xe7a0008c
  .word 0xc6400000
  .word 0xe7a00080
  .word 0xc6400004
  .word 0xe7a00084
  .word 0xc6400008
  .word 0xe7a00088
  .word 0x3c020096
  .word 0x8c440070
  .word 0x27a50080
  .word 0x0c13277c
  .word 0x00000000
  .word 0x104000da
  .word 0x00000000
  .word 0x12000029
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000014
  .word 0x00000000
  .word 0x001418c0
  .word 0x3c02006a
  .word 0x2442ce60
  .word 0x00439821
  .word 0x00141080
  .word 0x005d1021
  .word 0x8e640000
  .word 0x24450090
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e640000
  .word 0x8e650004
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2e820006
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600bd43
  .word 0xc6400000
  .word 0xe7a000d0
  .word 0x3c033f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46170502
  .word 0xc6400004
  .word 0x46140001
  .word 0xe7a000d4
  .word 0xc6400008
  .word 0xe7a000d8
  .word 0x0000982d
  .word 0x1000000c
  .word 0x00000000
  .word 0x27a400d0
  .word 0x4600c306
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0d6558
  .word 0x00000000
  .word 0xc7a000d4
  .word 0x46150000
  .word 0xe7a000d4
  .word 0x26730001
  .word 0x2e630008
  .word 0x1460fff3
  .word 0x00000000
  .word 0x4480b000
  .word 0x0000982d
  .word 0x4600b847
  .word 0x3c033f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010542
  .word 0x10000027
  .word 0x00000000
  .word 0x4600b306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600c002
  .word 0xe7a000b0
  .word 0xe7b500b4
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600c102
  .word 0xe7a400b8
  .word 0xc7a100b0
  .word 0xe7a100bc
  .word 0xe7b400c0
  .word 0xe7a400c4
  .word 0xc6400000
  .word 0x460008c0
  .word 0xe7a300b0
  .word 0xc6420004
  .word 0xc7a000b4
  .word 0x46020000
  .word 0xe7a000b4
  .word 0xc6400008
  .word 0x46002040
  .word 0xe7a100b8
  .word 0xe7a300bc
  .word 0x4602a000
  .word 0xe7a000c0
  .word 0xe7a100c4
  .word 0x27a400b0
  .word 0x27a500bc
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c0d6444
  .word 0x00000000
  .word 0xc7808418
  .word 0x4600b580
  .word 0x26730001
  .word 0x2e63000a
  .word 0x1460ffd8
  .word 0x00000000
  .word 0x4480a000
  .word 0x0000982d
  .word 0x10000042
  .word 0x00000000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600c002
  .word 0xe7a000b0
  .word 0xe7b500b4
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600c002
  .word 0xe7a000b8
  .word 0xc7808248
  .word 0x46140580
  .word 0x4600b306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600c002
  .word 0xe7a000bc
  .word 0xe7b500c0
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600c102
  .word 0xe7a400c4
  .word 0xc7a000b0
  .word 0xc6430000
  .word 0x46030000
  .word 0xe7a000b0
  .word 0xc6420004
  .word 0xc7a000b4
  .word 0x46020000
  .word 0xe7a000b4
  .word 0xc6410008
  .word 0xc7a000b8
  .word 0x46010000
  .word 0xe7a000b8
  .word 0xc7a000bc
  .word 0x46030000
  .word 0xe7a000bc
  .word 0xc7a000c0
  .word 0x46020000
  .word 0xe7a000c0
  .word 0x46012000
  .word 0xe7a000c4
  .word 0x27a400b0
  .word 0x27a500bc
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c0d6444
  .word 0x00000000
  .word 0xc7a000b4
  .word 0x46170000
  .word 0xe7a000b4
  .word 0xc7a000c0
  .word 0x46170000
  .word 0xe7a000c0
  .word 0x27a400b0
  .word 0x27a500bc
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c0d6444
  .word 0x00000000
  .word 0xc7808418
  .word 0x4600a500
  .word 0x26730001
  .word 0x2e630005
  .word 0x1460ffbd
  .word 0x00000000
  .word 0x12000014
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x001018c0
  .word 0x3c02006a
  .word 0x2442ce60
  .word 0x00431821
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c640000
  .word 0x8c450090
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2e030006
  .word 0x1460fff1
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


/* ---- Recovered range 0x35A290-0x35AD50 (Ghidra reference, pending match) ---- */
typedef struct
{
    u8 pad0[8];
    struct
    {
        f32 x;
        f32 y;
        f32 z;
        f32 w;
    } quat;
    f32 values[6];
    f32 value30;
} PrimInterpData;

typedef void (*PrimFuncB)(void*, void*, void*, f32);
typedef void (*PrimFuncA)(int, int);
typedef u32 (*PrimFuncC)(int, u64);
typedef u64 (*PrimFuncD)(u64, u64);
typedef void (*PrimFuncE)(void*, void*);
typedef void (*PrimFuncStub)(void);
typedef struct
{
    u32 hash;
    u32 size0;
    u32 size1;
    PrimFuncA funcA;
    PrimFuncB funcB;
    PrimFuncB funcB2;
    PrimFuncStub funcC;
    PrimFuncE funcD;
    PrimFuncD funcE;
    PrimFuncC funcF;
    PrimFuncStub funcG;
    u32 zero;
} PrimDesc;
#ifndef CONCAT11
#define CONCAT11(hi, lo) ((u16)((((u16)(u8)(hi)) << 8) | (u8)(lo)))
#endif
#ifndef CONCAT12
#define CONCAT12(hi, lo) ((u32)((((u32)(u8)(hi)) << 16) | (u16)(lo)))
#endif
extern float fGpffff8028;
extern u8 gp0xffff9d68;
extern void LAB_0035aa10(void);
extern u32 LAB_0035a850(void* param_1);
extern void* FUN_004c33d0(void* matrix, const void* scale, int combineOp);
extern void FUN_004c2f30(int dst, u8* a, float* b);
extern long FUN_004c1750(u64 stream, void* buf, int size);
extern long FUN_004c17f0(u64 stream, void* buf, int size);
extern long FUN_004c18b0(u64 stream, void* buf, int size);
extern long FUN_004c1910(u64 stream, void* buf, int size);
#pragma alias FUN_004c18b0_typed FUN_004c18b0
extern long FUN_004c18b0_typed(void* stream, void* buf, int size);
#pragma alias FUN_004c1910_typed FUN_004c1910
extern long FUN_004c1910_typed(void* stream, void* buf, int size);
extern long FUN_004b6680(void* desc);
extern void FUN_005225a8(u8* fmt, ...);
extern f32 FUN_0052e878(f32 angle);
extern f32 FUN_0052e9e8(f32 param_1);
void FUN_0035a290(int param_1, int param_2);
void FUN_0035a3f0(void* param_2, void* param_3, void* param_4, f32 param_1);
void FUN_0035a620(void* param_2, void* param_3, void* param_4, f32 param_1);
u32 FUN_0035a6a0(int param_1,u64 param_2);
void* FUN_0035a770(void* param_1, void* param_2);
void FUN_0035a870(void* param_1, void* param_2);
typedef struct
{
    f32 m00;
    f32 m01;
    f32 m02;
    u32 mode;
    f32 m10;
    f32 m11;
    f32 m12;
    u32 pad1;
    f32 m20;
    f32 m21;
    f32 m22;
    u32 unused;
    u32 pad2;
    u32 pad3;
    u32 pad4;
} PrimMatrixData;

// FUN_0035A290


void FUN_0035a290(int param_1, int param_2)
{
    u8 buffer[64];
    PrimMatrixData matrix;
    f32 xx;
    f32 yy;
    f32 zz;
    f32 yz;
    f32 zx;
    f32 xy;
    f32 wx;
    f32 wy;
    f32 wz;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    f32 value30;
    f32 value34;
    f32 value38;

    x = *(f32*)(param_2 + 8);
    y = *(f32*)(param_2 + 0xc);
    z = *(f32*)(param_2 + 0x10);
    w = *(f32*)(param_2 + 0x14);
    xx = x * x;
    yy = y * y;
    zz = z * z;
    yz = y * z;
    zx = z * x;
    xy = x * y;
    wx = w * x;
    wy = w * y;
    wz = w * z;

    matrix.m00 = 1.0f - (yy + zz) * 2.0f;
    matrix.m01 = (xy + wz) * 2.0f;
    matrix.m02 = (zx - wy) * 2.0f;
    matrix.m10 = (xy - wz) * 2.0f;
    matrix.m11 = 1.0f - (xx + zz) * 2.0f;
    matrix.m12 = (yz + wx) * 2.0f;
    matrix.m20 = (zx + wy) * 2.0f;
    matrix.m21 = (yz - wx) * 2.0f;
    matrix.m22 = 1.0f - (xx + yy) * 2.0f;

    matrix.pad2 = 0;
    matrix.pad3 = 0;
    matrix.pad4 = 0;
    matrix.mode = 3;

    FUN_004c33d0((void*)buffer, (const void*)((u8*)param_2 + 0x24), 0);
    FUN_004c2f30(param_1, buffer, (f32*)&matrix);

    value30 = *(volatile /* Removing this function's qualifier batch loses FUN_0035a290 (MATCH nd0 -> MISMATCH nd6, size 348 -> 348) - measured W170. */ f32*)(param_2 + 0x18);
    value34 = *(volatile /* Removing this function's qualifier batch loses FUN_0035a290 (MATCH nd0 -> MISMATCH nd6, size 348 -> 348) - measured W170. */ f32*)(param_2 + 0x1c);
    value38 = *(volatile /* Removing this function's qualifier batch loses FUN_0035a290 (MATCH nd0 -> MISMATCH nd6, size 348 -> 348) - measured W170. */ f32*)(param_2 + 0x20);
    *(f32*)((int)param_1 + 0x30) = value30;
    *(f32*)((int)param_1 + 0x34) = value34;
    *(f32*)((int)param_1 + 0x38) = value38;
    *(u32*)((int)param_1 + 0xc) = *(u32*)((int)param_1 + 0xc) & 0xfffdffff;
}

// FUN_0035A3F0


void FUN_0035a3f0(void* param_2, void* param_3, void* param_4, f32 param_1)
{
    PrimInterpData* out = (PrimInterpData*)param_2;
    const PrimInterpData* first = (const PrimInterpData*)param_3;
    PrimInterpData* second = (PrimInterpData*)param_4;
    f32 dot;
    f32 firstWeight;
    f32 secondWeight;
    f32 angle;
    f32 invSin;

    dot = first->quat.x * second->quat.x +
          first->quat.y * second->quat.y +
          first->quat.z * second->quat.z +
          first->quat.w * second->quat.w;
    if (dot < 0.0f)
    {
        dot = -dot;
        second->quat.x = -second->quat.x;
        second->quat.y = -second->quat.y;
        second->quat.z = -second->quat.z;
        second->quat.w = -second->quat.w;
    }

    firstWeight = 1.0f - param_1;
    secondWeight = param_1;
    if (dot < fGpffff8028)
    {
        angle = FUN_0052e9e8(dot);
        invSin = 1.0f / FUN_0052e878(angle);
        firstWeight = invSin * FUN_0052e878(firstWeight * angle);
        secondWeight = invSin * FUN_0052e878(secondWeight * angle);
    }

    out->quat.x = firstWeight * first->quat.x + secondWeight * second->quat.x;
    out->quat.y = firstWeight * first->quat.y + secondWeight * second->quat.y;
    out->quat.z = firstWeight * first->quat.z + secondWeight * second->quat.z;
    out->quat.w = firstWeight * first->quat.w + secondWeight * second->quat.w;

    out->values[0] = secondWeight * (second->values[0] - first->values[0]) + first->values[0];
    out->values[1] = secondWeight * (second->values[1] - first->values[1]) + first->values[1];
    out->values[2] = secondWeight * (second->values[2] - first->values[2]) + first->values[2];
    out->values[3] = secondWeight * (second->values[3] - first->values[3]) + first->values[3];
    out->values[4] = secondWeight * (second->values[4] - first->values[4]) + first->values[4];
    out->values[5] = secondWeight * (second->values[5] - first->values[5]) + first->values[5];
}

// FUN_0035A620


void FUN_0035a620(void* param_2, void* param_3, void* param_4, f32 param_1)
{
    PrimInterpData* out = (PrimInterpData*)param_2;
    const PrimInterpData* first = (const PrimInterpData*)param_3;
    const PrimInterpData* second = (const PrimInterpData*)param_4;
    f32 firstTime;
    f32 secondTime;
    f32 t;

    firstTime = *(const f32*)((const u8*)first + 4);
    secondTime = *(const f32*)((const u8*)second + 4);
    t = (param_1 - firstTime) / (secondTime - firstTime);
    FUN_0035a3f0(out, (void*)first, (void*)second, t);
    out->value30 = first->value30 * second->value30;
}

// FUN_0035A6A0


u32 FUN_0035a6a0(int param_1, u64 param_2)
{
    int iVar1;
    long lVar2;
    int* piVar3;
    int iVar4;
    int iStack_4;

    iVar1 = *(int*)((u8*)param_1 + 0x10);
    iVar4 = 0;
    while (iVar4 < *(int*)((u8*)param_1 + 4))
    {
        piVar3 = (int*)((u8*)iVar1 + iVar4 * 0x34);
        iStack_4 = *piVar3 - iVar1;
        lVar2 = FUN_004c1750(param_2, piVar3 + 1, 0x30);
        if ((lVar2 == 0) || ((lVar2 = FUN_004c17f0(param_2, &iStack_4, 4), lVar2 == 0)))
        {
            return 0;
        }
        iVar4++;
    }
    return 1;
}

// FUN_0035A770


void* FUN_0035a770(void* param_1, void* param_2)
{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iStack_4;

  iVar1 = *(int *)((int)param_2 + 0x10);
  iVar4 = 0;
  while (iVar4 < *(int *)((int)param_2 + 4)) {
    piVar3 = (int *)(iVar1 + iVar4 * 0x34);
    lVar2 = FUN_004c18b0_typed(param_1,piVar3 + 1,0x30);
    if ((lVar2 == 0) ||
        (lVar2 = FUN_004c1910_typed(param_1,&iStack_4,4), lVar2 == 0)) {
      return 0;
    }
    *piVar3 = iVar1 + iStack_4;
    iVar4 = iVar4 + 1;
  }
  return param_2;
}
// FUN_0035a850
u32 LAB_0035a850(void* param_1)
{
    u32 index = *(u32*)((u8*)param_1 + 4);
    u32 result = index << 1;
    result += index;
    result <<= 2;
    result += index;
    result <<= 2;
    return result;
}

// The retail callback table places a second callback at 0x0035AA10; its
// marker below narrows this function's true window to 0x1A0 bytes.
// Remaining differences are MWCCPS2 FPU register allocation/scheduling.
// FUN_0035A870


asm void FUN_0035a870(void* param_1, void* param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xc4850008
  .word 0xc484000c
  .word 0xc4830010
  .word 0xc4820014
  .word 0xe7a50000
  .word 0xe7a40004
  .word 0xe7a30008
  .word 0xe7a2000c
  .word 0xc4a7000c
  .word 0xc4a60008
  .word 0xc4a50010
  .word 0xc4a40014
  .word 0x4607381a
  .word 0x44801800
  .word 0x4606301e
  .word 0x4605281e
  .word 0x4604209c
  .word 0x46031036
  .word 0x4501000a
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020003
  .word 0x46002282
  .word 0x46000007
  .word 0x46003242
  .word 0x46003842
  .word 0x46002802
  .word 0xc7a80004
  .word 0xc7a70008
  .word 0xc7a6000c
  .word 0xc7a50000
  .word 0x4608081a
  .word 0x44802000
  .word 0x00000000
  .word 0x4605481e
  .word 0x460700dc
  .word 0x46065082
  .word 0x46031081
  .word 0xe4820014
  .word 0x4607081a
  .word 0x4608009d
  .word 0xe4820008
  .word 0x4605001a
  .word 0x4607489d
  .word 0xe482000c
  .word 0x4608481a
  .word 0x4605089d
  .word 0xe4820010
  .word 0xc4820008
  .word 0x46022018
  .word 0x460a289c
  .word 0xe4820008
  .word 0xc482000c
  .word 0x46022018
  .word 0x460a409c
  .word 0xe482000c
  .word 0xc4820010
  .word 0x46022018
  .word 0x460a389c
  .word 0xe4820010
  .word 0xc4820008
  .word 0x46022018
  .word 0x4606489c
  .word 0xe4820008
  .word 0xc482000c
  .word 0x46022018
  .word 0x4606085c
  .word 0xe481000c
  .word 0xc4810010
  .word 0x46012018
  .word 0x4606001c
  .word 0xe4800010
  .word 0xc4a10018
  .word 0xc4800018
  .word 0x46010001
  .word 0xe4800018
  .word 0xc4a1001c
  .word 0xc480001c
  .word 0x46010001
  .word 0xe480001c
  .word 0xc4a10020
  .word 0xc4800020
  .word 0x46010001
  .word 0xe4800020
  .word 0xc4a10024
  .word 0xc4800024
  .word 0x46010001
  .word 0xe4800024
  .word 0xc4a10028
  .word 0xc4800028
  .word 0x46010001
  .word 0xe4800028
  .word 0xc4a1002c
  .word 0xc480002c
  .word 0x46010001
  .word 0xe480002c
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
// FUN_0035AA10
void FUN_0035aa10(int param_1, int param_2, int param_3)
{
    *(f32*)(param_1 + 0x14) =
        *(f32*)(param_2 + 0x14) * *(f32*)(param_3 + 0x14) -
        (*(f32*)(param_2 + 8) * *(f32*)(param_3 + 8) +
         *(f32*)(param_2 + 0xc) * *(f32*)(param_3 + 0xc) +
         *(f32*)(param_2 + 0x10) * *(f32*)(param_3 + 0x10));
    *(f32*)(param_1 + 8) =
        *(f32*)(param_2 + 0xc) * *(f32*)(param_3 + 0x10) -
        *(f32*)(param_2 + 0x10) * *(f32*)(param_3 + 0xc);
    *(f32*)(param_1 + 0xc) =
        *(f32*)(param_2 + 0x10) * *(f32*)(param_3 + 8) -
        *(f32*)(param_2 + 8) * *(f32*)(param_3 + 0x10);
    *(f32*)(param_1 + 0x10) =
        *(f32*)(param_2 + 8) * *(f32*)(param_3 + 0xc) -
        *(f32*)(param_2 + 0xc) * *(f32*)(param_3 + 8);
    *(f32*)(param_1 + 8) += *(f32*)(param_3 + 8) * *(f32*)(param_2 + 0x14);
    *(f32*)(param_1 + 0xc) += *(f32*)(param_3 + 0xc) * *(f32*)(param_2 + 0x14);
    *(f32*)(param_1 + 0x10) += *(f32*)(param_3 + 0x10) * *(f32*)(param_2 + 0x14);
    *(f32*)(param_1 + 8) += *(f32*)(param_2 + 8) * *(f32*)(param_3 + 0x14);
    *(f32*)(param_1 + 0xc) += *(f32*)(param_2 + 0xc) * *(f32*)(param_3 + 0x14);
    *(f32*)(param_1 + 0x10) += *(f32*)(param_2 + 0x10) * *(f32*)(param_3 + 0x14);
    *(f32*)(param_1 + 0x18) = *(f32*)(param_2 + 0x18) + *(f32*)(param_3 + 0x18);
    *(f32*)(param_1 + 0x1c) = *(f32*)(param_2 + 0x1c) + *(f32*)(param_3 + 0x1c);
    *(f32*)(param_1 + 0x20) = *(f32*)(param_2 + 0x20) + *(f32*)(param_3 + 0x20);
    *(f32*)(param_1 + 0x24) = *(f32*)(param_2 + 0x24) + *(f32*)(param_3 + 0x24);
    *(f32*)(param_1 + 0x28) = *(f32*)(param_2 + 0x28) + *(f32*)(param_3 + 0x28);
    *(f32*)(param_1 + 0x2c) = *(f32*)(param_2 + 0x2c) + *(f32*)(param_3 + 0x2c);
}

// FUN_0035ABA0


u32 FUN_0035aba0(void)
{
    PrimDesc desc;
    long result;

    desc.hash = 0x44a07195;
    desc.size1 = 0x34;
    desc.size0 = 0x34;
    desc.funcA = FUN_0035a290;
    desc.funcB = FUN_0035a3f0;
    desc.funcB2 = FUN_0035a620;
    desc.funcC = &LAB_0035aa10;
    desc.funcD = FUN_0035a870;
    desc.funcE = (u64 (*)(u64, u64))FUN_0035a770;
    desc.funcF = FUN_0035a6a0;
    desc.funcG = (void (*)())LAB_0035a850;
    desc.zero = 0;

    result = FUN_004b6680(&desc);
    return result != 0;
}

// FUN_0035AC50


void FUN_0035ac50(u64 param_1)



{

  do {

    FUN_005225a8(&gp0xffff9d68,param_1);

  } while( true );

}

// FUN_0035AC80


void FUN_0035ac80(void)



{

  return;

}

// FUN_0035AC90


void FUN_0035ac90(int *param_1,int param_2,u8 *param_3,int param_4)
{
  u8 bVar1;
  u8 *pbVar3;
  int iVar4;
  int iVar5;
  int updateOffset;

  pbVar3 = param_3;
  goto check;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if ((bVar1 & 1) == 0) {
      updateOffset = (int)(u32)bVar1 >> 1;
      goto update;
    }
    if ((bVar1 & 2) == 0) {
      updateOffset = (bVar1 | ((int)*pbVar3 << 8)) >> 2;
      pbVar3 = pbVar3 + 1;
      goto update;
    }
    if ((bVar1 & 4) == 0) {
      updateOffset = ((bVar1 | ((int)*pbVar3 << 8)) | ((int)pbVar3[1] << 16)) >> 3;
      pbVar3 = pbVar3 + 2;
      goto update;
    }
    iVar5 = ((int)(u32)bVar1 >> 3) + 2;
    for (iVar4 = 0; iVar4 < iVar5; iVar4 = iVar4 + 1) {
      param_1 = param_1 + 1;
      *param_1 = *param_1 + param_2;
    }
    goto check;
update:
    param_1 = param_1 + updateOffset;
    *param_1 = *param_1 + param_2;
check:
    updateOffset = ((int)pbVar3 - (int)param_3 < param_4);
    if (updateOffset == 0) {
      return;
    }
  } while (true);
}
