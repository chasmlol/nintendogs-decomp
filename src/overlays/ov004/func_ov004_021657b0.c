#include "ctx.h"

extern s32 func_020f5220(void);
extern void func_020f3bdc(s32);
extern s32 func_0203567c(int);
extern void func_0202fd38(int);
extern void func_0201409c(int, s32);

void func_ov004_021657b0(int param_1)
{
    s32 flag;
    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (func_0203567c(param_1) != 0) {
        func_0202fd38(param_1);
        flag = 1;
    } else {
        flag = 0;
    }
    func_0201409c(param_1, flag);
}
