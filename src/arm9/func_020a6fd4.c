#include "ctx.h"

extern u64 func_02080cf4(void);
void func_02080d84(u32 *buf);
u32 func_02093720(void);
void func_0209373c(void);
void func_020932c4(u32 a, u32 b, u32 c, u32 *buf, u32 d, u32 e);

void func_020a6fd4(void)
{
    u64 t;
    u32 buf[2];
    u32 iVar1;
    u32 a;
    u32 hi;

    t = func_02080cf4();
    a = (u32)t;
    hi = (u32)(t >> 32);
    func_02080d84(buf);
    iVar1 = func_02093720();
    func_0209373c();
    func_0209373c();
    func_020932c4(iVar1, 0, 2, buf, a, hi);
}
