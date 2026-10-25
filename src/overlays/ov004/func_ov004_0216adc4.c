#include "ctx.h"

extern u32 *data_0214f464;
extern u32 func_0202fcd4(void);
extern int func_ov004_0216afec(int, int);
extern int func_ov004_0216be28(int, int);
extern int func_02044ce4(int);
extern void func_0203e908(int, int);

void func_ov004_0216adc4(int param_1)
{
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 x;

    uVar2 = func_0202fcd4();
    func_ov004_0216afec(param_1, uVar2);
    iVar3 = func_ov004_0216be28(param_1, uVar2);
    if (iVar3 != 0) {
        return;
    }
    x = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = x;
    if ((u16)((u32)(u16)x * 200 >> 16) == 0) {
        if (*(s32 *)(param_1 + 0x488) >= 2) {
            x = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = x;
            switch ((u16)((u32)(u16)x * 3 >> 16)) {
            case 0:
                func_0203e908(param_1, 0x4cc);
                return;
            case 1:
                func_0203e908(param_1, 0x4cd);
                return;
            case 2:
                func_0203e908(param_1, 0x4ce);
                return;
            }
            return;
        }
        x = *data_0214f464 * 0x10dcd + 1;
        {
            u16 bit = (u16)((x << 16) >> 31);
            *data_0214f464 = x;
            switch (bit) {
            case 0:
                func_0203e908(param_1, 0x4cd);
                return;
            case 1:
                func_0203e908(param_1, 0x4ce);
                return;
            }
        }
        return;
    }
    if ((*(u8 *)(param_1 + 0xb0) & ~2) != 0) {
        return;
    }
    iVar4 = func_02044ce4((s8)*(s8 *)(param_1 + 0x88));
    if (iVar4 != 0) {
        return;
    }
    x = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = x;
    if ((u16)((u32)(u16)x * 200 >> 16) == 0) {
        func_0203e908(param_1, 0x4a2);
        return;
    }
}
