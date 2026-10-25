#include "ctx.h"

u32 func_02080b08(void);
void func_02080b1c(u32 a);
void func_01ffdb38(u32 a, u32 b, u32 c, u32 d);

void func_0206c3dc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    vu32 *puVar2;
    u32 iVar1;
    u32 r;
    if (param_4 != 0) {
        puVar2 = (vu32 *)(0x040000b0 + (param_1 * 3 + 2) * 4);
        while ((*puVar2 & 0x80000000) != 0) {
        }
        r = func_02080b08();
        iVar1 = 0x040000e0 + param_1 * 4;
        *(u32 *)(param_1 * 4 + 0x40000e0) = param_3;
        func_01ffdb38(param_1, iVar1, param_2, (param_4 >> 2) | 0x85000000);
        func_02080b1c(r);
        while ((*puVar2 & 0x80000000) != 0) {
        }
    }
}
