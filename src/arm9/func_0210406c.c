#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_021178a8(u8 *p);

void func_0210406c(u8 *param_1)
{
    s32 iVar2;
    u8 *piVar1;

    iVar2 = func_021178a8(param_1 + 108);
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x48bc) = 1;
        return;
    }
    iVar2 = func_021178a8(param_1 + 168);
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x48bc) = 1;
        return;
    }
    iVar2 = func_021178a8(param_1 + 228);
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x48bc) = 4;
        *(u32 *)(*(u8 **)&data_0215be48 + 0x1d30) = *(u32 *)(*(u8 **)&data_0215be48 + 0xb8);
        return;
    }
    iVar2 = func_021178a8(param_1 + 288);
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x48bc) = 4;
        *(u32 *)(*(u8 **)&data_0215be48 + 0x1d30) = *(u32 *)(*(u8 **)&data_0215be48 + 0xb8);
        return;
    }
    iVar2 = func_021178a8(param_1 + 348);
    if (iVar2 != 0) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x4858) = 0;
        *(u32 *)(*(u8 **)&data_0215be48 + 0x48bc) = 3;
    }
}
