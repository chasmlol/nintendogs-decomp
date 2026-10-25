#include "ctx.h"

void *func_020038b8(void *p, u32 n);
void func_020aaaf8(void *p);
void func_020b9a8c(void);
void func_020b9b14(void);

void *func_020b9a3c(void *param_1)
{
    u8 *p;
    p = (u8 *)func_020038b8(param_1, 36);
    func_020aaaf8(p);
    *(u16 *)p = 15;
    *(u32 *)(p + 0x10) = (u32)func_020b9a8c;
    *(u32 *)(p + 0x14) = (u32)func_020b9b14;
    *(u16 *)(p + 2) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x20) = 0;
    return p;
}
