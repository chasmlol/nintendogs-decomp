#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_ov003_021894ec(u8 *p, s32 a, s32 b, s32 c);

void func_ov003_0218813c(u8 *param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov003_021894ec(param_1, 3, 0x1f, r);
}
