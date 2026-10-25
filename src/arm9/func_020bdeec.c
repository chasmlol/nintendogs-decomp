#include "ctx.h"

extern u8 *data_0215946c;
extern u8 data_0214efdc[];
extern s32 data_0214287c;
extern s32 data_02142880;
extern s32 data_02142888;
extern u8 *data_02159428;
extern s32 data_02142884;
extern void func_020cdc04(s32 *a, s32 *b, s32 c, s32 d, u16 e);

void func_020bdeec(void)
{
    u8 *puVar2;
    s32 local_14[3];
    s16 mode;

    puVar2 = data_0215946c;
    mode = *(s16 *)(puVar2 + 8);
    switch (mode) {
    case 0:
        goto C0;
    case 1:
        goto C1;
    case 2:
        break;
    }
    goto CALL;
C0:
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(u16 *)puVar2 = *(u16 *)puVar2 - 0x100;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(u16 *)puVar2 = *(u16 *)puVar2 + 0x100;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x80) != 0) {
        *(s32 *)(puVar2 + 4) = *(s32 *)(puVar2 + 4) - 0x400;
        if (*(s32 *)(puVar2 + 4) < data_0214287c) {
            *(s32 *)(puVar2 + 4) = data_0214287c;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x40) != 0) {
        *(s32 *)(puVar2 + 4) = *(s32 *)(puVar2 + 4) + 0x400;
        if (*(s32 *)(puVar2 + 4) > data_02142880) {
            *(s32 *)(puVar2 + 4) = data_02142880;
        }
    }
    if (*(s32 *)(puVar2 + 4) < data_0214287c) {
        *(s32 *)(puVar2 + 4) = data_0214287c;
    }
    if (*(s32 *)(puVar2 + 4) > data_02142880) {
        *(s32 *)(puVar2 + 4) = data_02142880;
    }
    goto CALL;
C1:
    *(s32 *)(puVar2 + 4) = data_02142888;
CALL:
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    func_020cdc04((s32 *)(data_0215946c + 12), local_14, data_02142884 + *(s32 *)(data_02159428 + 12), 0, *(u16 *)puVar2);
    *(s32 *)(data_0215946c + 0x10) = *(s32 *)(puVar2 + 4);
}
