#include "ctx.h"

void *func_020038b8(void *a, u32 b);
void func_020aaaf8(void *a);
extern void func_020afa48(void);
extern void func_020afefc(void);

void *func_020af9f0(void *param_1)
{
    u16 *p = (u16 *)func_020038b8(param_1, 40);
    func_020aaaf8(p);
    *p = 1;
    *(u32 *)((u8 *)p + 0x10) = (u32)func_020afa48;
    *(u32 *)((u8 *)p + 0x14) = (u32)func_020afefc;
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    p[17] = 0;
    *(u32 *)((u8 *)p + 0x24) = 0;
    return p;
}
