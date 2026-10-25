#include "ctx.h"

extern s32 func_02003a10(void);
extern u8 data_0214f004;
extern u16 data_0214efdc;

void func_020bb7e8(u8 *param_1)
{
    s32 bVar2;

    if (*(u16 *)(param_1 + 4) == 0) {
        goto zero;
    }
    if (*(u16 *)(param_1 + 4) == 0x1200) {
        goto state;
    }
    return;
zero:
    if (func_02003a10() == 0) {
        return;
    }
    *(u16 *)(param_1 + 4) = 0x1200;
    *(u16 *)(param_1 + 6) = 0;
    *(u16 *)(param_1 + 0x1c) = 0;
    return;
state:
    *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_1 + 0x1c) + 1;
    bVar2 = 0;
    if (*(u16 *)(&data_0214f004 + 2) & 2) {
        bVar2 = 1;
        goto set;
    }
    if ((u16)(data_0214efdc & 0xc03)) {
        bVar2 = 1;
        goto set;
    }
    if (*(s16 *)(param_1 + 0x1c) >= 0x2a30) {
        bVar2 = 1;
    }
set:
    if (bVar2) {
        *(u16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
}
