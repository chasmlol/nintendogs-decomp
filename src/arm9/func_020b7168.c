#include "ctx.h"

extern u8 *func_020038b8(s32 *a, u32 b);
extern void func_020aaaf8(u8 *p);
extern void func_020b71fc(void);
extern void func_020b71a8(void);

u8 *func_020b7168(s32 *param_1)
{
    u8 *puVar3;
    puVar3 = func_020038b8(param_1, 0x20);
    func_020aaaf8(puVar3);
    *(s16 *)puVar3 = 0xc;
    *(u32 *)(puVar3 + 0x14) = (u32)func_020b71fc;
    *(u32 *)(puVar3 + 0x10) = (u32)func_020b71a8;
    return puVar3;
}
