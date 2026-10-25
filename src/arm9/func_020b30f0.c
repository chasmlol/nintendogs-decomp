#include "ctx.h"

void func_020b391c(void);
void func_020b3150(void);
u32 func_020038b8(u32 *a, u32 b);
void func_020aaaf8(u8 *p);

u8 *func_020b30f0(u32 *param_1, u32 param_2)
{
    u8 *p;

    p = (u8 *)func_020038b8(param_1, 36);
    func_020aaaf8(p);
    *(u16 *)p = 8;
    *(u32 *)(p + 0x14) = (u32)func_020b391c;
    *(u32 *)(p + 0x10) = (u32)func_020b3150;
    *(u32 *)(p + 0x1c) = param_2;
    *(u16 *)(p + 32) = 0;
    *(u16 *)(p + 4) = 0x900;
    return p;
}
