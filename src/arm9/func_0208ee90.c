#include "ctx.h"

void *func_020038b8(void *p, u32 n);
void func_0208eeb0(void *p);

void *func_0208ee90(void *param_1)
{
    void *r;
    r = func_020038b8(param_1, 124);
    func_0208eeb0(r);
    return r;
}
