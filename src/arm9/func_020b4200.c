#include "ctx.h"

extern void func_02095670(u8 *p);
extern void func_0206c7bc(u32 a, u8 *b, u32 c);

void func_020b4200(u8 *p)
{
    vu16 s0;
    vu16 s2;
    func_02095670(p);
    s0 = 0;
    func_0206c7bc(s0, p + 0x85c, 0x18b0);
    s2 = 0;
    func_0206c7bc(s2, p + 0x210c, 1280);
}
