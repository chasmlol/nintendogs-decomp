#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_02003a10(void);

void func_020bb438(u8 *param_1)
{
    u16 v = *(u16 *)(param_1 + 4);
    if (v == 0) {
        goto b1;
    }
    if (v == 0x1100) {
        goto b2;
    }
    return;
b1:
    if (func_02003a10() != 0) {
        *(u16 *)(param_1 + 4) = 0x1100;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
b2:
    if (*(s16 *)(data_02159444 + 0x100) == 2) {
        *(u16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
}
