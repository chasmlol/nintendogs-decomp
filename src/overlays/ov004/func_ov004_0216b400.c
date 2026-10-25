#include "ctx.h"

extern u32 *data_0214f464;
extern u32 func_0202fcd4(int);
extern void func_ov004_0216b628(int, u32);
extern int func_ov004_0216be28(int, u32);
extern int func_02044ce4(int);
extern void func_0203e908(int, int);

void func_ov004_0216b400(int param_1)
{
    u32 uVar2;
    u32 seed;
    u16 uVar4;
    u16 t;

    uVar2 = func_0202fcd4(param_1);
    func_ov004_0216b628(param_1, uVar2);
    if (func_ov004_0216be28(param_1, uVar2) != 0) {
        return;
    }
    seed = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = seed;
    t = (u16)((((u32)(u16)seed) * 200) >> 16);
    if (t == 0) {
        if (*(s32 *)(param_1 + 0x488) >= 2) {
            seed = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = seed;
            uVar4 = (u16)((((u32)(u16)seed) * 3) >> 16);
            switch (uVar4) {
            case 0:
                func_0203e908(param_1, 0x4cc);
                break;
            case 1:
                func_0203e908(param_1, 0x4cd);
                break;
            case 2:
                func_0203e908(param_1, 0x4ce);
                break;
            }
            return;
        }
        seed = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = seed;
        uVar4 = (u16)(((u32)(seed << 16)) >> 31);
        switch (uVar4) {
        case 0:
            func_0203e908(param_1, 0x4cd);
            break;
        case 1:
            func_0203e908(param_1, 0x4ce);
            break;
        }
        return;
    }
    if ((*(u8 *)(param_1 + 0xb0) & ~2u) != 0) {
        return;
    }
    if (func_02044ce4(*(s8 *)(param_1 + 0x88)) != 0) {
        return;
    }
    seed = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = seed;
    t = (u16)((((u32)(u16)seed) * 200) >> 16);
    if (t == 0) {
        func_0203e908(param_1, 0x4a2);
    }
}
