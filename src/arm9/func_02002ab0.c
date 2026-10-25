#include "ctx.h"

extern u32 data_0214e6f4;
extern s32 func_02002e00(void);
extern void func_020026a4(u32 v);

u32 func_02002ab0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar3;
    u32 *g;

    if (func_02002e00() == 0) {
        return 1;
    }
    g = &data_0214e6f4;
    uVar3 = ((param_1 >> 16) & 0xff) | 0x02006300;
    g[1] = param_2;
    g[2] = param_3;
    func_020026a4(uVar3);
    func_020026a4((param_1 & 0xffff) | 0x01010000);
    return 0;
}
