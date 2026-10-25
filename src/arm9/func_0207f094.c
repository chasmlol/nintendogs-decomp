#include "ctx.h"

extern u64 func_02080b08(void);
extern u64 func_02080b34(void);
extern void func_02080b1c(u32 a);
extern void func_02080b48(u32 a);

u32 func_0207f094(u32 param_1, u32 *param_2, void (*param_3)(u32, u32), int param_4)
{
    u64 lVar2;
    u32 lo;

    if (param_1 != *(u16 *)(param_2 + 1)) {
        return 0xfffffffe;
    }
    if (param_4 != 0) {
        lVar2 = func_02080b34();
    } else {
        lVar2 = func_02080b08();
    }
    lo = (u32)lVar2;
    *(u16 *)(param_2 + 1) = 0;
    if (param_3 != NULL) {
        param_3(0, (u32)(lVar2 >> 32));
    }
    *param_2 = 0;
    if (param_4 != 0) {
        func_02080b48(lo);
    } else {
        func_02080b1c(lo);
    }
    return 0;
}
