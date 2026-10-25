#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern s32 func_0202508c(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_ov003_02175458(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

static inline u32 FX(s32 a, s32 b)
{
    s64 v = (s64)a * (s64)b + 0x800;
    return (u32)(v >> 12);
}

void func_ov003_02175354(u8 *param_1)
{
    s32 iVar2;
    u32 uVar1;
    u32 flag;

    flag = 1;
    uVar1 = func_02028124(param_1);
    iVar2 = func_0202508c(param_1, 5, 0x11, FX((s32)uVar1, -630));
    if (iVar2 != 0) {
        flag = 0;
    }
    iVar2 = func_ov003_02175458(param_1, 944, 0, 768, 1, 0, 1, flag, 0);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 944);
    }
}
