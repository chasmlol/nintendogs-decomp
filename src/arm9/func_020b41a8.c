#include "ctx.h"

extern u8 *data_02159444;

void func_020b41a8(u8 *param_1)
{
    if (*(u16 *)(param_1 + 4) == 0) {
        goto zero;
    }
    if (*(u16 *)(param_1 + 4) == 0xe00) {
        goto ck;
    }
    return;
zero:
    *(u16 *)(param_1 + 4) = 0xe00;
    *(u16 *)(param_1 + 6) = 0;
    return;
ck:
    if (*(s16 *)(*(u8 **)&data_02159444 + 256) == 2) {
        *(u16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
}
