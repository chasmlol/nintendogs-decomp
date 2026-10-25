#include "ctx.h"

extern u32 data_02144a78;
extern void func_0200274c(u32 v);

void func_020df9cc(u32 param_1)
{
    if (*(u32 *)&data_02144a78 != param_1) {
        if ((param_1 & 0xff) > 3) {
            param_1 = 3;
        }
        func_0200274c(param_1);
        *(u32 *)&data_02144a78 = param_1;
        return;
    }
}
