#include "ctx.h"

extern u8 *data_0214f464;
extern void func_02035fbc(u8 *p, s32 *out, u32 a, u32 b);

void func_02035be8(u8 *param_1)
{
    s32 iStack_10;
    s16 uVar1;
    s32 bVar2;
    s16 s;

    if ((s32)*(s8 *)(param_1 + 0x88) != *(u16 *)(data_0214f464 + 0x38)) {
        return;
    }
    s = *(s16 *)(param_1 + 0xf0);
    if (s < 10) {
        goto zero;
    }
    if (s < 111) {
        bVar2 = 1;
        goto test;
    }
zero:
    bVar2 = 0;
test:
    if (bVar2) {
        return;
    }
    iStack_10 = 0;
    uVar1 = *(s16 *)(param_1 + 0x13e);
    *(s16 *)(param_1 + 0x13e) = -1;
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        func_02035fbc(param_1, &iStack_10, 1, 0);
    }
    if (*(s16 *)(param_1 + 0x13e) == -1) {
        *(s16 *)(param_1 + 0x13e) = uVar1;
    }
}
