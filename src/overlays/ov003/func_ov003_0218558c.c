#include "ctx.h"

extern void func_02022b7c(u8 *p);
extern u32 func_0202c3e0(u8 *p, u32 a);
extern u32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 x);

void func_ov003_0218558c(u8 *param_1)
{
    func_02022b7c(param_1);
    if (func_0202c3e0(param_1, 8) != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0xf4);
    }
}
