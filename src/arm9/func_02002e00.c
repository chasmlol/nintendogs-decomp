#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a, u32 *p);
extern u32 data_0214e6f4;

u32 func_02002e00(void)
{
    u32 *p;
    u32 v;
    u32 r;
    r = func_02080b08();
    p = &data_0214e6f4;
    v = *p;
    if (v != 0) {
        func_02080b1c(r, p);
        return 0;
    }
    *p = 1;
    func_02080b1c(r, p);
    return 1;
}
