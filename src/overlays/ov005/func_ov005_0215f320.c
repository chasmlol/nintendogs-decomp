#include "ctx.h"

extern u8 *data_02159444;
void func_0203e908(u8 *p, s16 v);

void func_ov005_0215f320(u8 *param_1)
{
    u32 big;
    big = *(u16 *)(param_1 + 0xfc) > 60;
    if ((*(u16 *)(data_02159444 + 132) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = (u16)(*(u16 *)(param_1 + 0x11a) + 1);
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (big) {
        func_0203e908(param_1, 1105);
    }
}
