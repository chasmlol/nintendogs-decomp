#include "ctx.h"

extern u32 *data_02156184;
extern s32 func_02080b08(void);
extern void func_02080b1c(s32 a);

s32 func_02089df8(void)
{
    s32 n;
    u32 *p;
    s32 r;
    r = func_02080b08();
    n = 0;
    p = data_02156184;
    while (p != 0) {
        p = (u32 *)*p;
        n = n + 1;
    }
    func_02080b1c(r);
    return n;
}
