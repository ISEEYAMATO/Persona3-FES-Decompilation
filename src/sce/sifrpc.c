#include "mw_harvest_compat.h"
#include "sce/sifrpc.h"

/* auto-extern (generated) */
extern u32 register0x00000050;
extern u32 register0x00000060;
extern u32 register0x00000070;
extern u32 DAT_009695c0;
extern u32 DAT_20969144;
extern u32 DAT_0077f4b0;
extern u32 DAT_0077f4b8;
extern u32 DAT_0077f538;
extern u32 DAT_0077f53c;
#pragma alias DAT_0077f53c_abs DAT_0077f53c
extern u8 DAT_0077f53c_abs[];
extern u32 DAT_0077f540;
extern u32 DAT_0077f544;
#pragma alias DAT_0077f544_abs DAT_0077f544
extern u8 DAT_0077f544_abs[];
extern u32 DAT_0077f548;
extern u32 DAT_0077f54c;
extern u32 DAT_009684c0;
extern u32 DAT_009684c4;
extern u32 DAT_009684c8;
#pragma alias DAT_009684c8_abs DAT_009684c8
extern u8 DAT_009684c8_abs[];
extern u32 DAT_00968500;
#pragma alias DAT_00968500_abs DAT_00968500
extern u8 DAT_00968500_abs[];
extern u32 DAT_00968504;
extern u32 DAT_00968508;
extern u32 DAT_0096850c;
extern u32 DAT_00968510;
extern u32 DAT_00968514;
extern u32 DAT_00968518;
extern u32 DAT_0096851c;
extern u32 DAT_0096852c;
extern u32 DAT_0096854c;
extern u32 DAT_0096890b;
extern u32 DAT_0096890c;
extern u32 DAT_0096890f;
extern u32 DAT_00968913;
extern u32 DAT_00968914;
extern u32 DAT_00968918;
extern u32 DAT_0096891c;
extern u32 DAT_0096894f;
extern u32 DAT_00968d0b;
extern u32 DAT_00968d0c;
extern u32 DAT_00968d10;
extern u32 DAT_00968d14;
extern u32 DAT_00968d18;
extern u32 DAT_0096910c;
extern u32 DAT_00969110;
extern u32 DAT_00969180;
extern u32 DAT_00969a00;
extern u32 DAT_00969a04;
extern u32 DAT_00969c00;
extern u32 DAT_00969c24;
extern u32 DAT_00969c28;
extern u32 DAT_00969c80;
extern u32 DAT_00969c84;
#pragma alias DAT_00969c80_abs DAT_00969c80
extern u8 DAT_00969c80_abs[];
#pragma alias DAT_00969c84_abs DAT_00969c84
extern u8 DAT_00969c84_abs[];
extern u32 DAT_00969cc0;
extern u32 FUN_00508170(void);
extern u32 DAT_20969140;
extern void* PTR_DAT_0077f550;
extern u32 _DAT_00968510;
extern u32 _DAT_00968514;
extern u32 _DAT_00968518;
extern u32 _DAT_00968520;
extern u32 _DAT_00968530;
extern char s_SceStdioIobSema_007bdd40[];
extern char s_SceStdioQueSema_007bdd50[];
extern char s_SceStdioFioSema_007bddc8[];
extern char s_SceStdioOpenSema_007bdde0[];
extern char s_SceStdioCloseSema_007bddf8[];
extern char s_SceStdioLseekSema_007bde10[];
extern char s_SceStdioReadSema_007bde28[];
extern char s_SceStdioWriteSema_007bde40[];
extern char s_SceStdioIoctlSema_007bde58[];
extern char s_SceStdioIoctl2Sema_007bde70[];
extern char s_SceStdioCCodeSema_007bde88[];
extern char s_SceStdioMkdirSema_007bdea0[];
extern char s_SceStdioFormatSema_007bdeb8[];
extern char s_SceStdioAddDrvSema_007bded0[];
extern char s_SceStdioDcloseSema_007bdee8[];
extern char s_SceStdioDreadSema_007bdf00[];
extern char s_SceStdioGetstatSema_007bdf18[];
extern char s_SceStdioChstatSema_007bdf30[];
extern char s_SceStdioRenameSema_007bdf48[];
extern char s_SceStdioSyncSema_007bdf60[];
extern char s_SceStdioMountSema_007bdf78[];
extern char s_SceStdioLseek64Sema_007bdf90[];
extern char s_SceStdioDevctlSema_007bdfa8[];
extern char s_SceStdioSymlinkSema_007bdfc0[];
extern char s_SceStdioReadlinkSema_007bdfd8[];

#define SIF_RPC_PACKET_SIZE 64
#define SIF_RPC_PACKET_BUSY 1
#define SIF_RPC_MODE_NOWAIT 1
#define SIF_RPC_MODE_NO_CACHE 2
#define SIF_CMD_RPC_END 0x80000008
#define SIF_CMD_RPC_BIND 0x80000009
#define SIF_CMD_RPC_CALL 0x8000000A
#define SIF_CMD_RPC_RDATA 0x8000000C

typedef struct SifRpcPacket
{
    int command;
    int packet_size;
    void* destination;
    int data_size;
    int record_id;
    void* packet;
    int rpc_id;
} SifRpcPacket_t;

typedef struct SifRpcBindPacket
{
    SifRpcPacket_t header;
    SifRpcClientData_t* client;
    int server_id;
} SifRpcBindPacket_t;

typedef struct SifRpcCallPacket
{
    SifRpcPacket_t header;
    SifRpcClientData_t* client;
    int function;
    int send_size;
    void* receive_buffer;
    int receive_size;
    int receive_mode;
    void* server;
} SifRpcCallPacket_t;

typedef struct SifRpcOtherPacket
{
    SifRpcPacket_t header;
    SifRpcReceiveData_t* receive;
    void* source;
    void* destination;
    int size;
} SifRpcOtherPacket_t;

typedef struct SifRpcEndPacket
{
    SifRpcPacket_t header;
    SifRpcClientData_t* client;
    int command;
    void* server;
    void* buffer;
    void* callback_buffer;
} SifRpcEndPacket_t;

typedef struct SifRpcState
{
    int next_rpc_id;
    SifRpcPacket_t* packets;
    int packet_count;
    SifRpcPacket_t* receive_packets;
    int receive_packet_count;
    int receive_packet_index;
    SifRpcDataQueue_t* queues;
} SifRpcState_t;

static SifRpcPacket_t sRpcPackets[32] __attribute__((aligned(64)));
static SifRpcPacket_t sRpcReceivePackets[32] __attribute__((aligned(64)));
static SifRpcState_t sRpcState;
static int sRpcInitialized;

extern void func_00506148(void);
extern void FUN_005063c8(void);
extern int func_00506430(int command, void (*handler)(void*, void*), void* data);
extern int func_00506630(int command, void* packet, int packet_size, void* source, void* destination, int size);
extern void func_0050d3a0(void);
extern void func_0050d3f0(void);
extern int func_00503160(void* parameters);
extern void func_00503170(int semaphore);
extern void func_00503190(int semaphore);
extern void func_005031a0(int semaphore);

static void sif_rpc_release_packet(SifRpcPacket_t* packet)
{
    packet->rpc_id = 0;
    packet->record_id &= ~SIF_RPC_PACKET_BUSY;
}

static SifRpcPacket_t* sif_rpc_allocate_packet(void)
{
    int index;
    SifRpcPacket_t* packet;

    func_0050d3a0();
    for (index = 0, packet = sRpcState.packets; index < sRpcState.packet_count; index++, packet++)
    {
        if ((packet->record_id & SIF_RPC_PACKET_BUSY) == 0)
        {
            if (sRpcState.next_rpc_id == 0)
            {
                sRpcState.next_rpc_id = 2;
                packet->rpc_id = 1;
            }
            else
            {
                packet->rpc_id = sRpcState.next_rpc_id++;
            }
            packet->record_id = (index << 16) | 5;
            packet->packet = packet;
            func_0050d3f0();
            return packet;
        }
    }
    func_0050d3f0();
    return 0;
}

static SifRpcPacket_t* sif_rpc_allocate_receive_packet(void)
{
    int index;

    index = sRpcState.receive_packet_index % sRpcState.receive_packet_count;
    sRpcState.receive_packet_index = index + 1;
    return &sRpcState.receive_packets[index];
}

static int sif_rpc_send(int command, void* packet, void* source, void* destination, int size)
{
    return func_00506630(command, packet, SIF_RPC_PACKET_SIZE, source, destination, size);
}

static void sif_rpc_end(void* packet, void* data)
{
    SifRpcEndPacket_t* end;
    SifRpcClientData_t* client;

    (void)data;
    end = (SifRpcEndPacket_t*)packet;
    client = end->client;
    if (end->command == SIF_CMD_RPC_CALL)
    {
        if (client->end_function != 0)
        {
            client->end_function(client->end_parameter);
        }
    }
    else if (end->command == SIF_CMD_RPC_BIND)
    {
        client->server = end->server;
        client->buffer = end->buffer;
        client->callback_buffer = end->callback_buffer;
    }
    if (client->header.semaphore >= 0)
    {
        func_005031a0(client->header.semaphore);
    }
    if (client->header.packet != 0)
    {
        sif_rpc_release_packet((SifRpcPacket_t*)client->header.packet);
        client->header.packet = 0;
    }
}

static void sif_rpc_request_bind(void* packet, void* data)
{
    SifRpcBindPacket_t* bind;
    SifRpcEndPacket_t* end;
    SifRpcDataQueue_t* queue;
    SifRpcServerData_t* server;

    bind = (SifRpcBindPacket_t*)packet;
    end = (SifRpcEndPacket_t*)sif_rpc_allocate_receive_packet();
    end->header.packet = bind->header.packet;
    end->client = bind->client;
    end->command = SIF_CMD_RPC_BIND;
    server = 0;
    for (queue = (SifRpcDataQueue_t*)data; queue != 0 && server == 0; queue = queue->next)
    {
        for (server = queue->servers; server != 0; server = server->link)
        {
            if (server->server_id == bind->server_id)
            {
                break;
            }
        }
    }
    end->server = server;
    end->buffer = server != 0 ? server->buffer : 0;
    end->callback_buffer = server != 0 ? server->callback_buffer : 0;
    sif_rpc_send(SIF_CMD_RPC_END, end, 0, 0, 0);
}

static void sif_rpc_request_call(void* packet, void* data)
{
    SifRpcCallPacket_t* call;
    SifRpcServerData_t* server;
    SifRpcDataQueue_t* queue;

    (void)data;
    call = (SifRpcCallPacket_t*)packet;
    server = (SifRpcServerData_t*)call->server;
    if (server == 0)
    {
        return;
    }
    queue = server->queue;
    if (queue->request_head != 0)
    {
        queue->request_tail->next = server;
    }
    else
    {
        queue->request_head = server;
    }
    queue->request_tail = server;
    server->next = 0;
    server->packet = call->header.packet;
    server->client = call->client;
    server->rpc_number = call->function;
    server->size = call->send_size;
    server->receive_buffer = call->receive_buffer;
    server->receive_size = call->receive_size;
    server->receive_mode = call->receive_mode;
    server->receive_id = call->header.record_id;
}

static void sif_rpc_request_other_data(void* packet, void* data)
{
    SifRpcOtherPacket_t* other;
    SifRpcEndPacket_t* end;

    (void)data;
    other = (SifRpcOtherPacket_t*)packet;
    end = (SifRpcEndPacket_t*)sif_rpc_allocate_receive_packet();
    end->header.packet = other->header.packet;
    end->client = (SifRpcClientData_t*)other->receive;
    end->command = SIF_CMD_RPC_RDATA;
    sif_rpc_send(SIF_CMD_RPC_END, end, other->source, other->destination, other->size);
}

// FUN_005068A8
#ifndef PC_BUILD
asm void sceSifInitRpc(unsigned int mode)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0xffb20020
  .word 0xffb10010
  .word 0x0c1434e8
  .word 0xffb00000
  .word 0x3c030078
  .word 0x8c62f4b0
  .word 0x10400007
  .word 0x24110001
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x081434fc
  .word 0x27bd0040
  .word 0x0c1434fc
  .word 0xac71f4b0
  .word 0x0c141852
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c080097
  .word 0x24726c80
  .word 0x3c060096
  .word 0x3c070096
  .word 0x25108480
  .word 0x24030020
  .word 0x3c022000
  .word 0x24c67480
  .word 0x24e77c80
  .word 0x00c23025
  .word 0x00e23825
  .word 0xae030020
  .word 0x02421025
  .word 0xad118480
  .word 0x3c050050
  .word 0xae060014
  .word 0x3c048000
  .word 0xae020004
  .word 0x24a56ba8
  .word 0xae07001c
  .word 0x34840008
  .word 0x0200302d
  .word 0xae030008
  .word 0xae00000c
  .word 0xae000010
  .word 0xae030018
  .word 0x0c14190c
  .word 0xae000024
  .word 0x3c050050
  .word 0x3c048000
  .word 0x24a56f80
  .word 0x34840009
  .word 0x0c14190c
  .word 0x0200302d
  .word 0x3c050050
  .word 0x3c048000
  .word 0x24a571a0
  .word 0x3484000a
  .word 0x0c14190c
  .word 0x0200302d
  .word 0x3c050050
  .word 0x3c048000
  .word 0x24a56cb8
  .word 0x0200302d
  .word 0x0c14190c
  .word 0x3484000c
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x3c048000
  .word 0x0c140d5c
  .word 0x34840002
  .word 0x14400017
  .word 0xdfbf0030
  .word 0x26450040
  .word 0x3c048000
  .word 0xacb1000c
  .word 0x34840002
  .word 0x24060010
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14198c
  .word 0x0000482d
  .word 0x00000000
  .word 0x0c1417de
  .word 0x0000202d
  .word 0x1040fffd
  .word 0xdfbf0030
  .word 0x3c048000
  .word 0xdfb20020
  .word 0x24050001
  .word 0xdfb10010
  .word 0x34840002
  .word 0xdfb00000
  .word 0x08140d58
  .word 0x27bd0040
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00506A48
#ifndef PC_BUILD
asm void sceSifExitRpc(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c1418f2
  .word 0x00000000
  .word 0x3c020078
  .word 0xdfbf0000
  .word 0xac40f4b0
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00506A70
#ifndef PC_BUILD
asm int FUN_00506a70(int *param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080882d
  .word 0x8e240008
  .word 0x0000182d
  .word 0x18800019
  .word 0x8e300004
  .word 0x24050001
  .word 0x00000000
  .word 0x8e020010
  .word 0x30420001
  .word 0x54400010
  .word 0x24630001
  .word 0x00031400
  .word 0x34420005
  .word 0xae020010
  .word 0x8e220000
  .word 0x24430001
  .word 0x14650004
  .word 0xae230000
  .word 0x24420002
  .word 0x24030001
  .word 0xae220000
  .word 0xae100014
  .word 0x0c1434fc
  .word 0xae030018
  .word 0x10000007
  .word 0x0200102d
  .word 0x0064102a
  .word 0x1440ffeb
  .word 0x26100040
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */
#pragma optimization_level 1
#pragma schedule on
// FUN_00506B18
#ifndef PC_BUILD
asm void FUN_00506b18(int param_1)
{
  .set noreorder
  .word 0x8c830010
  .word 0x3c02ffff
  .word 0x3442fffe
  .word 0xac800018
  .word 0x00621824
  .word 0x03e00008
  .word 0xac830010
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* DUMMYDUMB session 2026-10-21: 3 differing bytes, the register the 0xffff0ffe
 * mask is built in.  Ours builds it in a1 (and the AND reuses a1), retail
 * builds it in v0 and the AND result goes to a1.
 * Probed: the two local declarations swapped, the mask as u32 or int, the
 * mask as a single constant, the mask inlined into the store, and the mask
 * as a separately named local - all keep it in a1.
 * Confirmed wall: register choice for the mask.
 */
typedef struct SifRpcAllocatorState
{
    u8 padding0[0x14];
    u8* packets;
    int packet_count;
    u8* packets2;
    int packet_count2;
    int packet_index;
} SifRpcAllocatorState_t;

typedef struct SifRpcQueueState
{
    u8 padding[0x28];
    SifRpcDataQueue_t* queues;
} SifRpcQueueState_t;

typedef struct SifRpcSendPacket
{
    u8 padding[0x24];
    void* source;
    void* destination;
    int size;
} SifRpcSendPacket_t;

extern int FUN_00506670(int command, void* packet, int packet_size, void* source, void* destination, int size);

#pragma optimization_level 2
#pragma schedule off
#pragma optimization_level 3
// FUN_00506B38
#ifndef PC_BUILD
asm SifRpcPacket_t* FUN_00506b38(SifRpcAllocatorState_t* state)
{
  .set noreorder
  .word 0x8c850024
  .word 0x8c830018
  .word 0x00a3001a
  .word 0x50600001
  .word 0x000001cd
  .word 0x8c850014
  .word 0x00001010
  .word 0x24430001
  .word 0x00021180
  .word 0xac830024
  .word 0x03e00008
  .word 0x00a21021
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00506B68
#ifndef PC_BUILD
asm SifRpcPacket_t* FUN_00506b68(SifRpcAllocatorState_t* state, int index)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x04a00005
  .word 0xffbf0000
  .word 0x8c820020
  .word 0x00a2102a
  .word 0x54400005
  .word 0x8c83001c
  .word 0x0c141ace
  .word 0x00000000
  .word 0x10000004
  .word 0xdfbf0000
  .word 0x00051180
  .word 0x00621021
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
#endif /* PC_BUILD: asm function omitted */
#pragma optimization_level 2
#pragma optimization_level 3
// FUN_00506BA8
#ifndef PC_BUILD
asm void FUN_00506ba8(SifRpcEndPacket_t* end)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c028000
  .word 0xffb20020
  .word 0x3442000a
  .word 0xffbf0030
  .word 0x0080902d
  .word 0xffb10010
  .word 0xffb00000
  .word 0x8e430020
  .word 0x10620009
  .word 0x0043102b
  .word 0x14400019
  .word 0x8e51001c
  .word 0x3c028000
  .word 0x34420009
  .word 0x10620011
  .word 0x00000000
  .word 0x10000014
  .word 0x8e240008
  .word 0x8e51001c
  .word 0x8e22001c
  .word 0x50400010
  .word 0x8e240008
  .word 0x8e220018
  .word 0x0380802d
  .word 0x0040e02d
  .word 0x8e22001c
  .word 0x0040f809
  .word 0x8e240020
  .word 0x0380182d
  .word 0x0200e02d
  .word 0x10000005
  .word 0x8e51001c
  .word 0x8e420024
  .word 0xae220024
  .word 0x8e430028
  .word 0xae230014
  .word 0x8e240008
  .word 0x04800003
  .word 0x00000000
  .word 0x0c140c64
  .word 0x00000000
  .word 0x0c141ac6
  .word 0x8e240000
  .word 0xae200000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma optimization_level 2
#pragma schedule on
// FUN_00506C78
#ifndef PC_BUILD
asm u32 FUN_00506c78(u32 unused0, u32 unused1, u32 unused2, SifRpcSendPacket_t* packet)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x00e0282d
  .word 0xffbf0000
  .word 0x3c048000
  .word 0x34840008
  .word 0x24060040
  .word 0x8ca70024
  .word 0x8ca80028
  .word 0x0c14199c
  .word 0x8ca9002c
  .word 0x24030800
  .word 0xdfbf0000
  .word 0x0002180b
  .word 0x0060102d
  .word 0x03e00008
  .word 0x27bd0010
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00506CB8
#ifndef PC_BUILD
asm void FUN_00506cb8(void* param_1, SifRpcAllocatorState_t* param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0x0080882d
  .word 0xffbf0020
  .word 0xffb00000
  .word 0x00a0202d
  .word 0x8e250010
  .word 0x30a20004
  .word 0x10400005
  .word 0x00000000
  .word 0x0c141ada
  .word 0x00052c02
  .word 0x10000004
  .word 0x0040802d
  .word 0x0c141ace
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e230014
  .word 0x3c028000
  .word 0x8e25001c
  .word 0x3442000c
  .word 0xae030014
  .word 0x3c048000
  .word 0xae05001c
  .word 0x34840008
  .word 0xae020020
  .word 0x0200282d
  .word 0x24060040
  .word 0x8e220020
  .word 0xae020024
  .word 0x8e230024
  .word 0xae030028
  .word 0x8e220028
  .word 0xae02002c
  .word 0x8e290028
  .word 0x8e270020
  .word 0x0c14199c
  .word 0x8e280024
  .word 0x14400009
  .word 0xdfbf0020
  .word 0x0200302d
  .word 0x3c050050
  .word 0x24a56c78
  .word 0xdfb10010
  .word 0x24040800
  .word 0xdfb00000
  .word 0x08143c70
  .word 0x27bd0030
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00506D88
#ifndef PC_BUILD
asm int sceSifBindRpc(SifRpcClientData_t* client, int server_id, int mode)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb10030
  .word 0x0080882d
  .word 0xffb50070
  .word 0xffb40060
  .word 0x3c040097
  .word 0xffb30050
  .word 0x00c0a02d
  .word 0xffb20040
  .word 0x00a0982d
  .word 0xffb00020
  .word 0x00e0a82d
  .word 0xffbf0080
  .word 0x0100902d
  .word 0x0c141a9c
  .word 0x24848480
  .word 0x0040802d
  .word 0x1200003e
  .word 0x2402ffff
  .word 0x8e020018
  .word 0x32430001
  .word 0xae300000
  .word 0xae220004
  .word 0xae130020
  .word 0xae140024
  .word 0xae150028
  .word 0xae100014
  .word 0x14600025
  .word 0xae11001c
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442dd10
  .word 0xafa30004
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa00008
  .word 0x04410005
  .word 0xae220008
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x10000026
  .word 0x2402fffd
  .word 0x3c048000
  .word 0x0200282d
  .word 0x3484000c
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14198c
  .word 0x0000482d
  .word 0x14400007
  .word 0x00000000
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x10000016
  .word 0x2402fffe
  .word 0x0c140c68
  .word 0x8e240008
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x10000010
  .word 0x0000102d
  .word 0x2402ffff
  .word 0x3c048000
  .word 0xae220008
  .word 0x3484000c
  .word 0x0200282d
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14198c
  .word 0x0000482d
  .word 0x14400004
  .word 0x0000102d
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x2402fffe
  .word 0xdfbf0080
  .word 0xdfb50070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00506EF0
#ifndef PC_BUILD
asm SifRpcServerData_t* FUN_00506ef0(int server_id, SifRpcQueueState_t* state)
{
  .set noreorder
  .word 0x8ca50028
  .word 0x10a0000f
  .word 0x00000000
  .word 0x8ca30008
  .word 0x5060000a
  .word 0x8ca50014
  .word 0x8c620000
  .word 0x00000000
  .word 0x54440003
  .word 0x8c630038
  .word 0x03e00008
  .word 0x0060102d
  .word 0x5460fffb
  .word 0x8c620000
  .word 0x8ca50014
  .word 0x54a0fff4
  .word 0x8ca30008
  .word 0x03e00008
  .word 0x0000102d
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00506F40
#ifndef PC_BUILD
asm u32 FUN_00506f40(u32 unused0, u32 unused1, u32 unused2, void* packet)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x00e0282d
  .word 0x3c048000
  .word 0xffbf0000
  .word 0x34840008
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14199c
  .word 0x0000482d
  .word 0x24030800
  .word 0xdfbf0000
  .word 0x0002180b
  .word 0x0060102d
  .word 0x03e00008
  .word 0x27bd0010
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00506F80
#ifndef PC_BUILD
asm void FUN_00506f80(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x00a0882d
  .word 0x0080802d
  .word 0xffb20020
  .word 0xffbf0030
  .word 0x0c141ace
  .word 0x0220202d
  .word 0x0040902d
  .word 0x8e04001c
  .word 0x8e030014
  .word 0x3c028000
  .word 0x34420009
  .word 0xae44001c
  .word 0xae430014
  .word 0x0220282d
  .word 0xae420020
  .word 0x0c141bbc
  .word 0x8e040020
  .word 0x54400004
  .word 0xae420024
  .word 0xae400024
  .word 0x10000003
  .word 0xae400028
  .word 0x8c420008
  .word 0xae420028
  .word 0x3c048000
  .word 0x0240282d
  .word 0x34840008
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14199c
  .word 0x0000482d
  .word 0x1440000a
  .word 0xdfbf0030
  .word 0x0240302d
  .word 0x3c050050
  .word 0x24a56f40
  .word 0xdfb20020
  .word 0x24040800
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x08143c70
  .word 0x27bd0040
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00507050
#ifndef PC_BUILD
asm int sceSifGetOtherData(SifRpcReceiveData_t* receive, void* source, void* destination, int size, int mode)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffb10030
  .word 0xffb30050
  .word 0x0080882d
  .word 0xffb20040
  .word 0x3c040097
  .word 0xffb00020
  .word 0x00a0982d
  .word 0xffbf0060
  .word 0x00c0902d
  .word 0xae200010
  .word 0x24848480
  .word 0x0c141a9c
  .word 0xae200024
  .word 0x0040802d
  .word 0x1200003c
  .word 0x2402ffff
  .word 0x8e020018
  .word 0x32430001
  .word 0xae300000
  .word 0xae220004
  .word 0xae130020
  .word 0xae100014
  .word 0x14600025
  .word 0xae11001c
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442dd20
  .word 0xafa30004
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa00008
  .word 0x04410005
  .word 0xae220008
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x10000026
  .word 0x2402fffd
  .word 0x3c048000
  .word 0x0200282d
  .word 0x34840009
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14198c
  .word 0x0000482d
  .word 0x14400007
  .word 0x00000000
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x10000016
  .word 0x2402fffe
  .word 0x0c140c68
  .word 0x8e240008
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x10000010
  .word 0x0000102d
  .word 0x2402ffff
  .word 0x3c048000
  .word 0xae220008
  .word 0x34840009
  .word 0x0200282d
  .word 0x24060040
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c14198c
  .word 0x0000482d
  .word 0x14400004
  .word 0x0000102d
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x2402fffe
  .word 0xdfbf0060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x8c850034
  .word 0x8ca60040
  .word 0x8cc2000c
  .word 0x54400003
  .word 0x8cc20010
  .word 0x10000002
  .word 0xacc5000c
  .word 0xac45003c
  .word 0xacc50010
  .word 0x8c820014
  .word 0x8c83001c
  .word 0xaca20020
  .word 0xaca3001c
  .word 0x8c820020
  .word 0xaca20024
  .word 0x8c830024
  .word 0xaca3000c
  .word 0x8c820028
  .word 0xaca20028
  .word 0x8c83002c
  .word 0xaca3002c
  .word 0x8c820030
  .word 0xaca20030
  .word 0x8c830010
  .word 0xaca30034
  .word 0x8cc40000
  .word 0x04800006
  .word 0x00000000
  .word 0x8cc20004
  .word 0x14400003
  .word 0x00000000
  .word 0x0814100a
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507230
#ifndef PC_BUILD
asm int sceSifCallRpc(SifRpcClientData_t* client, int function, int mode, void* send_buffer, int send_size, void* receive_buffer, int receive_size, SifRpcEndFunc_t callback, void* callback_data)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb10030
  .word 0x0080882d
  .word 0xffbe00a0
  .word 0xffb70090
  .word 0x3c040097
  .word 0xffb60080
  .word 0x00c0f02d
  .word 0xffb50070
  .word 0x00a0b02d
  .word 0xffb40060
  .word 0x00e0a82d
  .word 0xffb30050
  .word 0x0120a02d
  .word 0xffb20040
  .word 0x0140982d
  .word 0xffb00020
  .word 0x0100902d
  .word 0xffbf00b0
  .word 0x0160b82d
  .word 0x0c141a9c
  .word 0x24848480
  .word 0x0040802d
  .word 0x1200005c
  .word 0x2402ffff
  .word 0x8fa200c0
  .word 0x8e030018
  .word 0xae220020
  .word 0xae230004
  .word 0xae300000
  .word 0xae37001c
  .word 0x0380102d
  .word 0xae220018
  .word 0x33c30002
  .word 0xae160020
  .word 0xae120024
  .word 0xae140028
  .word 0xae13002c
  .word 0xae100014
  .word 0x8e220024
  .word 0xae11001c
  .word 0x14600011
  .word 0xae020034
  .word 0x16b40007
  .word 0x0253102a
  .word 0x0260282d
  .word 0x02a0202d
  .word 0x0c1419fe
  .word 0x0242280a
  .word 0x1000000a
  .word 0x33c20001
  .word 0x1a400003
  .word 0x02a0202d
  .word 0x0c1419fe
  .word 0x0240282d
  .word 0x1a600003
  .word 0x0280202d
  .word 0x0c1419fe
  .word 0x0260282d
  .word 0x33c20001
  .word 0x10400014
  .word 0x3c02007c
  .word 0x16e00003
  .word 0x24020001
  .word 0x10000002
  .word 0xae000030
  .word 0xae020030
  .word 0x2402ffff
  .word 0x3c048000
  .word 0x8e280014
  .word 0x02a0382d
  .word 0xae220008
  .word 0x0240482d
  .word 0x3484000a
  .word 0x0200282d
  .word 0x0c14198c
  .word 0x24060040
  .word 0x14400026
  .word 0x0000102d
  .word 0x1000001b
  .word 0x00000000
  .word 0x24130001
  .word 0x2442dd30
  .word 0xafa00008
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafb30004
  .word 0x04410005
  .word 0xae220008
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x10000017
  .word 0x2402fffd
  .word 0xae130030
  .word 0x3c048000
  .word 0x02a0382d
  .word 0x0240482d
  .word 0x8e280014
  .word 0x3484000a
  .word 0x0200282d
  .word 0x0c14198c
  .word 0x24060040
  .word 0x14400007
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x0c141ac6
  .word 0x0200202d
  .word 0x10000006
  .word 0x2402fffe
  .word 0x0c140c68
  .word 0x8e240008
  .word 0x0c140c5c
  .word 0x8e240008
  .word 0x0000102d
  .word 0xdfbf00b0
  .word 0xdfbe00a0
  .word 0xdfb70090
  .word 0xdfb60080
  .word 0xdfb50070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd00c0
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507430
#ifndef PC_BUILD
asm int sceSifCheckStatRpc(SifRpcClientData_t* client)
{
  .set noreorder
  .word 0x8c850000
  .word 0x10a00009
  .word 0x00000000
  .word 0x8c830004
  .word 0x8ca20018
  .word 0x14620005
  .word 0x00000000
  .word 0x8ca20010
  .word 0x30420001
  .word 0x14400003
  .word 0x00000000
  .word 0x03e00008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x24020001
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507470
#ifndef PC_BUILD
asm void sceSifSetRpcQueue(SifRpcDataQueue_t* queue, int thread_id)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x0080882d
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x00a0802d
  .word 0x3c030097
  .word 0xae300000
  .word 0x24638480
  .word 0xae200004
  .word 0x8c620028
  .word 0xae200008
  .word 0xae20000c
  .word 0xae200010
  .word 0x14400003
  .word 0xae200014
  .word 0x1000000e
  .word 0xac710028
  .word 0x0040202d
  .word 0x8c830014
  .word 0x5060000a
  .word 0xac910014
  .word 0x00000000
  .word 0x0060202d
  .word 0x8c820014
  .word 0x0040182d
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xac910014
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x081434fc
  .word 0x27bd0030
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507508
#ifndef PC_BUILD
asm void sceSifRegisterRpc(SifRpcServerData_t* server, int server_id, SifRpcFunc_t function, void* buffer, SifRpcFunc_t callback_function, void* callback_buffer, SifRpcDataQueue_t* queue)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb60060
  .word 0xffb50050
  .word 0x0140b02d
  .word 0xffb40040
  .word 0x0080a82d
  .word 0xffb30030
  .word 0x0120a02d
  .word 0xffb20020
  .word 0x0100982d
  .word 0xffb10010
  .word 0x00e0902d
  .word 0xffb00000
  .word 0x00c0882d
  .word 0xffbf0070
  .word 0x0c1434e8
  .word 0x00a0802d
  .word 0xaea0003c
  .word 0xaea00038
  .word 0xaeb00000
  .word 0x8ec20008
  .word 0xaeb10004
  .word 0xaeb20008
  .word 0xaeb30010
  .word 0xaeb40014
  .word 0x14400003
  .word 0xaeb60040
  .word 0x1000000e
  .word 0xaed50008
  .word 0x0040202d
  .word 0x8c830038
  .word 0x5060000a
  .word 0xac950038
  .word 0x00000000
  .word 0x0060202d
  .word 0x8c820038
  .word 0x0040182d
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xac950038
  .word 0xdfbf0070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x081434fc
  .word 0x27bd0080
}
#endif /* PC_BUILD: asm function omitted */

// FUN_005075D8
#ifndef PC_BUILD
asm SifRpcServerData_t* sceSifRemoveRpc(SifRpcServerData_t* server, SifRpcDataQueue_t* queue)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb20020
  .word 0xffb10010
  .word 0x00a0902d
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x0c1434e8
  .word 0x0080882d
  .word 0x8e500008
  .word 0x16110004
  .word 0x00000000
  .word 0x8e020038
  .word 0x1000000f
  .word 0xae420008
  .word 0x1200000d
  .word 0x00000000
  .word 0x8e030038
  .word 0x50710009
  .word 0x8e220038
  .word 0x00000000
  .word 0x0060802d
  .word 0x12000006
  .word 0x00000000
  .word 0x8e020038
  .word 0x1451fffb
  .word 0x0040182d
  .word 0x8e220038
  .word 0xae020038
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507670
#ifndef PC_BUILD
asm SifRpcDataQueue_t* sceSifRemoveRpcQueue(SifRpcDataQueue_t* queue)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080882d
  .word 0x3c030097
  .word 0x24638480
  .word 0x8c700028
  .word 0x16110004
  .word 0x00000000
  .word 0x8e020014
  .word 0x1000000f
  .word 0xac620028
  .word 0x1200000d
  .word 0x00000000
  .word 0x8e030014
  .word 0x50710009
  .word 0x8e220014
  .word 0x00000000
  .word 0x0060802d
  .word 0x12000006
  .word 0x00000000
  .word 0x8e020014
  .word 0x1451fffb
  .word 0x0040182d
  .word 0x8e220014
  .word 0xae020014
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507700
#ifndef PC_BUILD
asm SifRpcServerData_t* sceSifGetNextRequest(SifRpcDataQueue_t* queue)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x8e11000c
  .word 0x56200003
  .word 0x8e23003c
  .word 0x10000004
  .word 0xae000004
  .word 0x24020001
  .word 0xae020004
  .word 0xae03000c
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507758
#ifndef PC_BUILD
asm void sceSifExecRequest(SifRpcServerData_t* server)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb40060
  .word 0xffb20040
  .word 0x0000a02d
  .word 0xffb10030
  .word 0xffbf0070
  .word 0x0080882d
  .word 0xffb30050
  .word 0xffb00020
  .word 0x8e220004
  .word 0x8e240024
  .word 0x8e250008
  .word 0x0040f809
  .word 0x8e26000c
  .word 0x0040902d
  .word 0x56400001
  .word 0x8e34002c
  .word 0x8e25000c
  .word 0x18a00003
  .word 0x00000000
  .word 0x0c1419fe
  .word 0x8e240008
  .word 0x1a800003
  .word 0x0240202d
  .word 0x0c1419fe
  .word 0x0280282d
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x8e250034
  .word 0x30a20004
  .word 0x10400006
  .word 0x00052c02
  .word 0x3c040097
  .word 0x0c141ada
  .word 0x24848480
  .word 0x10000005
  .word 0x0040802d
  .word 0x3c040097
  .word 0x0c141ace
  .word 0x24848480
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x3c038000
  .word 0x8e24001c
  .word 0x3463000a
  .word 0xae030020
  .word 0xae04001c
  .word 0x8e220030
  .word 0x5040000e
  .word 0xae000018
  .word 0x00000000
  .word 0x3c048000
  .word 0x8e280028
  .word 0x34840008
  .word 0x0200282d
  .word 0x24060040
  .word 0x0240382d
  .word 0x0c14198c
  .word 0x0280482d
  .word 0x1040fff7
  .word 0xdfbf0070
  .word 0x1000002c
  .word 0xdfb40060
  .word 0x0000982d
  .word 0x1a800007
  .word 0xae000010
  .word 0x8e220028
  .word 0x24130001
  .word 0xafb20000
  .word 0xafa20004
  .word 0xafb40008
  .word 0xafa0000c
  .word 0x00132900
  .word 0x8e240020
  .word 0x03a51821
  .word 0x27a20004
  .word 0xac700000
  .word 0x00451021
  .word 0xac440000
  .word 0x27a30008
  .word 0x00651821
  .word 0x24040040
  .word 0x27a2000c
  .word 0xac640000
  .word 0x00451021
  .word 0x26730001
  .word 0xac400000
  .word 0x03a0202d
  .word 0x00000000
  .word 0x0c141822
  .word 0x0260282d
  .word 0x1440000d
  .word 0xdfbf0070
  .word 0x3c030010
  .word 0x2404ffff
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1464fffa
  .word 0x00000000
  .word 0x5040fff2
  .word 0x03a0202d
  .word 0xdfbf0070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507920
#ifndef PC_BUILD
asm void sceSifRpcLoop(SifRpcDataQueue_t* queue)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x10000004
  .word 0x0080802d
  .word 0x00000000
  .word 0x0c141dd6
  .word 0x00000000
  .word 0x0c141dc0
  .word 0x0200202d
  .word 0x1440fffb
  .word 0x0040202d
  .word 0x0c140c20
  .word 0x00000000
  .word 0x1000fff9
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00507960
#ifndef PC_BUILD
asm void FUN_00507960(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x2403ffff
  .word 0xffb00020
  .word 0x3c100078
  .word 0xffbf0030
  .word 0x8e02f548
  .word 0x14430012
  .word 0xdfbf0030
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442dd40
  .word 0xafa30004
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30008
  .word 0x3c03007c
  .word 0xae02f548
  .word 0x2463dd50
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30014
  .word 0x3c030078
  .word 0xac62f54c
  .word 0xdfbf0030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0040
}
#endif /* PC_BUILD: asm function omitted */
// FUN_005079D0
#ifndef PC_BUILD
asm int FUN_005079d0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x3c110078
  .word 0xffbf0020
  .word 0x0c141e58
  .word 0x0000802d
  .word 0x0c140c68
  .word 0x8e24f548
  .word 0x3c030097
  .word 0x24659a00
  .word 0x24a30200
  .word 0x00a3102b
  .word 0x10400009
  .word 0x0060302d
  .word 0x00000000
  .word 0x8ca40004
  .word 0x26030001
  .word 0x24a50010
  .word 0x0064800b
  .word 0x00a6102b
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0c140c60
  .word 0x8e24f548
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00507A50
#ifndef PC_BUILD
asm u8 * FUN_00507a50(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x0c141e58
  .word 0x3c110078
  .word 0x0c140c68
  .word 0x8e24f548
  .word 0x3c030097
  .word 0x24709a00
  .word 0x26030200
  .word 0x0203102b
  .word 0x1040000d
  .word 0x3c051000
  .word 0x8e020004
  .word 0x00000000
  .word 0x54400006
  .word 0x26100010
  .word 0x8e24f548
  .word 0x0c140c60
  .word 0xae050004
  .word 0x10000007
  .word 0x0200102d
  .word 0x0203102b
  .word 0x5440fff7
  .word 0x8e020004
  .word 0x0c140c60
  .word 0x8e24f548
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00507AD8
#ifndef PC_BUILD
asm int FUN_00507ad8(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                u32 param_5,u32 param_6,u32 param_7,u32 param_8)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbe00a0
  .word 0xffb70090
  .word 0x00c0f02d
  .word 0xffb60080
  .word 0x00e0b82d
  .word 0xffb50070
  .word 0x0100b02d
  .word 0xffb40060
  .word 0x0120a82d
  .word 0xffb30050
  .word 0x0140a02d
  .word 0xffb20040
  .word 0x0160982d
  .word 0xffb10030
  .word 0x0000902d
  .word 0xffbf00b0
  .word 0x24110001
  .word 0xffb00020
  .word 0xafa40010
  .word 0xafa50014
  .word 0x8fa200c0
  .word 0x03c0302d
  .word 0x8fa40010
  .word 0x02e0382d
  .word 0x8fa50014
  .word 0x02c0402d
  .word 0xafa20000
  .word 0x02a0482d
  .word 0x0280502d
  .word 0x0c141c8c
  .word 0x0260582d
  .word 0x000287c2
  .word 0x1200000c
  .word 0x8fa200c8
  .word 0x1440000a
  .word 0x240203e8
  .word 0x0c141076
  .word 0x02222018
  .word 0x2a23007f
  .word 0x54600001
  .word 0x00118840
  .word 0x26520001
  .word 0x2a420065
  .word 0x1440ffe9
  .word 0x8fa200c0
  .word 0x0200102d
  .word 0xdfbf00b0
  .word 0xdfbe00a0
  .word 0xdfb70090
  .word 0xdfb60080
  .word 0xdfb50070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00507BC8
#ifndef PC_BUILD
asm u8 * FUN_00507bc8(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0x0080802d
  .word 0xffbf0020
  .word 0x0c141e58
  .word 0x3c110078
  .word 0x0c140c68
  .word 0x8e24f548
  .word 0x2e030020
  .word 0x14600005
  .word 0x3c020097
  .word 0x0c140c60
  .word 0x8e24f548
  .word 0x10000007
  .word 0x0000102d
  .word 0x00108100
  .word 0x24429a00
  .word 0x8e24f548
  .word 0x0c140c60
  .word 0x02028021
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00507C38
#pragma push
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm void FUN_00507c38(int param_1)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffc0
  .word 0x8c43f540
  .word 0x0000282d
  .word 0xffbf0030
  .word 0x10600002
  .word 0xffb00020
  .word 0x8c85000c
  .word 0x24030440
  .word 0x3c020078
  .word 0x00a31818
  .word 0x3c040097
  .word 0xac45f538
  .word 0x24849180
  .word 0x3c052000
  .word 0x00641821
  .word 0x00658025
  .word 0x8a020003
  .word 0x9a020000
  .word 0xaba20003
  .word 0xbba20000
  .word 0x8a060007
  .word 0x9a060004
  .word 0xaba60007
  .word 0xbba60004
  .word 0x8a03000b
  .word 0x9a030008
  .word 0xaba3000b
  .word 0xbba30008
  .word 0x8a07000f
  .word 0x9a07000c
  .word 0xaba7000f
  .word 0xbba7000c
  .word 0x8fa20000
  .word 0x04400004
  .word 0x8fa40008
  .word 0x26050010
  .word 0x0c148494
  .word 0x8fa6000c
  .word 0x8fa20004
  .word 0x2444fffe
  .word 0x2c830019
  .word 0x106000a1
  .word 0x3c02007c
  .word 0x00041880
  .word 0x2442dd60
  .word 0x00621821
  .word 0x8c640000
  .word 0x00800008
  .word 0x00000000
  .word 0x8e030014
  .word 0x18600012
  .word 0x26070014
  .word 0x8ce80008
  .word 0x3c022000
  .word 0x0000302d
  .word 0x1860000d
  .word 0x01025025
  .word 0x26090024
  .word 0x01261021
  .word 0x01462821
  .word 0x90430000
  .word 0x01062021
  .word 0x24c60001
  .word 0xa0a30000
  .word 0xa0830000
  .word 0x8ce20000
  .word 0x00c2102a
  .word 0x1440fff7
  .word 0x01261021
  .word 0x8ce30004
  .word 0x18600084
  .word 0x3c022000
  .word 0x8ce8000c
  .word 0x0000302d
  .word 0x18600080
  .word 0x01025025
  .word 0x24e90050
  .word 0x01261021
  .word 0x00000000
  .word 0x01462821
  .word 0x90430000
  .word 0x01062021
  .word 0x24c60001
  .word 0xa0a30000
  .word 0xa0830000
  .word 0x8ce20004
  .word 0x00c2102a
  .word 0x1440fff7
  .word 0x01261021
  .word 0x10000072
  .word 0x8fa40000
  .word 0x8fa20008
  .word 0x8c430000
  .word 0x1860006e
  .word 0x8fa40000
  .word 0x8a040017
  .word 0x9a040014
  .word 0xaba40013
  .word 0xbba40010
  .word 0x26040018
  .word 0x8fa60010
  .word 0x00861025
  .word 0x30420007
  .word 0x10400018
  .word 0x26020158
  .word 0x68880007
  .word 0x6c880000
  .word 0x6883000f
  .word 0x6c830008
  .word 0x68850017
  .word 0x6c850010
  .word 0x6887001f
  .word 0x6c870018
  .word 0xb0c80007
  .word 0xb4c80000
  .word 0xb0c3000f
  .word 0xb4c30008
  .word 0xb0c50017
  .word 0xb4c50010
  .word 0xb0c7001f
  .word 0xb4c70018
  .word 0x24840020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1482ffec
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0xdc880000
  .word 0xdc830008
  .word 0xdc850010
  .word 0xdc870018
  .word 0xfcc80000
  .word 0xfcc30008
  .word 0xfcc50010
  .word 0xfcc70018
  .word 0x24840020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1482fff4
  .word 0x00000000
  .word 0x88880003
  .word 0x98880000
  .word 0xa8c80003
  .word 0x1000003a
  .word 0xb8c80000
  .word 0x8a060017
  .word 0x9a060014
  .word 0xaba60013
  .word 0xbba60010
  .word 0x8fa20010
  .word 0x6a03001f
  .word 0x6e030018
  .word 0x6a040027
  .word 0x6e040020
  .word 0x6a05002f
  .word 0x6e050028
  .word 0x6a060037
  .word 0x6e060030
  .word 0xb0430007
  .word 0xb4430000
  .word 0xb044000f
  .word 0xb4440008
  .word 0xb0450017
  .word 0xb4450010
  .word 0xb046001f
  .word 0xb4460018
  .word 0x6a03003f
  .word 0x6e030038
  .word 0x6a040047
  .word 0x6e040040
  .word 0x6a05004f
  .word 0x6e050048
  .word 0x6a060057
  .word 0x6e060050
  .word 0xb0430027
  .word 0xb4430020
  .word 0xb044002f
  .word 0xb4440028
  .word 0xb0450037
  .word 0xb4450030
  .word 0xb046003f
  .word 0xb4460038
  .word 0x10000014
  .word 0x8fa40000
  .word 0x8a070017
  .word 0x9a070014
  .word 0xaba70013
  .word 0xbba70010
  .word 0x8a04001b
  .word 0x9a040018
  .word 0xaba40017
  .word 0xbba40014
  .word 0x8fa60014
  .word 0x2cc20401
  .word 0x14400005
  .word 0x8fa40010
  .word 0x24020400
  .word 0x24060400
  .word 0xafa20014
  .word 0x8fa40010
  .word 0x0c148494
  .word 0x2605001c
  .word 0x8fa40000
  .word 0x04810019
  .word 0x3c070078
  .word 0x00041023
  .word 0x8ce3f4b8
  .word 0x0040282d
  .word 0xafa20000
  .word 0x14650006
  .word 0x0000302d
  .word 0x2402ffff
  .word 0xace2f4b8
  .word 0x10000012
  .word 0xdfbf0030
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c20020
  .word 0x1040000c
  .word 0x24e2f4b8
  .word 0x00061880
  .word 0x00621821
  .word 0x8c640000
  .word 0x1485fff9
  .word 0x24c60001
  .word 0x2402ffff
  .word 0xac620000
  .word 0x10000004
  .word 0xdfbf0030
  .word 0x0c140c64
  .word 0x00000000
  .word 0xdfbf0030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
// FUN_00507FF0
#ifndef PC_BUILD
asm void FUN_00507ff0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x2403ffff
  .word 0xffb00020
  .word 0x3c100078
  .word 0xffbf0030
  .word 0x8e02f544
  .word 0x1443000b
  .word 0xdfbf0030
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442ddc8
  .word 0xafa30004
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30008
  .word 0xae02f544
  .word 0xdfbf0030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_00508048
u64 FUN_00508048(u32 param_1)

{
  FUN_00507ff0();
  WaitSema(*(u32 *)DAT_0077f544_abs);
  return 0;
}
#pragma schedule off
#pragma schedule on
#pragma tailcall on
// FUN_00508078
void FUN_00508078(void)

{
  SignalSema(*(u32 *)DAT_0077f544_abs);
  return;
}
#pragma tailcall off
#pragma schedule off
#pragma schedule on
// FUN_00508088
#ifndef PC_BUILD
asm u32 FUN_00508088(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffb30030
  .word 0xffb20020
  .word 0x0080982d
  .word 0xffb40040
  .word 0x00a0902d
  .word 0xffb00000
  .word 0x2404001b
  .word 0xffbf0050
  .word 0x3c100097
  .word 0xffb10010
  .word 0x0c142012
  .word 0x26149c80
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x14600003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x8e119c80
  .word 0x3c030097
  .word 0xae920004
  .word 0xae139c80
  .word 0x10400003
  .word 0xac7c9cc0
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off
// FUN_00508128
#ifndef PC_BUILD
asm void FUN_00508128(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x8ca30000
  .word 0xffbf0010
  .word 0x10600007
  .word 0xffb00000
  .word 0x3c020097
  .word 0x0380802d
  .word 0x8c5c9cc0
  .word 0x0060f809
  .word 0x8ca40004
  .word 0x0200e02d
  .word 0x0000000f
  .word 0x42000038
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508170
#ifndef PC_BUILD
asm u32 FUN_00508170(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x0000202d
  .word 0xffb00020
  .word 0x3c100097
  .word 0xffb10030
  .word 0xffbf0070
  .word 0x26119c80
  .word 0xffb40060
  .word 0xffb30050
  .word 0x0c141a2a
  .word 0xffb20040
  .word 0xae009c80
  .word 0x0c1434e8
  .word 0xae200004
  .word 0x3c050050
  .word 0x3c060097
  .word 0x3c048000
  .word 0x0040802d
  .word 0x24a57c38
  .word 0x24c69c40
  .word 0x0c14190c
  .word 0x34840011
  .word 0x3c050051
  .word 0x3c048000
  .word 0x24a58128
  .word 0x0220302d
  .word 0x0c14190c
  .word 0x34840013
  .word 0x1200000e
  .word 0x3c130097
  .word 0x0c1434fc
  .word 0x26709c00
  .word 0x1000000b
  .word 0x00000000
  .word 0x2403ffff
  .word 0x00000000
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x26709c00
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50001
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04400048
  .word 0x2402ffea
  .word 0x8e020024
  .word 0x1040ffed
  .word 0x3c020010
  .word 0x0c141e58
  .word 0x3c140078
  .word 0x0c140c68
  .word 0x8e84f548
  .word 0x3c030097
  .word 0x24639a00
  .word 0x24640200
  .word 0x0064102b
  .word 0x1040000c
  .word 0x3c120097
  .word 0x3c110097
  .word 0x3c100097
  .word 0xac600004
  .word 0x24630010
  .word 0x0064102b
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x10000004
  .word 0x8e84f548
  .word 0x3c110097
  .word 0x3c100097
  .word 0x8e84f548
  .word 0x0c140c60
  .word 0x26109140
  .word 0x26239180
  .word 0x264784c0
  .word 0xae4384c0
  .word 0x26649c00
  .word 0x24630440
  .word 0x240500ff
  .word 0xace30004
  .word 0x0000302d
  .word 0xafa00000
  .word 0x24080008
  .word 0xafa00008
  .word 0x0200482d
  .word 0x240a0008
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410004
  .word 0x3c042000
  .word 0x3c02fffe
  .word 0x10000017
  .word 0x3442ffff
  .word 0x26020004
  .word 0x02041825
  .word 0x00441025
  .word 0x3c050097
  .word 0x24a89c28
  .word 0x88640003
  .word 0x98640000
  .word 0xa9040003
  .word 0xb9040000
  .word 0x88430003
  .word 0x98430000
  .word 0xaba30013
  .word 0xbba30010
  .word 0x3c060078
  .word 0x3c050078
  .word 0x8fa30010
  .word 0x24040001
  .word 0xaca4f53c
  .word 0x0000102d
  .word 0x38630002
  .word 0x2c630001
  .word 0xacc3f540
  .word 0xdfbf0070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0080
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508378
#ifndef PC_BUILD
asm bool FUN_00508378(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020078
  .word 0xffb30030
  .word 0x3c030097
  .word 0xffb10010
  .word 0x2453f48c
  .word 0xffb20020
  .word 0x24719c28
  .word 0xffbf0040
  .word 0x0000902d
  .word 0xffb00000
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0c14846e
  .word 0x24060004
  .word 0x1040000b
  .word 0x3c100078
  .word 0x0220202d
  .word 0x8e05f550
  .word 0x0c14846e
  .word 0x24060004
  .word 0x10400005
  .word 0x8e05f550
  .word 0x0260202d
  .word 0x0c14846e
  .word 0x24060004
  .word 0x0002902b
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
/* DUMMYDUMB session 2026-10-21: retail materialises both addresses absolutely
 * (lui $v0,0x78 / lui $a0,0x97, with the loads and the addiu folding the low
 * halves in) while this build reaches them gp-relative through the _abs
 * aliases. The _abs spelling only forces absolute addressing for a *call*; for
 * data it stays gp-relative, and the repo's other idiom for an absolute address
 * (&gp0.ffffXXXX - 0xNNNN) would need three instructions. Probed: writing the
 * store through a literal address (0x0077f53c), writing the pointer through a
 * literal (0x00969c18, which is what retail's lui+addiu resolves to - note our
 * symbol is named DAT_009684c8, so the repo's data-symbol names are not the
 * retail addresses), and both together - 6 -> 7 and 6 -> 18 bytes, all worse.
 * Confirmed wall: absolute versus gp-relative addressing of data. */
#pragma schedule on
// FUN_00508408
#ifndef PC_BUILD
asm u64 FUN_00508408(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c020078
  .word 0x3c040097
  .word 0xffbf0000
  .word 0xac40f53c
  .word 0x24849c28
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060004
  .word 0xdfbf0000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off
// FUN_00508440
#ifndef PC_BUILD
asm u32 FUN_00508440(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb00010
  .word 0xffb10020
  .word 0x0080802d
  .word 0xffbf0040
  .word 0x00a0882d
  .word 0xffb20030
  .word 0x0c142012
  .word 0x240400fe
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x14400003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x0c1420de
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x3c02fffe
  .word 0x10000033
  .word 0x3442fffc
  .word 0x0c141e74
  .word 0x00000000
  .word 0x10400005
  .word 0x32023fff
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000002b
  .word 0x2402fff0
  .word 0x1440000b
  .word 0x00000000
  .word 0x12000009
  .word 0x3c02000f
  .word 0x3442ffff
  .word 0x0050102b
  .word 0x14400005
  .word 0x00000000
  .word 0x12200003
  .word 0x2e220021
  .word 0x14400005
  .word 0x3c030097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000001b
  .word 0x2402ffea
  .word 0x3c020097
  .word 0x24678500
  .word 0xac708500
  .word 0xacf10004
  .word 0x24529140
  .word 0x3c040097
  .word 0xafa00000
  .word 0x24849c00
  .word 0xafa00008
  .word 0x240500fe
  .word 0x0000302d
  .word 0x24080008
  .word 0x0240482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410005
  .word 0x3c022000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000005
  .word 0x2402fff5
  .word 0x02421025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508580
#ifndef PC_BUILD
asm u32 FUN_00508580(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb00010
  .word 0x0080802d
  .word 0xffbf0030
  .word 0xffb10020
  .word 0x0c142012
  .word 0x240400fd
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x14400003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x0c1420de
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x3c02fffe
  .word 0x10000022
  .word 0x3442fffc
  .word 0x0c141e74
  .word 0x00000000
  .word 0x10400005
  .word 0x3c070097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000001a
  .word 0x2402fff0
  .word 0x3c020097
  .word 0x24519140
  .word 0x3c040097
  .word 0xacf08500
  .word 0x24849c00
  .word 0x24e78500
  .word 0xafa00000
  .word 0xafa00008
  .word 0x240500fd
  .word 0x0000302d
  .word 0x24080008
  .word 0x0220482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410005
  .word 0x3c022000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000005
  .word 0x2402fff5
  .word 0x02221025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0040
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508670
#ifndef PC_BUILD
asm int FUN_00508670(char *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffb00040
  .word 0xffb700b0
  .word 0x0080802d
  .word 0xffbe00c0
  .word 0x00a0b82d
  .word 0xffb10050
  .word 0x0000202d
  .word 0xffbf00d0
  .word 0x3c1e0097
  .word 0xffb600a0
  .word 0x27d18500
  .word 0xffb50090
  .word 0xffb40080
  .word 0xffb30070
  .word 0xffb20060
  .word 0xffa60120
  .word 0xffa70128
  .word 0xffa80130
  .word 0xffa90138
  .word 0xffaa0140
  .word 0x0c142012
  .word 0xffab0148
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x14400003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x0c1420de
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x3c02fffe
  .word 0x10000073
  .word 0x3442fffc
  .word 0x0c141e94
  .word 0x00000000
  .word 0x0040982d
  .word 0x56600005
  .word 0x92030000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000006a
  .word 0x2402ffed
  .word 0x0000302d
  .word 0x8fa80120
  .word 0x00031600
  .word 0x10400012
  .word 0xa2230014
  .word 0x3c070097
  .word 0x3c05007c
  .word 0x27b20030
  .word 0x3c160097
  .word 0x3c140097
  .word 0x24c60001
  .word 0x28c20400
  .word 0x1040000e
  .word 0x02061021
  .word 0x02262021
  .word 0x90430000
  .word 0xa0830014
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24c60001
  .word 0x10000007
  .word 0x24020400
  .word 0x3c070097
  .word 0x3c05007c
  .word 0x27b20030
  .word 0x3c160097
  .word 0x3c140097
  .word 0x24020400
  .word 0x50c20001
  .word 0xa2200413
  .word 0x24e29a00
  .word 0x3c037fff
  .word 0x02621023
  .word 0x3463ffff
  .word 0x0002a903
  .word 0x02e31824
  .word 0xae23000c
  .word 0x24a5dde0
  .word 0xae280010
  .word 0x24020001
  .word 0xafa20014
  .word 0x27a40010
  .word 0xafa50024
  .word 0x26949140
  .word 0xae350414
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040802d
  .word 0xae320004
  .word 0x24020004
  .word 0xae300000
  .word 0xae220008
  .word 0x26c49c00
  .word 0x27c78500
  .word 0x0000282d
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080418
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0200202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000023
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c510000
  .word 0x16200005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0200202d
  .word 0x1000001a
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0200202d
  .word 0x0c140c5c
  .word 0x0200202d
  .word 0x8fa30030
  .word 0x04610008
  .word 0x3c100078
  .word 0x0c140c68
  .word 0x8e04f548
  .word 0xae600004
  .word 0x0c140c60
  .word 0x8e04f548
  .word 0x1000000c
  .word 0x8fa20030
  .word 0x02a0882d
  .word 0x0c140c68
  .word 0x8e04f548
  .word 0x8e630004
  .word 0x8fa20030
  .word 0x8e04f548
  .word 0x00771825
  .word 0xae630004
  .word 0x0c140c60
  .word 0xae620000
  .word 0x0220102d
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd0150
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508900
#ifndef PC_BUILD
asm int FUN_00508900(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffb40080
  .word 0xffb20060
  .word 0x3c140097
  .word 0xffb00040
  .word 0x26928500
  .word 0xffbf0090
  .word 0xffb30070
  .word 0x0c141ef2
  .word 0xffb10050
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040001
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e020004
  .word 0x14400005
  .word 0x3c020097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000003d
  .word 0x2402fff7
  .word 0x8e040000
  .word 0x24429a00
  .word 0x3c03007c
  .word 0x02021023
  .word 0xae44000c
  .word 0x00021103
  .word 0x2463ddf8
  .word 0xae420010
  .word 0x24050001
  .word 0x27a40010
  .word 0xafa50014
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0x27a30030
  .word 0x3c020097
  .word 0xae918500
  .word 0x24539140
  .word 0xae430004
  .word 0x24020004
  .word 0x3c040097
  .word 0xae420008
  .word 0x24849c00
  .word 0x0240382d
  .word 0x24050001
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080014
  .word 0x0260482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04430007
  .word 0xae000004
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000013
  .word 0x2402fff5
  .word 0x3c022000
  .word 0x02621025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000009
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0x2403ffff
  .word 0x0062182a
  .word 0x0003100b
  .word 0xdfbf0090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00a0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508A78
#ifndef PC_BUILD
asm u32 FUN_00508a78(u64 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb50090
  .word 0xffb30070
  .word 0x00c0a82d
  .word 0xffb40080
  .word 0x00a0982d
  .word 0xffb10050
  .word 0x3c140097
  .word 0xffb00040
  .word 0x26918500
  .word 0xffbf00b0
  .word 0xffb600a0
  .word 0x0c141ef2
  .word 0xffb20060
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040004
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e120004
  .word 0x16400005
  .word 0x3c020097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000068
  .word 0x2402fff7
  .word 0x8e040000
  .word 0x24429a00
  .word 0x3c03007c
  .word 0x02021023
  .word 0xae24000c
  .word 0x00021103
  .word 0xae330010
  .word 0xae350014
  .word 0x2463de10
  .word 0xae220018
  .word 0x24050001
  .word 0x27a40010
  .word 0xafa50014
  .word 0xafa30024
  .word 0x32508000
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040982d
  .word 0x24030004
  .word 0x27a20030
  .word 0xae230008
  .word 0xae220004
  .word 0x12000025
  .word 0xae938500
  .word 0x3c150078
  .word 0x0c140c68
  .word 0x8ea4f54c
  .word 0x3c070078
  .word 0x0000302d
  .word 0x8ce3f4b8
  .word 0x2402ffff
  .word 0x14620008
  .word 0x0200902d
  .word 0x8e838500
  .word 0x3c160097
  .word 0x3c100097
  .word 0x00031023
  .word 0xace3f4b8
  .word 0x10000011
  .word 0xae828500
  .word 0x3c160097
  .word 0x3c100097
  .word 0x24c60001
  .word 0x28c20020
  .word 0x1040000b
  .word 0x00061080
  .word 0x24e3f4b8
  .word 0x00432821
  .word 0x2404ffff
  .word 0x8ca20000
  .word 0x1444fff8
  .word 0x24c60001
  .word 0x8e220000
  .word 0x00021823
  .word 0xaca20000
  .word 0xae230000
  .word 0x0c140c60
  .word 0x8ea4f54c
  .word 0x10000005
  .word 0x26109140
  .word 0x3c160097
  .word 0x3c100097
  .word 0x0000902d
  .word 0x26109140
  .word 0x26c49c00
  .word 0x26878500
  .word 0xafa00000
  .word 0xafb20008
  .word 0x24050004
  .word 0x0000302d
  .word 0x2408001c
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000015
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x1000000c
  .word 0x2402fff5
  .word 0x12400005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x10000006
  .word 0x0000102d
  .word 0x0c140c68
  .word 0x0260202d
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x8fa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508CB8
#ifndef PC_BUILD
asm u32 FUN_00508cb8(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbe00c0
  .word 0xffb700b0
  .word 0x00c0f02d
  .word 0xffb50090
  .word 0x00a0b82d
  .word 0xffb10050
  .word 0x3c150097
  .word 0xffb00040
  .word 0x26b18500
  .word 0xffbf00d0
  .word 0xffb600a0
  .word 0xffb40080
  .word 0xffb30070
  .word 0x0c141ef2
  .word 0xffb20060
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040002
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e140004
  .word 0x16800005
  .word 0x3c020097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000070
  .word 0x2402fff7
  .word 0x8e040000
  .word 0x24429a00
  .word 0x3c03007c
  .word 0x02021023
  .word 0xae24000c
  .word 0x00021103
  .word 0x2463de28
  .word 0xae22001c
  .word 0x24050001
  .word 0xafa50014
  .word 0x27a40010
  .word 0xafa30024
  .word 0x32908000
  .word 0xae370010
  .word 0xae3e0014
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040982d
  .word 0x24030004
  .word 0x27a20030
  .word 0xae230008
  .word 0xae220004
  .word 0x12000024
  .word 0xaeb38500
  .word 0x3c160078
  .word 0x0c140c68
  .word 0x8ec4f54c
  .word 0x3c070078
  .word 0x0000302d
  .word 0x8ce3f4b8
  .word 0x2402ffff
  .word 0x14620008
  .word 0x0200902d
  .word 0x8ea38500
  .word 0x3c100097
  .word 0x00031023
  .word 0xace3f4b8
  .word 0x10000011
  .word 0xaea28500
  .word 0x00000000
  .word 0x3c100097
  .word 0x24c60001
  .word 0x28c20020
  .word 0x1040000b
  .word 0x00061080
  .word 0x24e3f4b8
  .word 0x00432821
  .word 0x2404ffff
  .word 0x8ca20000
  .word 0x1444fff8
  .word 0x24c60001
  .word 0x8e220000
  .word 0x00021823
  .word 0xaca20000
  .word 0xae230000
  .word 0x0c140c60
  .word 0x8ec4f54c
  .word 0x10000004
  .word 0x3c162000
  .word 0x3c100097
  .word 0x0000902d
  .word 0x3c162000
  .word 0x02961024
  .word 0x14400005
  .word 0x0220202d
  .word 0x02e0202d
  .word 0x0c1419fe
  .word 0x03c0282d
  .word 0x0220202d
  .word 0x0c1419fe
  .word 0x24050020
  .word 0x26109140
  .word 0x3c020097
  .word 0x26a78500
  .word 0x24449c00
  .word 0xafa00000
  .word 0x24050002
  .word 0xafb20008
  .word 0x0000302d
  .word 0x24080020
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x02d01025
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000014
  .word 0x2402fff5
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x1000000c
  .word 0x2402fff5
  .word 0x12400005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x10000006
  .word 0x0000102d
  .word 0x0c140c68
  .word 0x0260202d
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00508F28
#ifndef PC_BUILD
asm u32 FUN_00508f28(u64 param_1,u32 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffb600a0
  .word 0xffb10050
  .word 0x00c0b02d
  .word 0xffbe00c0
  .word 0x00a0882d
  .word 0xffb20060
  .word 0x3c1e0097
  .word 0xffb00040
  .word 0x27d28500
  .word 0xffbf00d0
  .word 0xffb700b0
  .word 0xffb50090
  .word 0xffb40080
  .word 0x0c141ef2
  .word 0xffb30070
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040003
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e170004
  .word 0x16e00005
  .word 0x3c020097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000085
  .word 0x2402fff7
  .word 0x8e040000
  .word 0x24429a00
  .word 0x3c03007c
  .word 0x02021023
  .word 0xae44000c
  .word 0x00021103
  .word 0x2463de40
  .word 0xae42002c
  .word 0x24050001
  .word 0xafa50014
  .word 0x27a40010
  .word 0xafa30024
  .word 0x32f08000
  .word 0xae560014
  .word 0xae510010
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040a82d
  .word 0x24030004
  .word 0x27a20030
  .word 0xae430008
  .word 0xae420004
  .word 0x12000024
  .word 0xafd58500
  .word 0x3c130078
  .word 0x0c140c68
  .word 0x8e64f54c
  .word 0x3c070078
  .word 0x0000302d
  .word 0x8ce3f4b8
  .word 0x2402ffff
  .word 0x14620008
  .word 0x0200a02d
  .word 0x8fc38500
  .word 0x3230000f
  .word 0x00031023
  .word 0xace3f4b8
  .word 0x10000011
  .word 0xafc28500
  .word 0x00000000
  .word 0x3230000f
  .word 0x24c60001
  .word 0x28c20020
  .word 0x1040000b
  .word 0x00061080
  .word 0x24e3f4b8
  .word 0x00432821
  .word 0x2404ffff
  .word 0x8ca20000
  .word 0x1444fff8
  .word 0x24c60001
  .word 0x8e420000
  .word 0x00021823
  .word 0xaca20000
  .word 0xae430000
  .word 0x0c140c60
  .word 0x8e64f54c
  .word 0x10000003
  .word 0x00000000
  .word 0x3230000f
  .word 0x0000a02d
  .word 0x16000003
  .word 0x00111102
  .word 0x10000004
  .word 0x0000802d
  .word 0x2623fff0
  .word 0x00021100
  .word 0x00438023
  .word 0x02d0182a
  .word 0x3c132000
  .word 0x02f31024
  .word 0x14400004
  .word 0x02c3800b
  .word 0x02c0282d
  .word 0x0c1419fe
  .word 0x0220202d
  .word 0x02338825
  .word 0xae500018
  .word 0x1a00000b
  .word 0x0000282d
  .word 0x2646001c
  .word 0x00000000
  .word 0x02251021
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0x00b0102a
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x3c020097
  .word 0x27c78500
  .word 0x24509140
  .word 0xafa00000
  .word 0x3c020097
  .word 0xafb40008
  .word 0x24449c00
  .word 0x24050003
  .word 0x0000302d
  .word 0x24080030
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x02a0202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000015
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x02a0202d
  .word 0x1000000c
  .word 0x2402fff5
  .word 0x12800005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x02a0202d
  .word 0x10000006
  .word 0x0000102d
  .word 0x0c140c68
  .word 0x02a0202d
  .word 0x0c140c5c
  .word 0x02a0202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_005091E8
#ifndef PC_BUILD
asm u32 FUN_005091e8(u64 param_1,long param_2,u64 *param_3)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb20060
  .word 0xffb10050
  .word 0x00c0902d
  .word 0xffb600a0
  .word 0x00a0882d
  .word 0xffb50090
  .word 0x3c160097
  .word 0xffb40080
  .word 0x24150001
  .word 0xffb30070
  .word 0x3c140097
  .word 0xffb00040
  .word 0xffbf00b0
  .word 0x0c141ef2
  .word 0x26d38500
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040005
  .word 0x3c020078
  .word 0xae9284c8
  .word 0x8c43f53c
  .word 0x14600003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e020004
  .word 0x54400005
  .word 0xae600414
  .word 0x0c14201e
  .word 0x00000000
  .word 0x100000b6
  .word 0x2402fff7
  .word 0x24020002
  .word 0x12220029
  .word 0xae600418
  .word 0x2a220003
  .word 0x10400005
  .word 0x24020003
  .word 0x52350007
  .word 0x3c100078
  .word 0x1000003c
  .word 0x8e020000
  .word 0x1222002c
  .word 0x3c040078
  .word 0x10000038
  .word 0x8e020000
  .word 0x0c140c68
  .word 0x8e04f54c
  .word 0x3c050078
  .word 0x0000202d
  .word 0x8ca3f4b8
  .word 0x2402ffff
  .word 0x1462000b
  .word 0x24020020
  .word 0x24a3f4b8
  .word 0x2405ffff
  .word 0x24840001
  .word 0x28820020
  .word 0x10400004
  .word 0x24630004
  .word 0x8c620000
  .word 0x5045fffb
  .word 0x24840001
  .word 0x24020020
  .word 0x14820004
  .word 0x8e8384c8
  .word 0x8e8284c8
  .word 0x10000003
  .word 0xac400000
  .word 0x24020001
  .word 0xac620000
  .word 0x0c140c60
  .word 0x8e04f54c
  .word 0x10000017
  .word 0x00000000
  .word 0x3c040078
  .word 0x24050440
  .word 0x8c82f538
  .word 0x3c030097
  .word 0x24639190
  .word 0x3c042000
  .word 0x00451018
  .word 0x00431021
  .word 0x00441025
  .word 0x8c430000
  .word 0x1000000b
  .word 0xae430000
  .word 0x24050440
  .word 0x8c82f538
  .word 0x3c030097
  .word 0x24639190
  .word 0x3c042000
  .word 0x00451018
  .word 0x00431021
  .word 0x00441025
  .word 0xdc430000
  .word 0xfe430000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000071
  .word 0x0000102d
  .word 0xae710010
  .word 0x16400007
  .word 0xae62000c
  .word 0xae60041c
  .word 0x3c03007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x10000036
  .word 0x3c110097
  .word 0x0240302d
  .word 0x26640014
  .word 0x24030400
  .word 0x00c41025
  .word 0x30420007
  .word 0x1040001d
  .word 0xae63041c
  .word 0x24c20400
  .word 0x3c03007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c110097
  .word 0x68c50007
  .word 0x6cc50000
  .word 0x68c7000f
  .word 0x6cc70008
  .word 0x68c80017
  .word 0x6cc80010
  .word 0x68c9001f
  .word 0x6cc90018
  .word 0xb0850007
  .word 0xb4850000
  .word 0xb087000f
  .word 0xb4870008
  .word 0xb0880017
  .word 0xb4880010
  .word 0xb089001f
  .word 0xb4890018
  .word 0x24c60020
  .word 0x24840020
  .word 0x00000000
  .word 0x14c2ffec
  .word 0x00000000
  .word 0x10000014
  .word 0x2463de58
  .word 0x24c20400
  .word 0x3c03007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c110097
  .word 0xdcc50000
  .word 0xdcc70008
  .word 0xdcc80010
  .word 0xdcc90018
  .word 0xfc850000
  .word 0xfc870008
  .word 0xfc880010
  .word 0xfc890018
  .word 0x24c60020
  .word 0x24840020
  .word 0x00000000
  .word 0x14c2fff4
  .word 0x00000000
  .word 0x2463de58
  .word 0x24020001
  .word 0xafa20014
  .word 0x27a40010
  .word 0xafa30024
  .word 0x26349140
  .word 0xafa00018
  .word 0x0c140c58
  .word 0x26d08500
  .word 0x0040882d
  .word 0x0200202d
  .word 0x24020004
  .word 0xae720004
  .word 0xae620008
  .word 0x24050420
  .word 0x0c1419fe
  .word 0xae710000
  .word 0x26a49c00
  .word 0x0200382d
  .word 0xafa00000
  .word 0x24050005
  .word 0xafa00008
  .word 0x0000302d
  .word 0x24080420
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00509570
#ifndef PC_BUILD
asm u32 FUN_00509570(u64 param_1,u32 param_2,long param_3,u32 param_4,u32 param_5,
            u32 param_6)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb700b0
  .word 0xffb50090
  .word 0x0100b82d
  .word 0xffb40080
  .word 0x00a0a82d
  .word 0xffb30070
  .word 0x0120a02d
  .word 0xffb00040
  .word 0x00e0982d
  .word 0xffb600a0
  .word 0x00c0802d
  .word 0xffb20060
  .word 0x3c160097
  .word 0xffb10050
  .word 0xffbf00c0
  .word 0x0c141ef2
  .word 0x26d18500
  .word 0x0040902d
  .word 0x0c142012
  .word 0x2404001a
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x14600003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x8e420004
  .word 0x14400005
  .word 0x2e620401
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000004c
  .word 0x2402fff7
  .word 0x10400003
  .word 0x2e820401
  .word 0x14400005
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000044
  .word 0x2402ffea
  .word 0x16000003
  .word 0x0200282d
  .word 0x10000004
  .word 0xae20041c
  .word 0x26240014
  .word 0x0c148494
  .word 0x0260302d
  .word 0x8e430000
  .word 0x3c02007c
  .word 0xae350010
  .word 0x2442de70
  .word 0xae23000c
  .word 0x24050001
  .word 0xae33041c
  .word 0x27a40010
  .word 0xafa50014
  .word 0x26d08500
  .word 0xafa20024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040902d
  .word 0x24030004
  .word 0x27a20030
  .word 0xae340418
  .word 0xae220004
  .word 0x0200202d
  .word 0xae230008
  .word 0x24050420
  .word 0xae370414
  .word 0x0c1419fe
  .word 0xae320000
  .word 0x3c020097
  .word 0x3c040097
  .word 0x24519140
  .word 0x24849c00
  .word 0x0200382d
  .word 0xafa00000
  .word 0xafa00008
  .word 0x2405001a
  .word 0x0000302d
  .word 0x24080420
  .word 0x0220482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02221025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0240202d
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x8fa20030
  .word 0xdfbf00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00d0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00509758
#ifndef PC_BUILD
asm u32 FUN_00509758(char *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb600a0
  .word 0xffb10050
  .word 0x00a0b02d
  .word 0x0080882d
  .word 0xffb700b0
  .word 0xffb30070
  .word 0x02c0202d
  .word 0xffbf00c0
  .word 0x3c170097
  .word 0xffb50090
  .word 0x26f38500
  .word 0xffb40080
  .word 0xffb20060
  .word 0x0c142012
  .word 0xffb00040
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000802d
  .word 0x00021e00
  .word 0x10600011
  .word 0xa262000c
  .word 0x3c05007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x26100001
  .word 0x2a020400
  .word 0x1040000d
  .word 0x02301021
  .word 0x02702021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x26100001
  .word 0x10000006
  .word 0x24020400
  .word 0x3c05007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24020400
  .word 0x16020003
  .word 0x24a2de88
  .word 0xa260040b
  .word 0x241003ff
  .word 0x24030001
  .word 0xafa30014
  .word 0x27a40010
  .word 0xafa20024
  .word 0x26949140
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae720004
  .word 0x24020004
  .word 0xae710000
  .word 0xae620008
  .word 0x26a49c00
  .word 0x02c0282d
  .word 0x26e78500
  .word 0x2608000d
  .word 0x0000302d
  .word 0xafa00000
  .word 0x0280482d
  .word 0xafa00008
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00d0
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_00509908
void FUN_00509908(char *param_1)

{
  FUN_00509758(param_1,6);
  return;
}
#pragma schedule off
// FUN_00509928
#ifndef PC_BUILD
asm u32 FUN_00509928(char *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb10050
  .word 0xffb600a0
  .word 0x0080882d
  .word 0xffb700b0
  .word 0x00a0b02d
  .word 0xffb20060
  .word 0x24040007
  .word 0xffbf00c0
  .word 0x3c170097
  .word 0xffb50090
  .word 0x26f28500
  .word 0xffb40080
  .word 0xffb30070
  .word 0x0c142012
  .word 0xffb00040
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000802d
  .word 0x00021e00
  .word 0x10600011
  .word 0xa2420010
  .word 0x3c05007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x26100001
  .word 0x2a020400
  .word 0x1040000d
  .word 0x02301021
  .word 0x02502021
  .word 0x90430000
  .word 0xa0830010
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x26100001
  .word 0x10000006
  .word 0x24020400
  .word 0x3c05007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24020400
  .word 0x56020004
  .word 0xae56000c
  .word 0xa240040f
  .word 0x241003ff
  .word 0xae56000c
  .word 0x24a3dea0
  .word 0x24020001
  .word 0x27a40010
  .word 0xafa20014
  .word 0x26949140
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae530004
  .word 0x24020004
  .word 0xae510000
  .word 0xae420008
  .word 0x26a49c00
  .word 0x26e78500
  .word 0x26080011
  .word 0xafa00000
  .word 0x24050007
  .word 0xafa00008
  .word 0x0000302d
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00d0
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_00509AE0
void FUN_00509ae0(char *param_1)

{
  FUN_00509758(param_1,8);
  return;
}
#pragma schedule off
// FUN_00509B00
#ifndef PC_BUILD
asm u32 FUN_00509b00(char *param_1,long param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb00040
  .word 0xffb600a0
  .word 0x0080802d
  .word 0xffb20060
  .word 0x00c0b02d
  .word 0xffb10050
  .word 0x00a0902d
  .word 0xffb700b0
  .word 0x00e0882d
  .word 0xffb30070
  .word 0x2404000e
  .word 0xffbf00c0
  .word 0x3c170097
  .word 0xffb50090
  .word 0x26f38500
  .word 0x0c142012
  .word 0xffb40080
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92020000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92020000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000f
  .word 0xa262000c
  .word 0x2a270401
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000a
  .word 0x02051021
  .word 0x02652021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000003
  .word 0x24020400
  .word 0x2a270401
  .word 0x24020400
  .word 0x50a20001
  .word 0xa260040b
  .word 0x56400003
  .word 0x92420000
  .word 0x10000014
  .word 0xa260040c
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000d
  .word 0xa262040c
  .word 0x2666040c
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x10400007
  .word 0x02451021
  .word 0x00c52021
  .word 0x90430000
  .word 0xa0830000
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x24020400
  .word 0x50a20001
  .word 0xa260080b
  .word 0x14e00005
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000004a
  .word 0x2402fff9
  .word 0x1a200011
  .word 0x0000282d
  .word 0x2666080c
  .word 0x3c07007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x00000000
  .word 0x02c51021
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0x00b1102a
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000006
  .word 0xae710c0c
  .word 0x3c07007c
  .word 0x27b20030
  .word 0x3c150097
  .word 0x3c140097
  .word 0xae710c0c
  .word 0x24e3deb8
  .word 0x24020001
  .word 0x27a40010
  .word 0xafa20014
  .word 0x26f08500
  .word 0xafa30024
  .word 0x26949140
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0x0200202d
  .word 0x24020004
  .word 0xae720004
  .word 0xae620008
  .word 0x24050c10
  .word 0x0c1419fe
  .word 0xae710000
  .word 0x26a49c00
  .word 0x0200382d
  .word 0xafa00000
  .word 0x2405000e
  .word 0xafa00008
  .word 0x0000302d
  .word 0x24080c10
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00d0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00509D80
#ifndef PC_BUILD
asm u32 FUN_00509d80(u32 param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb10050
  .word 0x0080882d
  .word 0xffb30070
  .word 0xffb00040
  .word 0x2404000f
  .word 0xffbf0080
  .word 0x3c130097
  .word 0xffb20060
  .word 0x0c142012
  .word 0x26708500
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x14400004
  .word 0x3c02007c
  .word 0x0c14205c
  .word 0x00000000
  .word 0x3c02007c
  .word 0xae11000c
  .word 0x24030001
  .word 0x2442ded0
  .word 0xafa30014
  .word 0x27a40010
  .word 0xafa20024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0x27a30030
  .word 0x3c020097
  .word 0xae718500
  .word 0x24529140
  .word 0xae030004
  .word 0x24020004
  .word 0x3c040097
  .word 0xae020008
  .word 0x24849c00
  .word 0x0200382d
  .word 0x2405000f
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080010
  .word 0x0240482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02421025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf0080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_00509EB0
void FUN_00509eb0(char *param_1)

{
  FUN_00509758(param_1,0x10);
  return;
}
#pragma schedule off
// FUN_00509ED0
#ifndef PC_BUILD
asm int FUN_00509ed0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffbf0030
  .word 0xffb20020
  .word 0x24040009
  .word 0x0c142012
  .word 0xffb10010
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x14400003
  .word 0x00000000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x0c141e94
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400003
  .word 0x0200202d
  .word 0x10000016
  .word 0x2402ffed
  .word 0x0c1425d6
  .word 0x24050009
  .word 0x0040882d
  .word 0x06210006
  .word 0x3c100078
  .word 0x0c140c68
  .word 0x8e04f548
  .word 0xae400004
  .word 0x10000009
  .word 0x8e04f548
  .word 0x0c140c68
  .word 0x8e04f548
  .word 0x3c030097
  .word 0xae510000
  .word 0x24639a00
  .word 0x8e04f548
  .word 0x02431823
  .word 0x00038903
  .word 0x0c140c60
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00509F98
#ifndef PC_BUILD
asm int FUN_00509f98(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffb40080
  .word 0xffb20060
  .word 0x3c140097
  .word 0xffb00040
  .word 0x26928500
  .word 0xffbf0090
  .word 0xffb30070
  .word 0x0c141ef2
  .word 0xffb10050
  .word 0x0040802d
  .word 0x0c142012
  .word 0x2404000a
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e020004
  .word 0x54400005
  .word 0x8e040000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000038
  .word 0x2402fff7
  .word 0x3c02007c
  .word 0x2442dee8
  .word 0x24030001
  .word 0xae44000c
  .word 0x27a40010
  .word 0xafa30014
  .word 0xafa20024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0x27a30030
  .word 0x3c020097
  .word 0xae918500
  .word 0x24539140
  .word 0xae430004
  .word 0x24020004
  .word 0x3c040097
  .word 0xae420008
  .word 0x24849c00
  .word 0x0240382d
  .word 0x2405000a
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080014
  .word 0x0260482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04430007
  .word 0xae000004
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000013
  .word 0x2402fff5
  .word 0x3c022000
  .word 0x02621025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000009
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0x2403ffff
  .word 0x0062182a
  .word 0x0003100b
  .word 0xdfbf0090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050A100
#ifndef PC_BUILD
asm u32 FUN_0050a100(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb10050
  .word 0xffb30070
  .word 0x00a0882d
  .word 0xffb20060
  .word 0x3c130097
  .word 0xffb00040
  .word 0xffbf0080
  .word 0x0c141ef2
  .word 0x26728500
  .word 0x0040802d
  .word 0x0c142012
  .word 0x2404000b
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x10600006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e020004
  .word 0x54400005
  .word 0x8e030000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000035
  .word 0x2402fff7
  .word 0x3c02007c
  .word 0xae510010
  .word 0x2442df00
  .word 0xae43000c
  .word 0x24050001
  .word 0x27a40010
  .word 0xafa50014
  .word 0xafa20024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0x27a30030
  .word 0x3c020097
  .word 0xae718500
  .word 0x24509140
  .word 0xae430004
  .word 0x24020004
  .word 0x3c040097
  .word 0xae420008
  .word 0x24849c00
  .word 0x0240382d
  .word 0x2405000b
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080020
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf0080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050A258
#ifndef PC_BUILD
asm u32 FUN_0050a258(char *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb10050
  .word 0xffb600a0
  .word 0x0080882d
  .word 0xffb700b0
  .word 0x00a0b02d
  .word 0xffb20060
  .word 0x2404000c
  .word 0xffbf00c0
  .word 0x3c170097
  .word 0xffb50090
  .word 0x26f28500
  .word 0xffb40080
  .word 0xffb30070
  .word 0x0c142012
  .word 0xffb00040
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000802d
  .word 0x0040182d
  .word 0x10600010
  .word 0xa2420010
  .word 0x3c05007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020400
  .word 0x1040000b
  .word 0x02301021
  .word 0x02502021
  .word 0x90430000
  .word 0x1460fff9
  .word 0xa0830010
  .word 0x10000006
  .word 0x24020400
  .word 0x3c05007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24020400
  .word 0x56020004
  .word 0xae56000c
  .word 0xa240040f
  .word 0x241003ff
  .word 0xae56000c
  .word 0x24a3df18
  .word 0x24020001
  .word 0x27a40010
  .word 0xafa20014
  .word 0x26949140
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae530004
  .word 0x24020004
  .word 0xae510000
  .word 0xae420008
  .word 0x26a49c00
  .word 0x26e78500
  .word 0x26080011
  .word 0xafa00000
  .word 0x2405000c
  .word 0xafa00008
  .word 0x0000302d
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050A410
#ifndef PC_BUILD
asm u32 FUN_0050a410(char *param_1,u64 *param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffb20060
  .word 0xffb700b0
  .word 0x0080902d
  .word 0xffb00040
  .word 0x00c0b82d
  .word 0xffbe00c0
  .word 0x00a0802d
  .word 0xffb30070
  .word 0x2404000d
  .word 0xffbf00d0
  .word 0x3c1e0097
  .word 0xffb600a0
  .word 0x27d38500
  .word 0xffb50090
  .word 0xffb40080
  .word 0x0c142012
  .word 0xffb10050
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x54400004
  .word 0x92420000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92420000
  .word 0x0000882d
  .word 0x0040182d
  .word 0x10600010
  .word 0xa2620050
  .word 0x3c05007c
  .word 0x27b40030
  .word 0x3c160097
  .word 0x3c150097
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220400
  .word 0x1040000b
  .word 0x02511021
  .word 0x02712021
  .word 0x90430000
  .word 0x1460fff9
  .word 0xa0830050
  .word 0x10000006
  .word 0x24020400
  .word 0x3c05007c
  .word 0x27b40030
  .word 0x3c160097
  .word 0x3c150097
  .word 0x24020400
  .word 0x16220003
  .word 0x24a3df30
  .word 0xa260044f
  .word 0x241103ff
  .word 0x24020001
  .word 0x6a040007
  .word 0x6e040000
  .word 0x6a05000f
  .word 0x6e050008
  .word 0x6a060017
  .word 0x6e060010
  .word 0x6a07001f
  .word 0x6e070018
  .word 0xb2640017
  .word 0xb6640010
  .word 0xb265001f
  .word 0xb6650018
  .word 0xb2660027
  .word 0xb6660020
  .word 0xb267002f
  .word 0xb6670028
  .word 0x6a040027
  .word 0x6e040020
  .word 0x6a05002f
  .word 0x6e050028
  .word 0x6a060037
  .word 0x6e060030
  .word 0x6a07003f
  .word 0x6e070038
  .word 0xb2640037
  .word 0xb6640030
  .word 0xb265003f
  .word 0xb6650038
  .word 0xb2660047
  .word 0xb6660040
  .word 0xb267004f
  .word 0xb6670048
  .word 0x26b59140
  .word 0xae77000c
  .word 0x27a40010
  .word 0xafa20014
  .word 0x27d08500
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040902d
  .word 0x0200202d
  .word 0x24020004
  .word 0xae740004
  .word 0xae620008
  .word 0x24050450
  .word 0x0c1419fe
  .word 0xae720000
  .word 0x26c49c00
  .word 0x0200382d
  .word 0x26280051
  .word 0xafa00000
  .word 0xafa00008
  .word 0x2405000d
  .word 0x0000302d
  .word 0x02a0482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02a21025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0240202d
  .word 0x0c140c5c
  .word 0x0240202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050A660
#ifndef PC_BUILD
asm u32 FUN_0050a660(char *param_1,char *param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb10050
  .word 0xffb00040
  .word 0x0080882d
  .word 0xffb600a0
  .word 0x00a0802d
  .word 0xffb20060
  .word 0x24040011
  .word 0xffbf00b0
  .word 0x3c160097
  .word 0xffb50090
  .word 0x26d28500
  .word 0xffb40080
  .word 0x0c142012
  .word 0xffb30070
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x10600012
  .word 0xa242000c
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000d
  .word 0x02251021
  .word 0x02452021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000006
  .word 0x24020400
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240040b
  .word 0x92020000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000d
  .word 0xa242040c
  .word 0x2646040c
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x10400007
  .word 0x02051021
  .word 0x00c52021
  .word 0x90430000
  .word 0xa0830000
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240080b
  .word 0x24e3df48
  .word 0x24020001
  .word 0xafa20014
  .word 0x27a40010
  .word 0xafa30024
  .word 0x26d08500
  .word 0xafa00018
  .word 0x0c140c58
  .word 0x26949140
  .word 0x0040882d
  .word 0x0200202d
  .word 0x24020004
  .word 0xae530004
  .word 0xae420008
  .word 0x2405080c
  .word 0x0c1419fe
  .word 0xae510000
  .word 0x26a49c00
  .word 0x0200382d
  .word 0xafa00000
  .word 0x24050011
  .word 0xafa00008
  .word 0x0000302d
  .word 0x2408080c
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_0050A868
void FUN_0050a868(char *param_1)

{
  FUN_00509758(param_1,0x12);
  return;
}
#pragma schedule off
// FUN_0050A888
#ifndef PC_BUILD
asm u32 FUN_0050a888(char *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb10050
  .word 0xffb50090
  .word 0x0080882d
  .word 0xffb600a0
  .word 0x00a0a82d
  .word 0xffb00040
  .word 0x24040013
  .word 0xffbf00b0
  .word 0x3c160097
  .word 0xffb40080
  .word 0x26d08500
  .word 0xffb30070
  .word 0x0c142012
  .word 0xffb20060
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x10600012
  .word 0xa2020014
  .word 0x3c06007c
  .word 0x27b20030
  .word 0x3c140097
  .word 0x3c130097
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000d
  .word 0x02251021
  .word 0x02052021
  .word 0x90430000
  .word 0xa0830014
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000006
  .word 0x24020400
  .word 0x3c06007c
  .word 0x27b20030
  .word 0x3c140097
  .word 0x3c130097
  .word 0x24020400
  .word 0x50a20001
  .word 0xa2000413
  .word 0xae150010
  .word 0x24c3df60
  .word 0x24020001
  .word 0x27a40010
  .word 0xafa20014
  .word 0x26739140
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae120004
  .word 0x24020004
  .word 0xae110000
  .word 0xae020008
  .word 0x26849c00
  .word 0x26c78500
  .word 0x24050013
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x24080414
  .word 0x0260482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02621025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050AA38
#ifndef PC_BUILD
asm u32 FUN_0050aa38(char *param_1,char *param_2,u32 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffb00040
  .word 0xffb700b0
  .word 0x0080802d
  .word 0xffb600a0
  .word 0x00c0b82d
  .word 0xffb30070
  .word 0x00e0b02d
  .word 0xffb10050
  .word 0x00a0982d
  .word 0xffbe00c0
  .word 0x0100882d
  .word 0xffb20060
  .word 0x24040014
  .word 0xffbf00d0
  .word 0x3c1e0097
  .word 0xffb50090
  .word 0x27d28500
  .word 0x0c142012
  .word 0xffb40080
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x54400004
  .word 0x92020000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92020000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000f
  .word 0xa242000c
  .word 0x2a270401
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000a
  .word 0x02051021
  .word 0x02452021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000003
  .word 0x24020400
  .word 0x2a270401
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240040b
  .word 0x92620000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000c
  .word 0xa242040c
  .word 0x2646040c
  .word 0x24a50001
  .word 0x28a20400
  .word 0x10400007
  .word 0x02651021
  .word 0x00c52021
  .word 0x90430000
  .word 0xa0830000
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240080b
  .word 0x14e00005
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000004b
  .word 0x2402fff9
  .word 0x1a200011
  .word 0x0000282d
  .word 0x2646080c
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x00000000
  .word 0x02c51021
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0x00b1102a
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000006
  .word 0xae510c10
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0xae510c10
  .word 0x24e3df78
  .word 0xae570c0c
  .word 0x24020001
  .word 0x27a40010
  .word 0xafa20014
  .word 0xafa30024
  .word 0x27d08500
  .word 0xafa00018
  .word 0x0c140c58
  .word 0x26949140
  .word 0x0040882d
  .word 0x0200202d
  .word 0x24020004
  .word 0xae530004
  .word 0xae420008
  .word 0x24050c14
  .word 0x0c1419fe
  .word 0xae510000
  .word 0x26a49c00
  .word 0x0200382d
  .word 0xafa00000
  .word 0x24050014
  .word 0xafa00008
  .word 0x0000302d
  .word 0x24080c14
  .word 0x0280482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02821025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule on
// FUN_0050ACB8
void FUN_0050acb8(char *param_1)

{
  FUN_00509758(param_1,0x15);
  return;
}
#pragma schedule off
// FUN_0050ACD8
#ifndef PC_BUILD
asm u64 FUN_0050acd8(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb50090
  .word 0xffb30070
  .word 0x00c0a82d
  .word 0xffb40080
  .word 0x00a0982d
  .word 0xffb10050
  .word 0x3c140097
  .word 0xffb00040
  .word 0x26918500
  .word 0xffbf00b0
  .word 0xffb600a0
  .word 0x0c141ef2
  .word 0xffb20060
  .word 0x0040802d
  .word 0x0c142012
  .word 0x24040016
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x10400006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x8e120004
  .word 0x16400005
  .word 0x3c020097
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000068
  .word 0x2402fff7
  .word 0x8e040000
  .word 0x24429a00
  .word 0x3c03007c
  .word 0x02021023
  .word 0xae24000c
  .word 0x00021103
  .word 0xfe330010
  .word 0xae350018
  .word 0x2463df90
  .word 0xae22001c
  .word 0x24050001
  .word 0x27a40010
  .word 0xafa50014
  .word 0xafa30024
  .word 0x32508000
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040982d
  .word 0x24030008
  .word 0x27a20030
  .word 0xae230008
  .word 0xae220004
  .word 0x12000025
  .word 0xae938500
  .word 0x3c150078
  .word 0x0c140c68
  .word 0x8ea4f54c
  .word 0x3c070078
  .word 0x0000302d
  .word 0x8ce3f4b8
  .word 0x2402ffff
  .word 0x14620008
  .word 0x0200902d
  .word 0x8e838500
  .word 0x3c160097
  .word 0x3c100097
  .word 0x00031023
  .word 0xace3f4b8
  .word 0x10000011
  .word 0xae828500
  .word 0x3c160097
  .word 0x3c100097
  .word 0x24c60001
  .word 0x28c20020
  .word 0x1040000b
  .word 0x00061080
  .word 0x24e3f4b8
  .word 0x00432821
  .word 0x2404ffff
  .word 0x8ca20000
  .word 0x1444fff8
  .word 0x24c60001
  .word 0x8e220000
  .word 0x00021823
  .word 0xaca20000
  .word 0xae230000
  .word 0x0c140c60
  .word 0x8ea4f54c
  .word 0x10000005
  .word 0x26109140
  .word 0x3c160097
  .word 0x3c100097
  .word 0x0000902d
  .word 0x26109140
  .word 0x26c49c00
  .word 0x26878500
  .word 0xafa00000
  .word 0xafb20008
  .word 0x24050016
  .word 0x0000302d
  .word 0x24080020
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000015
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x1000000c
  .word 0x2402fff5
  .word 0x12400005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0x10000006
  .word 0x0000102d
  .word 0x0c140c68
  .word 0x0260202d
  .word 0x0c140c5c
  .word 0x0260202d
  .word 0xdfa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050AF18
#ifndef PC_BUILD
asm u32 FUN_0050af18(char *param_1,long param_2,int param_3,u32 param_4,u32 param_5,u32 param_6)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffb30070
  .word 0xffbe00c0
  .word 0x0080982d
  .word 0xffb50090
  .word 0x0120f02d
  .word 0xffb20060
  .word 0x00a0a82d
  .word 0xffb00040
  .word 0x00c0902d
  .word 0xffb10050
  .word 0x00e0802d
  .word 0xffbf00d0
  .word 0x24040017
  .word 0xffb700b0
  .word 0xffb600a0
  .word 0xffb40080
  .word 0x0c142012
  .word 0xafa80034
  .word 0x3c020097
  .word 0x24518500
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92620000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92620000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000e
  .word 0xa222000c
  .word 0x2e060401
  .word 0x24a50001
  .word 0x28a20400
  .word 0x1040000a
  .word 0x02651021
  .word 0x02252021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000003
  .word 0x24020400
  .word 0x2e060401
  .word 0x24020400
  .word 0x50a20001
  .word 0xa220040b
  .word 0x10c0000e
  .word 0x2fc20401
  .word 0x1040000c
  .word 0x24024601
  .word 0x16a2000e
  .word 0x00000000
  .word 0x8e420004
  .word 0x54400005
  .word 0x8e42000c
  .word 0x0c14201e
  .word 0x00000000
  .word 0x10000061
  .word 0x0000102d
  .word 0x14400005
  .word 0x00000000
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000005b
  .word 0x2402ffea
  .word 0x12000011
  .word 0x0000282d
  .word 0x2626040c
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c170097
  .word 0x3c160097
  .word 0x00000000
  .word 0x02451021
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0x00b0102b
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000006
  .word 0xae300810
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c170097
  .word 0x3c160097
  .word 0xae300810
  .word 0x24e3dfa8
  .word 0x24020001
  .word 0xafa30024
  .word 0xafa20014
  .word 0x27a40010
  .word 0xae35080c
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040a02d
  .word 0xae3e0818
  .word 0x24020004
  .word 0xae330004
  .word 0xae220008
  .word 0x24034601
  .word 0x8fa20034
  .word 0xae340000
  .word 0x16a3000a
  .word 0xae220814
  .word 0x8e45000c
  .word 0x2411001c
  .word 0x8e420004
  .word 0x00450018
  .word 0x00002812
  .word 0x0c1419fe
  .word 0x8e440008
  .word 0x10000003
  .word 0x3c020097
  .word 0x24110017
  .word 0x3c020097
  .word 0x2405081c
  .word 0x24508500
  .word 0x26d29140
  .word 0x0c1419fe
  .word 0x0200202d
  .word 0x26e49c00
  .word 0x0220282d
  .word 0x0200382d
  .word 0xafa00000
  .word 0xafa00008
  .word 0x0000302d
  .word 0x2408081c
  .word 0x0240482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0280202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02421025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0280202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0280202d
  .word 0x0c140c5c
  .word 0x0280202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050B1C0
#ifndef PC_BUILD
asm u32 FUN_0050b1c0(char *param_1,char *param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb00040
  .word 0xffb10050
  .word 0x0080802d
  .word 0xffb600a0
  .word 0x00a0882d
  .word 0xffb20060
  .word 0x24040011
  .word 0xffbf00b0
  .word 0x3c160097
  .word 0xffb50090
  .word 0x26d28500
  .word 0xffb40080
  .word 0x0c142012
  .word 0xffb30070
  .word 0x3c020078
  .word 0x8c43f53c
  .word 0x54600004
  .word 0x92020000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92020000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x10600012
  .word 0xa242000c
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000d
  .word 0x02051021
  .word 0x02452021
  .word 0x90430000
  .word 0xa083000c
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000006
  .word 0x24020400
  .word 0x3c07007c
  .word 0x27b30030
  .word 0x3c150097
  .word 0x3c140097
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240040b
  .word 0x92220000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x1060000d
  .word 0xa242040c
  .word 0x2646040c
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x10400007
  .word 0x02251021
  .word 0x00c52021
  .word 0x90430000
  .word 0xa0830000
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x24020400
  .word 0x50a20001
  .word 0xa240080b
  .word 0x24e2dfc0
  .word 0x24030001
  .word 0xafa30014
  .word 0x27a40010
  .word 0xafa20024
  .word 0x26909140
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae530004
  .word 0x24020004
  .word 0xae510000
  .word 0xae420008
  .word 0x26a49c00
  .word 0x26c78500
  .word 0x24050018
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x2408080c
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00c0
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0050B3B8
#ifndef PC_BUILD
asm u32 FUN_0050b3b8(char *param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffb10050
  .word 0xffb50090
  .word 0x0080882d
  .word 0xffb00040
  .word 0x00a0a82d
  .word 0xffbe00c0
  .word 0x00c0802d
  .word 0xffb20060
  .word 0x24040011
  .word 0xffbf00d0
  .word 0x3c1e0097
  .word 0xffb700b0
  .word 0x27d28500
  .word 0xffb600a0
  .word 0xffb40080
  .word 0x0c142012
  .word 0xffb30070
  .word 0x3c030078
  .word 0x8c62f53c
  .word 0x54400004
  .word 0x92220000
  .word 0x0c14205c
  .word 0x00000000
  .word 0x92220000
  .word 0x0000282d
  .word 0x00021e00
  .word 0x10600013
  .word 0xa2420014
  .word 0x2e060400
  .word 0x3c16007c
  .word 0x27b30030
  .word 0x3c170097
  .word 0x3c140097
  .word 0x24a50001
  .word 0x00000000
  .word 0x28a20400
  .word 0x1040000e
  .word 0x02251021
  .word 0x02452021
  .word 0x90430000
  .word 0xa0830014
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x10000007
  .word 0x24020400
  .word 0x2e060400
  .word 0x3c16007c
  .word 0x27b30030
  .word 0x3c170097
  .word 0x3c140097
  .word 0x24020400
  .word 0x50a20001
  .word 0xa2400413
  .word 0x240203ff
  .word 0x02a0202d
  .word 0x0046800a
  .word 0xae550010
  .word 0x0200282d
  .word 0x0c1419fe
  .word 0xae50000c
  .word 0x26909140
  .word 0x26c3dfd8
  .word 0x24020001
  .word 0xafa20014
  .word 0x27a40010
  .word 0xafa30024
  .word 0x0c140c58
  .word 0xafa00018
  .word 0x0040882d
  .word 0xae530004
  .word 0x24020004
  .word 0xae510000
  .word 0xae420008
  .word 0x26e49c00
  .word 0x27c78500
  .word 0x24050019
  .word 0xafa00000
  .word 0x0000302d
  .word 0xafa00008
  .word 0x2408080c
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141eb6
  .word 0x0000582d
  .word 0x04410007
  .word 0x3c022000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x0c14201e
  .word 0x00000000
  .word 0x1000000f
  .word 0x2402fff5
  .word 0x02021025
  .word 0x0c14201e
  .word 0x8c500000
  .word 0x16000005
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x10000006
  .word 0x2402fff5
  .word 0x0c140c68
  .word 0x0220202d
  .word 0x0c140c5c
  .word 0x0220202d
  .word 0x8fa20030
  .word 0xdfbf00d0
  .word 0xdfbe00c0
  .word 0xdfb700b0
  .word 0xdfb600a0
  .word 0xdfb50090
  .word 0xdfb40080
  .word 0xdfb30070
  .word 0xdfb20060
  .word 0xdfb10050
  .word 0xdfb00040
  .word 0x03e00008
  .word 0x27bd00e0
}
#endif /* PC_BUILD: asm function omitted */
