#include "ctx.h"

extern s32 func_02035584(u8 *p, u32 v);
extern void func_02022b7c(u8 *p);
extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, s32 c);

void func_ov003_02189300(u8 *param_1)
{
    s32 r = func_02035584(param_1, 1);
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 3, 31, r);
}
