#include "ctx.h"

void func_02080148(u32 a, u32 b);
void func_020800d4(u32 a, u32 b);
void func_0206c924(void *p, u32 v, u32 n);

void func_02088db8(u8 *param_1)
{
    u32 uVar3 = *(u32 *)(param_1 + 4);
    u32 iVar2 = *(u32 *)(param_1 + 8);
    u32 iVar1 = iVar2 + *(u32 *)(param_1 + 0xc);

    func_02080148(uVar3, iVar1);
    func_020800d4(uVar3, iVar1);
    func_0206c924((void *)(uVar3 + iVar2), 0, iVar1 - iVar2);
}
