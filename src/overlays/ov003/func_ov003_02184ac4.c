#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_ov003_02184b58(u8 *p, s32 a, s32 b, s32 c, s32 d);

void func_ov003_02184ac4(u8 *param_1)
{
    s32 iVar1 = func_0203567c(param_1);
    func_ov003_02184b58(param_1, 0, 0x1ff, iVar1, 0);
}
