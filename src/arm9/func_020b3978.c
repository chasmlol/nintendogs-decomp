#include "ctx.h"

void *func_020038b8(void *p, u32 size);
void func_020aaaf8(void *p);
void func_020b3ae0(void);
void func_020b39d0(void);

u16 *func_020b3978(void *param_1, u32 param_2)
{
    u16 *p = (u16 *)func_020038b8(param_1, 36);

    func_020aaaf8(p);
    *p = 9;
    *(void **)((u8 *)p + 0x14) = (void *)func_020b3ae0;
    *(void **)((u8 *)p + 0x10) = (void *)func_020b39d0;
    *(u32 *)((u8 *)p + 0x1c) = param_2;
    *(u32 *)((u8 *)p + 0x20) = 0xffffffff;
    return p;
}
