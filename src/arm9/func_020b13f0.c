#include "ctx.h"

extern u8 *func_020038b8(void *p, u32 n);
extern void func_020aaaf8(u8 *o);
extern void func_020b1438(void);
extern void func_020b16a8(void);

u8 *func_020b13f0(void *p)
{
    u8 *o;
    o = func_020038b8(p, 32);
    func_020aaaf8(o);
    *(u16 *)o = 3;
    *(u32 *)(o + 0x10) = (u32)func_020b1438;
    *(u32 *)(o + 0x14) = (u32)func_020b16a8;
    *(s16 *)(o + 0x1c) = -1;
    return o;
}
