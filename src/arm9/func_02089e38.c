#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 x, u32 *p);
extern u32 data_0215617c;

s32 func_02089e38(void)
{
    u32 x;
    s32 n;
    u32 *p;
    x = func_02080b08();
    n = 0;
    p = (u32 *)data_0215617c;
    if (p != 0) {
        do {
            p = (u32 *)*p;
            n++;
        } while (p != 0);
    }
    func_02080b1c(x, p);
    return n;
}
