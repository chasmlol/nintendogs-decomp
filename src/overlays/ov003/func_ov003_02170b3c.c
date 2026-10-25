#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_02023780(u8 *p);
extern u8 *func_02024114(u8 *p, s32 v);
extern u8 func_02029290(u8 *p, s16 a, u8 b);

u32 func_ov003_02170b3c(u8 *p)
{
    s32 t;
    u8 *ps;

    t = func_ov003_02174844(p, 1, 73, 74, 75, 76, 10);
    if (t == 0) {
        return t;
    }
    func_0203e908(p, 0xee);
    ps = func_02024114(p, func_02023780(p));
    if (ps == 0) {
        return (u32)ps;
    }
    return func_02029290(p, (s16)(*(u16 *)ps + 12), *(u8 *)(ps + 0x28));
}
