#include "ctx.h"

extern u32 func_020b3da0;
extern u32 func_020b3b24;
extern u8 *func_020038b8(u32 a, u32 b);
extern void func_020aaaf8(u8 *p);

u8 *func_020b3ae4(u32 param_1)
{
    u8 *puVar3 = func_020038b8(param_1, 0x20);
    func_020aaaf8(puVar3);
    *(u16 *)puVar3 = 10;
    *(u32 *)(puVar3 + 0x14) = (u32)&func_020b3da0;
    *(u32 *)(puVar3 + 0x10) = (u32)&func_020b3b24;
    return puVar3;
}
