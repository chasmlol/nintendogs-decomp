#include "ctx.h"
extern u8 data_0215be48[];
extern s32 func_021178a8(u32 *p);
extern void func_02117ac8(u32 *p, u32 a);
void func_02114224(u8 *param_1)
{
    s32 iVar1;
    iVar1 = func_021178a8((u32 *)(param_1 + 8));
    if (iVar1 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1d70) = 0;
    }
    iVar1 = func_021178a8((u32 *)(param_1 + 0x44));
    if (iVar1 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1d70) = 1;
    }
    iVar1 = func_021178a8((u32 *)(param_1 + 0x80));
    if (iVar1 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1d70) = 2;
    }
    func_02117ac8((u32 *)(param_1 + 0xbc), 0);
    func_02117ac8((u32 *)(param_1 + 0xdc), 0);
    func_02117ac8((u32 *)(param_1 + 0xfc), 0);
}
