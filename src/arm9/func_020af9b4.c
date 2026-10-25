#include "ctx.h"

extern s32 func_02094724(void);

void func_020af9b4(u8 *param_1)
{
    s32 iVar2;
    u16 *puVar1 = (u16 *)0x04000304;
    *(s16 *)(param_1 + 0x24) = 2;
    *(s16 *)(param_1 + 0x26) = 0x1a;
    iVar2 = func_02094724();
    *(s16 *)(param_1 + 0x7c) = (s16)iVar2;
    *puVar1 = (u16)(*puVar1 & ~0x8000u);
}
