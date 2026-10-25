#include "ctx.h"

extern u32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 a);
extern u32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, u32 a);
extern u32 func_02029290(u8 *p, s32 a, u8 b);

u32 func_ov003_02170800(u8 *param_1)
{
    u8 *ps;
    u32 iVar2;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f6, 0x1f7, 0x202, 0x203, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    func_0203e908(param_1, 0xf3);
    iVar2 = func_02023780(param_1);
    ps = func_02024114(param_1, iVar2);
    if (ps == 0) {
        return (u32)ps;
    }
    return func_02029290(param_1, (s16)(*(u16 *)ps + 12), *(ps + 0x28));
}
