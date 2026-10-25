#include "ctx.h"

extern u32 func_0204cf50(u8 *p);
extern void func_0204c768(u8 *p, u32 a, u32 b);

void func_0204c6fc(u8 *param_1)
{
    if (func_0204cf50(param_1) == 0) {
        func_0204c768(param_1, 1, 1);
    }
}
