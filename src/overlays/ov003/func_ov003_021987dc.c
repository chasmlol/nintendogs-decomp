#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_02027c68(u8 *a, u32 b);
extern u32 func_020bd5e8(u8 *a, u32 b);
extern void func_0203e908(u8 *a, u32 b);

#define CHK(mask, val) do { if (func_020bd5e8(param_1, param_2) & (mask)) { func_0203e908(param_1, (val)); return 1; } } while (0)

s32 func_ov003_021987dc(u8 *param_1, u32 param_2)
{
    u32 iVar3, iVar4;
    u16 x;
    s32 bVar1;

    if (param_2 == 0) {
        return 0;
    }
    bVar1 = func_02027c68(param_1, 1);
    if (bVar1) {
        iVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = iVar3;
        x = (u16)((u32)(iVar3 << 16) >> 31);
        switch (x) {
        case 0:
            CHK(1, 0x3d6);
            break;
        case 1:
            CHK(2, 0x3d7);
            break;
        }
        CHK(1, 0x3d6);
        CHK(2, 0x3d7);
        goto TAIL;
    } else {
        iVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = iVar3;
        x = (u16)((u32)(iVar3 << 16) >> 31);
        switch (x) {
        case 0:
            CHK(4, 984);
            break;
        case 1:
            CHK(8, 0x3d9);
            break;
        }
        CHK(4, 984);
        CHK(8, 0x3d9);
        goto TAIL;
    }
TAIL:
    CHK(1, 0x3d6);
    CHK(2, 0x3d7);
    CHK(4, 984);
    CHK(8, 0x3d9);
    iVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar4;
    switch ((u16)((u32)(iVar4 << 16) >> 30)) {
    case 0:
        func_0203e908(param_1, 0x3d6);
        return 1;
    case 1:
        func_0203e908(param_1, 0x3d7);
        return 1;
    case 2:
        func_0203e908(param_1, 984);
        return 1;
    case 3:
        func_0203e908(param_1, 0x3d9);
        return 1;
    default:
        return 0;
    }
}
