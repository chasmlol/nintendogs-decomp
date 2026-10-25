#include "ctx.h"

extern u16 data_ov004_0217025c[];
extern u32 *data_0214f464;
extern int func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(int);
extern void func_020bbc58(void);
extern int func_ov004_0216c23c(int);
extern void func_0203e908(int, int);

int func_ov004_0216c088(int param_1)
{
    u16 local[5];
    int iVar3;
    u32 x;
    u16 uVar1;

    local[0] = data_ov004_0217025c[0];
    local[1] = data_ov004_0217025c[1];
    local[2] = data_ov004_0217025c[2];
    local[3] = data_ov004_0217025c[3];
    local[4] = data_ov004_0217025c[4];
    iVar3 = func_ov004_0216ea3c();
    if (iVar3 != 0) {
        func_ov004_0216e554(1);
    }
    func_020bbc58();
    uVar1 = local[*(s8 *)(param_1 + 0x8e)];
    x = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = x;
    if ((u16)(((u32)uVar1 * (u16)x) >> 16) == 0) {
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        switch ((u16)(((u32)(u16)x * 5) >> 16)) {
        case 0:
            func_0203e908(param_1, 0x4ac);
            return 1;
        case 1:
            func_0203e908(param_1, 0x4ad);
            return 1;
        case 2:
            func_0203e908(param_1, 0x4ae);
            return 1;
        case 3:
            func_0203e908(param_1, 0x4af);
            return 1;
        case 4:
            func_0203e908(param_1, 1200);
            return 1;
        default:
            return 0;
        }
    } else {
        return func_ov004_0216c23c(param_1);
    }
}
