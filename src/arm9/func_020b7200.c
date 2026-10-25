#include "ctx.h"

void *func_020038b8(void *p, u32 n);
void func_020aaaf8(void *p);
void func_020b7258(void);
void func_020b7314(void);

void *func_020b7200(void *param_1, u32 param_2)
{
    u8 *p;
    p = (u8 *)func_020038b8(param_1, 32);
    func_020aaaf8(p);
    *(u16 *)p = 13;
    *(u32 *)(p + 0x10) = (u32)func_020b7258;
    *(u32 *)(p + 0x14) = (u32)func_020b7314;
    *(u16 *)(p + 2) = 0;
    *(u32 *)(p + 0x1c) = param_2;
    return p;
}
