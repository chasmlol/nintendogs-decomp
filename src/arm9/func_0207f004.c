#include "ctx.h"

u32 func_02080b08(void);
u32 func_02080b34(void);
void func_02080b1c(u32 a);
void func_02080b48(u32 a);
u32 func_0206caf8(u32 a, u32 *b);

u32 func_0207f004(u32 param_1, u32 *param_2, void (*param_3)(void), u32 param_4)
{
    u32 r5;
    u32 r4;

    if (param_4 != 0) {
        r5 = func_02080b34();
    } else {
        r5 = func_02080b08();
    }
    r4 = func_0206caf8(param_1, param_2);
    if (r4 == 0) {
        if (param_3 != 0) {
            param_3();
        }
        *(u16 *)((u8 *)param_2 + 4) = (u16)param_1;
    }
    if (param_4 != 0) {
        func_02080b48(r5);
    } else {
        func_02080b1c(r5);
    }
    return r4;
}
