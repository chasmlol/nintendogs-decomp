#include "ctx.h"

extern u32 data_02156188;
extern u32 data_02156184;
extern u32 func_02080b08(u32 *p);
extern void func_02080b1c(u32 r);

void func_0208a15c(u32 *param_1)
{
    u32 *old;
    u32 ret;
    ret = func_02080b08(param_1);
    old = *(u32 **)&data_02156188;
    if (old == 0) {
        *(u32 **)&data_02156188 = param_1;
        *(u32 **)&data_02156184 = param_1;
    } else {
        *old = (u32)param_1;
        *(u32 **)&data_02156188 = param_1;
    }
    *param_1 = 0;
    func_02080b1c(ret);
}
