#include "ctx.h"

extern u32 func_02071778(u32 a);
extern u32 func_02071aa4(void);
extern u32 func_020727d8(u32 a, void *b, u32 c, u32 d, u32 *e);
extern void func_0207175c(u32 a, u32 b);
extern void func_020723d8(void);

u32 func_02072664(u32 param_1, u32 *param_2, u32 param_3)
{
    u32 uVar1;
    u32 uVar2;

    uVar1 = func_02071778(param_1);
    if (uVar1 == 0) {
        if (param_3 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = func_02071aa4();
        }
        uVar1 = func_020727d8(param_1, (void *)func_020723d8, uVar2, param_1, param_2);
        if (param_3 != 0 && uVar1 != 0) {
            func_0207175c(param_1, uVar1);
        }
    }
    return uVar1;
}
