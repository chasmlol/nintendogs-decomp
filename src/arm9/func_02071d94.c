#include "ctx.h"

extern u32 func_0207dd14(u32 a, u32 b, u32 c);
extern void func_02071e24(u32 p);
extern void func_0207d018(u32 *p, u32 q);

u32 func_02071d94(u32 *param_1)
{
    u32 iVar1;

    iVar1 = func_0207dd14(param_1[0], 20, 4);
    if (iVar1 != 0) {
        func_02071e24(iVar1);
        func_0207d018(param_1 + 1, iVar1);
        return 1;
    }
    return 0;
}
