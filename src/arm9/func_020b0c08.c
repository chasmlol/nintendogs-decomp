#include "ctx.h"

extern void *func_020038b8(u32 a, u32 b);
extern void func_020aaaf8(u32 *p);
extern void func_020b0df4(void);
extern void func_020b0cc4(void);

u32 *func_020b0c08(u32 a, u32 b)
{
    u32 *p = (u32 *)func_020038b8(a, 32);
    func_020aaaf8(p);
    *(u16 *)p = 7;
    p[5] = (u32)func_020b0df4;
    p[4] = (u32)func_020b0cc4;
    p[7] = b;
    return p;
}
