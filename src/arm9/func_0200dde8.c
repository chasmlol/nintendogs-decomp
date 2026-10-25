#include "ctx.h"
extern u8 *data_0214f45c;
extern u32 *data_0214f464;
extern s32 func_0200c498(u32 a, s32 b);
extern void func_020362ec(u8 *p, s32 a);
extern s32 func_02036484(u8 *p);
extern u32 func_0202fcc0(u8 *p);
extern u32 func_0202fa08(u8 *p);

u32 func_0200dde8(u8 *param_1)
{
    s32 i;
    u32 x;

    i = 0;
    if (0 < *(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x2e)) {
        do {
            if (func_0200c498(11, i) != 0) {
                func_020362ec(param_1, (s16)(i + 13));
                x = *data_0214f464 * 0x10dcd + 1;
                *data_0214f464 = x;
                if ((u16)(((u32)(u16)x * 5) >> 16) == 0) {
                    break;
                }
            }
            i = (s16)(i + 1);
        } while (i < *(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x2e));
    }
    if (func_02036484(param_1) != 0) {
        return func_0202fa08(param_1);
    }
    return func_0202fcc0(param_1);
}
