#include "ctx.h"

void func_02089b94(u32 a, u32 b, u32 c, u32 d);
void func_02089998(u32 a, u32 b, u32 c);
void func_02070344(u8 *p);
u32 func_02089ecc(void);

void func_02070494(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 iVar2;
    u32 uVar1;

    iVar2 = *(u32 *)(param_1 + 4);
    func_02089b94(*(u8 *)(param_1 + 0x3c), param_2, param_3, param_4);
    iVar2 = *(u32 *)(iVar2 + 0x1c);
    if (iVar2 != 0) {
        func_02089998(*(u8 *)(param_1 + 0x3c), 0xffff, iVar2);
    }
    func_02070344(param_1);
    uVar1 = func_02089ecc();
    *(u32 *)(param_1 + 0x30) = uVar1;
    *(u8 *)(param_1 + 0x2f) = 1;
    *(u8 *)(param_1 + 0x2c) = 1;
}
