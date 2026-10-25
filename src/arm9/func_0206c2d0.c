#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_01ffdb38(u32 a, u32 b, u32 c, u32 d);

void func_0206c2d0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 iVar1;
    u32 r;
    vu32 *puVar2;
    if (param_4 != 0) {
        puVar2 = (vu32 *)(0x040000b0 + (param_1 * 3 + 2) * 4);
        do {
        } while ((*puVar2 & 0x80000000) != 0);
        r = func_02080b08();
        iVar1 = 0x040000e0 + param_1 * 4;
        *(vu32 *)(0x04000000 + param_1 * 4 + 0xe0) = param_3;
        func_01ffdb38(param_1, iVar1, param_2, (param_4 >> 1) | 0x81000000);
        func_02080b1c(r);
        do {
        } while ((*puVar2 & 0x80000000) != 0);
        return;
    }
    return;
}
