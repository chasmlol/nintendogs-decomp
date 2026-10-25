#include "ctx.h"

extern u32 func_0203567c(void);
extern void func_02022b7c(u8 *self);
extern void func_ov003_021894ec(u8 *self, s32 a, s32 b, u32 c);

void func_ov003_02188030(u8 *param_1)
{
    u32 r;
    r = func_0203567c();
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 3, 31, r);
}
