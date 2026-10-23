# Phase 3 — Tier 2 binding inventory

Date: 2026-10-23

Enumerates every RenderWare / Sony SDK / CRI callee reachable from Tier 1 game code,
with call counts. Signature and argument meaning come from the SDK headers under
`include/` (RenderWare) and the Sony/CRI SDKs; this document is the binding surface
that Tier 3 shims must implement.

Method: scan `src/**/*.c` for call expressions whose callee name starts with an SDK
prefix; decompiler-generated `_u32`/`_y2`/`_void`/etc. suffixes are collapsed to the
canonical name. Counts are call sites, not unique functions.

Totals: 108 canonical SDK callees, 1061 call sites.

## RenderWare (55 callees)

| callee | call sites |
|---|---|
| `RpMaterialAddUserDataArray` | 1 |
| `RpMaterialGetUserDataArray` | 10 |
| `RpMaterialGetUserDataArrayCount` | 8 |
| `RpRandom` | 71 |
| `RpRandomSeed` | 2 |
| `RpRandomSeedMT` | 2 |
| `RpSkyRenderStateSet` | 187 |
| `RpSkyRenderStateSet_persona` | 1 |
| `RpUserDataArrayGetFormat` | 12 |
| `RpUserDataArrayGetInt` | 6 |
| `RpUserDataArrayGetName` | 19 |
| `Rt2dMaestroDestroy` | 1 |
| `RtQuatConvertFromMatrix` | 11 |
| `RtQuatConvertToMatrix` | 2 |
| `RtQuatTransformVectors` | 41 |
| `RwBool` | 1 |
| `RwCalloc` | 66 |
| `RwCameraBeginUpdate` | 29 |
| `RwCameraClear` | 7 |
| `RwCameraEndUpdate` | 29 |
| `RwCameraFrustumTestSphere` | 14 |
| `RwCameraGetCurrentCamera` | 1 |
| `RwCameraSetProjectionType` | 5 |
| `RwCameraSetViewWindow` | 5 |
| `RwEngineGetMatrixTolerances` | 13 |
| `RwEngineInit` | 2 |
| `RwEngineSetMatrixTolerances` | 2 |
| `RwFrameGetLTM` | 5 |
| `RwFrameTransform` | 13 |
| `RwFree` | 102 |
| `RwIm2DGetNearScreenZ` | 9 |
| `RwIm2DRenderPrimitive` | 5 |
| `RwIm3DRenderLine` | 1 |
| `RwIm3DTransform` | 1 |
| `RwIm3DVertexSetPos` | 2 |
| `RwIm3DVertexSetRGBA` | 2 |
| `RwImageDestroy` | 1 |
| `RwImageRead` | 1 |
| `RwMalloc` | 24 |
| `RwMatrixMultiply` | 5 |
| `RwMatrixOptimize` | 13 |
| `RwMatrixRotate` | 27 |
| `RwMatrixRotate_f32` | 4 |
| `RwMatrixScale` | 13 |
| `RwMatrixSetIdentity` | 10 |
| `RwMatrixTranslate` | 16 |
| `RwMatrixUpdate` | 15 |
| `RwRasterCreate` | 7 |
| `RwRasterSetFromImage` | 1 |
| `RwRenderStateGet` | 5 |
| `RwRenderStateSet` | 28 |
| `RwV2dLength` | 1 |
| `RwV3dLength` | 35 |
| `RwV3dNormalize` | 71 |
| `RwV3dTransformPoint` | 13 |

## Sony sce* (41 callees)

| callee | call sites |
|---|---|
| `sceCdBindClient` | 1 |
| `sceCdDiskReady` | 2 |
| `sceCdDiskReadyFailure` | 1 |
| `sceCdInit` | 4 |
| `sceCdMmode` | 4 |
| `sceCdRead` | 1 |
| `sceCdSeek` | 1 |
| `sceCdSubmitNCmd` | 1 |
| `sceDbcInit` | 1 |
| `sceMc2CreateSocket` | 2 |
| `sceMc2Init` | 2 |
| `scePadGetReqState` | 2 |
| `scePadGetState` | 2 |
| `scePadInfoAct` | 2 |
| `scePadInit` | 1 |
| `scePadPortOpen` | 2 |
| `scePadRead` | 2 |
| `scePadSetActAlign` | 2 |
| `scePadSetActDirect` | 2 |
| `scePadSetMainMode` | 2 |
| `sceSifBindRpc` | 2 |
| `sceSifCallRpc` | 1 |
| `sceSifCheckStatRpc` | 1 |
| `sceSifDmaStat` | 2 |
| `sceSifExecRequest` | 1 |
| `sceSifExitRpc` | 1 |
| `sceSifGetNextRequest` | 1 |
| `sceSifGetOtherData` | 1 |
| `sceSifInitIopHeap` | 3 |
| `sceSifInitRpc` | 3 |
| `sceSifLoadIopHeap` | 1 |
| `sceSifLoadModule` | 2 |
| `sceSifLoadStartModule` | 1 |
| `sceSifRebootIop` | 1 |
| `sceSifRegisterRpc` | 1 |
| `sceSifRemoveRpc` | 1 |
| `sceSifRemoveRpcQueue` | 1 |
| `sceSifRpcLoop` | 1 |
| `sceSifSetDma` | 1 |
| `sceSifSetRpcQueue` | 1 |
| `sceSifSyncIop` | 1 |

## CRI/adx (0 callees)

| callee | call sites |
|---|---|

## other (12 callees)

| callee | call sites |
|---|---|
| `sif_copy_bytes` | 1 |
| `sif_copy_path` | 1 |
| `sif_copy_string` | 1 |
| `sif_load_module_request` | 2 |
| `sif_rpc_allocate_packet` | 1 |
| `sif_rpc_allocate_receive_packet` | 3 |
| `sif_rpc_end` | 1 |
| `sif_rpc_release_packet` | 2 |
| `sif_rpc_request_bind` | 1 |
| `sif_rpc_request_call` | 1 |
| `sif_rpc_request_other_data` | 1 |
| `sif_rpc_send` | 3 |

## Shim priority (Tier 4)

The Tier 4 middleware shims (h_pad, h_snd, h_cdvd, h_memcard, h_fade, h_cursor,
h_dbprt, h_sfdply, h_chrdsp, libc_core/libm) sit *above* these SDK calls: game code
calls the `h_*` interfaces, which in turn call into RenderWare/Sony/CRI. The shims
replace the lower layer with SDL/standard APIs, so the inventory above is the
contract the shims must preserve.

## Notes

- `RpSkyRenderStateSet`, `RwCamera*`, `RwIm2D*`, `RwIm3D*`, `RwRaster*`, `RwMatrix*`,
  `RwFrame*`, `RwV3d*` are the hot render path; these dominate the port effort.
- `sceCd*` (cdvd) and `scePad*`/`sceMc2*` (pad/memcard) are the I/O boundaries.
- `RwMalloc`/`RwCalloc`/`RwFree` (24/66/102 sites) are the allocation boundary; the
  PC port can route them to standard malloc or a tracking allocator.
- `RtQuat*` (41+ sites) and `RwMatrix*` are math; trivially portable.
