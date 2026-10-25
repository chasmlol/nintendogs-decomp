#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159034;
extern u8 func_020929a8(u16 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_02000000(void);

void func_02092890(u16 *param_1, s32 param_2, s32 param_3, s32 param_4, s16 param_5, s16 param_6)
{
    u16 *puVar5;
    s16 iVar3;
    s16 iVar4;
    u8 bVar2;

    if (param_3 < 2) {
        return;
    }
    if (param_3 > 5) {
        return;
    }
    {
        s32 base = *(s32 *)(data_02159034 + 0x141c) + 0xf8;
        puVar5 = (u16 *)((s16)param_2 * 0x70 + base + (s16)(param_3 - 2) * 0x1c);
    }
    bVar2 = func_020929a8(puVar5, param_2, param_4, (s32)(s16)param_5, param_6);
    if (bVar2 == 0) {
        return;
    }
    iVar3 = 0;
    {
        puVar5[0] = param_1[0];
        ((u8 *)puVar5)[2] = *(u8 *)((u8 *)param_1 + 2);
        ((u8 *)puVar5)[3] = *(u8 *)((u8 *)param_1 + 3);
    }
    do {
        ((s16 *)puVar5 + iVar3)[2] = 0;
        iVar3 = (s16)(iVar3 + 1);

    } while (iVar3 < 8);
    iVar4 = 0;
    do {
        if ((param_1 + iVar4)[0x3c] == 0) {
            break;
        }
        (puVar5 + iVar4)[2] = (param_1 + iVar4)[0x3c];
        iVar4 = (s16)(iVar4 + 1);
    } while (iVar4 < 7);
    puVar5[10] = param_4;
    puVar5[11] = param_5;
    puVar5[12] = param_6;
}
