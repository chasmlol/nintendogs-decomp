#include "ctx.h"
extern u8 *func_020038b8(s32 *a, s32 b);
extern void func_020aaaf8(u8 *p);
extern void func_020b41fc(void);
extern void func_020b41a8(void);
u8 *func_020b4168(s32 *param_1)
{
    u8 *puVar3;
    u32 uVar1;
    u32 uVar2;
    puVar3 = func_020038b8(param_1, 0x20);
    func_020aaaf8(puVar3);
    uVar1 = (u32)func_020b41fc;
    *(u16 *)puVar3 = 11;
    uVar2 = (u32)func_020b41a8;
    *(u32 *)(puVar3 + 0x14) = uVar1;
    *(u32 *)(puVar3 + 0x10) = uVar2;
    return puVar3;
}
