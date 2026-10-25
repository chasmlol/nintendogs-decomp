#include "ctx.h"
extern u32 *func_02085a94(u32 *p);
extern void func_02082620(u32 *a, u32 b, u32 *c);
extern void func_02085ad8(u32 *a, u32 *b);
u32 *func_02081198(u8 *param_1, s32 param_2, void (*param_3)(u32 *))
{
    u32 *piVar1;
    u32 local_20[3];
    vu32 *pv;
    piVar1 = NULL;
    if (*(u32 *)(param_1 + 0xc) != 0) {
        pv = (vu32 *)local_20;
        pv[0] = 0;
        pv[1] = 0;
        pv[2] = 0;
        piVar1 = func_02085a94((u32 *)(param_1 + 0xc));
        func_02082620(piVar1, *(u32 *)(param_1 + 0x1c) + param_2 * 0x20, local_20);
        if (param_3 != NULL) {
            (*param_3)(piVar1);
        }
        func_02085ad8((u32 *)(param_1 + 4), piVar1);
        if (((**(u32 **)piVar1[6]) << 17) >> 31) {
            piVar1 = NULL;
        }
    }
    return piVar1;
}
