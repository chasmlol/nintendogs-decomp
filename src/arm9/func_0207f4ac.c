#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_0207f3a0(u32 p0, u32 p1);
extern void func_02080b1c(u32 p);

void func_0207f4ac(u8 *param_1)
{
    u32 r = func_02080b08();
    *(u32 *)(param_1 + 100) = 1;
    func_0207f3a0(r, 1);
    func_02080b1c(r);
}
