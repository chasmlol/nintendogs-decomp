#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_021178a8(u8 *p);

void func_02116714(u8 *param_1)
{
    u8 *q;
    if (func_021178a8(param_1 + 0x18) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 3;
    }
    if (func_021178a8(param_1 + 0x54) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 2;
    }
    if (func_021178a8(param_1 + 0x90) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 1;
    }
    func_021178a8(param_1 + 0xcc);
    func_021178a8(param_1 + 0x108);
    func_021178a8(param_1 + 0x144);
    if (func_021178a8(param_1 + 0x180) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 4;
    }
    if (func_021178a8(param_1 + 0x1bc) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 5;
    }
    if (func_021178a8(param_1 + 0x1f8) != 0) {
        q = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(q + 0xd80) = 6;
    }
}
