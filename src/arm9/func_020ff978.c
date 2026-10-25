#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_02121084(u8 *p);

#define REG16(a) (*(vu16 *)(a))
#define REG32(a) (*(vu32 *)(a))

void func_020ff978(u8 *param_1)
{
    s32 iVar6;
    iVar6 = func_02121084(param_1 + 4);
    iVar6 = -0x20 - (iVar6 % 72);
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xac) == 3) {
        iVar6 = 0;
    }
    REG32(0x04001018) = 0x01ff0000 & (iVar6 << 16);
    if (*(u32 *)(param_1 + 0x948) != 0) {
        REG16(0x0400100e) = (u16)((REG16(0x0400100e) & 0x43) | 0x704);
        REG16(0x0400100e) = (u16)((REG16(0x0400100e) & ~3u) | 1);
        *(u32 *)(param_1 + 0x948) = 0;
    }
    REG32(0x0400101c) = (-*(s32 *)(param_1 + 0x940)) & 0x1ff;
    switch (*(u32 *)(param_1 + 0x94c)) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    case 4:
    case 5:
    case 6:
        REG16(0x04001048) = (u16)((REG16(0x04001048) & ~63u) | 0x18);
        REG16(0x0400104a) = (u16)((REG16(0x0400104a) & ~63u) | 0x17);
        REG16(0x04001040) = (u16)((*(s32 *)(param_1 + 0x940) + 0xff) & 0xff);
        REG16(0x04001044) = 0x20b0;
        REG32(0x04001000) = (REG32(0x04001000) & ~0xe000u) | 0x2000;
        return;
    case 7:
        REG32(0x04001000) = REG32(0x04001000) & ~0xe000u;
        break;
    default:
        break;
    }
}
