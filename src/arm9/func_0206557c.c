#include "ctx.h"
extern u8 data_02150600[];
extern u32 func_02080b08(void);
extern void func_0207f2d0(u32 a, u32 b);
extern void func_02080b1c(u32 a);

u32 func_0206557c(u32 p0)
{
    u32 g = (u32)data_02150600;
    u32 old;
    u32 r;
    r = func_02080b08();
    old = *(u32 *)(g + 0x38);
    *(u32 *)(g + 0x38) = p0;
    func_0207f2d0(g + 0x3c, *(u32 *)(g + 0x38));
    func_02080b1c(r);
    return old;
}
