#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_ov005_0215c854(u8 *p, s32 v);

void func_ov005_0215c778(u8 *param_1)
{
    s32 r = func_0203567c(param_1);
    func_ov005_0215c854(param_1, r);
}
