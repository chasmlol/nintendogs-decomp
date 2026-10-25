#include "ctx.h"

extern u32 func_02002ab0(u32 a, u32 b, u32 c);

u32 func_0200280c(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 uVar2 = 0;
    if (param_1 == 0) {
        if (param_2 == 1) {
            uVar2 = 6;
        }
        if (param_2 == 0) {
            uVar2 = 7;
        }
    } else if (param_1 == 1) {
        if (param_2 == 1) {
            uVar2 = 4;
        }
        if (param_2 == 0) {
            uVar2 = 5;
        }
    } else if (param_1 == 2) {
        if (param_2 == 1) {
            uVar2 = 8;
        }
        if (param_2 == 0) {
            uVar2 = 9;
        }
    }
    if (uVar2 == 0) {
        return 0xffff;
    }
    return func_02002ab0(uVar2, param_3, param_4);
}
