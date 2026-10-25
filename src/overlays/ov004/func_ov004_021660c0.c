#include "ctx.h"

extern s32 *data_0214f464;
extern s32 func_020f5220(void);
extern void func_020f3bdc(s32);
extern s32 func_0203567c(int);
extern void func_0209f59c(int);
extern void func_0203e908(int, s32);

void func_ov004_021660c0(int param_1)
{
    s32 iVar2;
    u16 flag;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0209f59c(1);
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    flag = (u16)(((u32)(iVar2 << 16)) >> 31);
    *data_0214f464 = iVar2;
    switch (flag) {
    case 0:
        func_0203e908(param_1, 0x48d);
        break;
    case 1:
        func_0203e908(param_1, 0x48e);
        break;
    }
}
