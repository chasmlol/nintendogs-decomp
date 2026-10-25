#include "ctx.h"

void *func_020038b8(void *a, u32 b);
void func_020aaaf8(void *a);
extern void func_020bb438(void);
extern void func_020bb4a8(void);

void *func_020bb3f0(void *param_1)
{
    u16 *p = (u16 *)func_020038b8(param_1, 28);
    func_020aaaf8(p);
    *p = 0x10;
    *(u32 *)((u8 *)p + 0x10) = (u32)func_020bb438;
    *(u32 *)((u8 *)p + 0x14) = (u32)func_020bb4a8;
    p[1] = 0;
    return p;
}
