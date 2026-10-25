#include "ctx.h"
extern void func_0207dde4(u8 *p);
extern void func_0207ddb4(u8 *p);
void func_0207dcd4(u8 *param_1, u32 param_2)
{
    if ((param_2 & 1) != 0) {
        func_0207dde4(param_1);
    }
    if ((param_2 & 2) != 0) {
        func_0207ddb4(param_1);
    }
}
