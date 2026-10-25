#include "ctx.h"

extern s32 func_0206cdb8(u32 a, u32 b, u32 c);

u32 func_02001c98(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar1;

    iVar1 = func_0206cdb8(9, param_4 | 0x02004100, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_1 >> 16) | 0x10000, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_1 & 0xffff) | 0x20000, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_2 >> 16) | 0x30000, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_2 & 0xffff) | 0x40000, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_3 >> 16) | 0x50000, 0);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = func_0206cdb8(9, (param_3 & 0xffff) | 0x01060000, 0);
    return iVar1 >= 0;
}
