#include "ctx.h"
extern u8 data_0215be48[];
extern void func_020feff4(u8 *p);
extern s32 func_021178a8(u32 *p);
void func_020fee18(u8 *param_1)
{
    s32 iVar2;
    func_020feff4(param_1);
    iVar2 = func_021178a8((u32 *)(param_1 + 4));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1ce0) = 3;
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c0) = 3;
    }
    iVar2 = func_021178a8((u32 *)(param_1 + 0x40));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1ce0) = 4;
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c0) = 4;
    }
    iVar2 = func_021178a8((u32 *)(param_1 + 0x7c));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1ce0) = 5;
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c0) = 5;
    }
    iVar2 = func_021178a8((u32 *)(param_1 + 0xb8));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1ce0) = 1;
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c0) = 1;
    }
    iVar2 = func_021178a8((u32 *)(param_1 + 0xf4));
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)data_0215be48 + 0x1ce0) = 2;
        *(u32 *)(*(u8 **)data_0215be48 + 0x48c0) = 2;
    }
}
