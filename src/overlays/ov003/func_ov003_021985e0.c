#include "ctx.h"

extern u32 *data_0214f464;

extern int func_02027c68(u8 *p, int a);
extern u32 func_020bd5e8(u8 *p, u32 a);
extern void func_0203e908(u8 *p, int a);

u32 func_ov003_021985e0(u8 *param_1, u32 param_2)
{
    u32 iVar3;
    u32 uVar4;
    u32 bit;

    if (param_2 == 0) {
        return 0;
    }
    if (func_02027c68(param_1, 1) != 0) {
        iVar3 = *data_0214f464 * 0x10dcd + 1;
        bit = (u16)((iVar3 << 16) >> 31);
        *data_0214f464 = iVar3;
        switch (bit) {
        case 0:
            uVar4 = func_020bd5e8(param_1, param_2);
            if ((uVar4 & 1) != 0) {
                func_0203e908(param_1, 0x3d6);
                return 1;
            }
            break;
        case 1:
            uVar4 = func_020bd5e8(param_1, param_2);
            if ((uVar4 & 2) != 0) {
                func_0203e908(param_1, 0x3d7);
                return 1;
            }
        }
    } else {
        uVar4 = func_020bd5e8(param_1, param_2);
        if ((uVar4 & 4) != 0) {
            func_0203e908(param_1, 0x3d8);
            return 1;
        }
    }
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar3;
    uVar4 = (u16)((((u16)iVar3) * 3u) >> 16);
    switch (uVar4) {
    case 0:
        uVar4 = func_020bd5e8(param_1, param_2);
        if ((uVar4 & 1) != 0) {
            func_0203e908(param_1, 0x3d6);
            return 1;
        }
        break;
    case 1:
        uVar4 = func_020bd5e8(param_1, param_2);
        if ((uVar4 & 2) != 0) {
            func_0203e908(param_1, 0x3d7);
            return 1;
        }
        break;
    case 2:
        uVar4 = func_020bd5e8(param_1, param_2);
        if ((uVar4 & 4) != 0) {
            func_0203e908(param_1, 0x3d8);
            return 1;
        }
    }
    return 0;
}
