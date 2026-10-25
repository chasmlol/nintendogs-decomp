#include "ctx.h"

extern void func_0206c068(u32 a);
extern void func_0207eccc(u32 a, void *b, u32 c);
extern void func_01ffdb98(u32 a, u32 b, u32 c, u32 d);
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r);

void func_0206c180(u32 param_1, u32 param_2, u32 param_3, u32 param_4, void *param_5, u32 param_6)
{
    u32 r4;

    if (param_4 == 0) {
        if (param_5 != NULL) {
            ((void (*)(u32))param_5)(param_6);
            return;
        }
        return;
    }
    func_0206c068(param_1);
    if (param_5 != NULL) {
        func_0207eccc(param_1, param_5, param_6);
        r4 = func_02080b08();
        *(vu32 *)(0x04000000 + param_1 * 4 + 0xe0) = param_3;
        func_01ffdb98(param_1, 0x040000e0 + param_1 * 4, param_2, (param_4 >> 2) | 0xc5000000);
        func_02080b1c(r4);
        return;
    }
    r4 = func_02080b08();
    *(vu32 *)(0x04000000 + param_1 * 4 + 0xe0) = param_3;
    func_01ffdb98(param_1, 0x040000e0 + param_1 * 4, param_2, (param_4 >> 2) | 0x85000000);
    func_02080b1c(r4);
}
