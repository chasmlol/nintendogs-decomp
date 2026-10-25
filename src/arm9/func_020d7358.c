#include "ctx.h"

extern u8 data_0215ad40[];
extern u16 func_0206fbc8(u32 a);
extern s32 func_0206fb04(u32 a, u32 b, s32 *c, s32 *d);

u32 func_020d7358(u32 acc)
{
    s32 iStack_20;
    s32 iStack_1c;
    s32 j;
    s32 i;
    s32 r;

    r = func_0206fb04(0x438, func_0206fbc8(*(u16 *)(*(u8 **)data_0215ad40 + 256 + 10)), &iStack_20, &iStack_1c);
    if (r != 0) {
        acc = (acc + 1) & 0xff;
    }
    acc = (acc + 2) & 0xff;
    for (i = 0; i < 16; i++) {
        if (((u32 *)(*(u8 **)data_0215ad40 + 0x40))[i] != 0) {
            for (j = 0; j < 10; j++) {
                func_0206fbc8(*(u16 *)(*(u8 **)data_0215ad40 + 256 + 10));
            }
            acc = (acc + 1) & 0xff;
        }
    }
    return acc;
}
