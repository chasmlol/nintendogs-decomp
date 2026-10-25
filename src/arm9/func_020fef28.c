#include "ctx.h"

extern void func_02117ac8(u8 *p, u32 a);
extern void func_02112c20(u32 a, u32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);

void func_020fef28(u8 *param_1)
{
    u32 uVar2;
    u8 *puVar1;

    func_02117ac8(param_1 + 0x130, 1);
    func_02117ac8(param_1 + 0x150, 1);
    func_02117ac8(param_1 + 0x170, 1);
    func_02117ac8(param_1 + 0x190, 1);
    func_02117ac8(param_1 + 0x1b0, 1);
    puVar1 = *(u8 **)(param_1 + 0x1d0);
    if (puVar1 != 0) {
        uVar2 = *(u32 *)(param_1 + 0x1d4);
        func_02112c20(2, *(u16 *)puVar1, -32, -32, uVar2, uVar2, 0, 31, 2);
        func_02112c20(2, *(u16 *)(puVar1 + 2), -32, -32, uVar2, uVar2, 0, 30, 2);
    }
}
