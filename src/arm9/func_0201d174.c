#include "ctx.h"

void func_0201d1f0(u32 p);
void func_02035c98(u32 p, u32 q);
int func_0203567c(u32 p);
void func_0202fcc0(u32 p);

void func_0201d174(u32 param_1)
{
    int r;

    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    r = func_0203567c(param_1);
    if (r != 0) {
        func_0202fcc0(param_1);
        return;
    }
    return;
}
