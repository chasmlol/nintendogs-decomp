#include "ctx.h"

extern u32 func_02071778(u8 *p);
extern u32 func_02071aa4(void);
extern u32 func_020727d8(u8 *p, void *cb, u32 a, u8 *p2, s32 *q);
extern void func_0207175c(u8 *p, u32 v);
extern void func_02072414(void);

u32 func_0207275c(u8 *p, s32 *q, s32 n)
{
    u32 uVar1;
    u32 uVar2;

    uVar1 = func_02071778(p);
    if (uVar1 == 0) {
        if (n == 0) {
            uVar2 = 0;
        } else {
            uVar2 = func_02071aa4();
        }
        uVar1 = func_020727d8(p, (void *)func_02072414, uVar2, p, q);
        if (n != 0 && uVar1 != 0) {
            func_0207175c(p, uVar1);
        }
    }
    return uVar1;
}
