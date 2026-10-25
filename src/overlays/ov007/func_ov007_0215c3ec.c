#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern u32 func_020d60c8(u8 *p);

#define GPTR (*(u8 **)&data_ov007_02160d80)

void func_ov007_0215c3ec(u8 *param_1)
{
    s32 iVar2;
    u32 s;

    if (func_020d60c8(param_1) == 0) {
        return;
    }
    s = *(u16 *)(param_1 + 4);
    if (s == 10) {
        goto case10;
    }
    if (s == 11) {
        return;
    }
    if (s == 12) {
        return;
    }
    return;
case10:
    iVar2 = *(s32 *)(GPTR + 0x2c);
    if (iVar2 == 1) {
        goto case1;
    }
    if (iVar2 == 2) {
        goto case23;
    }
    if (iVar2 == 3) {
        goto case23;
    }
    return;
case1:
    if (*(s16 *)(GPTR + 0x38) == 0) {
        *(u16 *)(GPTR + 0x38) = 1;
    }
    return;
case23:
    *(u32 *)(GPTR + 0x3c) = 1;
    *(u32 *)(GPTR + 0x28) = *(u32 *)(GPTR + 0x2c);
    if (*(u32 *)(GPTR + 0x18) != 0) {
        ((void (*)(u8 *))*(u32 *)(GPTR + 0x18))(param_1);
    }
}
