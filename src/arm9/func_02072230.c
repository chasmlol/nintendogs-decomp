#include "ctx.h"

extern void func_02072324(void);
extern s32 func_0208a710(u8 *p, u32 a);
extern s32 func_0208a790(u8 *p);
extern u32 func_02071f78(u32 *c, u32 a, void *f, u8 *p, u32 b);
extern u32 func_020717a0(u32 a, u32 b, u32 c, u32 d);
extern void func_020800f0(u32 a, u32 b);
extern void func_0208a758(u8 *p, u32 a, u32 b);

s32 func_02072230(u8 *param_1, u32 param_2, u32 param_3, u32 *param_4)
{
    s32 n;
    u8 *iVar2;
    s32 iVar4;
    u32 t;
    u32 r9;
    u32 r8;
    u32 r4;
    u32 cnt;

    if (func_0208a710(param_1, param_2) != 0) {
        return 1;
    }
    n = func_0208a790(param_1);
    cnt = (u32)n - 1u;
    iVar2 = param_1 + (*(s32 *)(param_1 + 0x38) + param_2) * 4;
    r8 = *(s32 *)(iVar2 + 0x3c);
    if (param_2 < cnt) {
        t = *(u32 *)(iVar2 + 0x40);
    } else {
        t = *(u32 *)(param_1 + 8);
    }
    r9 = t - r8;
    if (param_4 == NULL) {
        return 0;
    }
    r4 = func_02071f78(param_4, r9 + 0x20, (void *)func_02072324, param_1, param_2);
    if (r4 == 0) {
        return 0;
    }
    iVar4 = func_020717a0(param_3, r4, r9, r8);
    if (r9 != (u32)iVar4) {
        return 0;
    }
    func_020800f0(r4, r9);
    func_0208a758(param_1, param_2, r4);
    return 1;
}
