#include "ctx.h"

extern void func_02069f4c(u32 reg, s32 value);

void func_02099c30(u8 *param_1)
{
    if (*(u16 *)(param_1 + 0x78) & 1) {
        *(vu32 *)0x04000000 = *(vu32 *)0x04000000 & 0xffff1fff;
        *(vu32 *)0x0400001c = 0x01ff0000 & ((s32)*(s16 *)(param_1 + 0x92) << 16);
    }
    if (*(u16 *)(param_1 + 0x78) & 2) {
        *(vu32 *)0x04001000 = *(vu32 *)0x04001000 & 0xffff1fff;
        *(vu32 *)0x04001010 = 0x01ff0000 & ((s32)*(s16 *)(param_1 + 0x92) << 16);
    }
    if (*(s16 *)(param_1 + 0x74) != 0) {
        func_02069f4c(0x04000050, *(s16 *)(param_1 + 0x90));
        return;
    }
    func_02069f4c(0x04001050, *(s16 *)(param_1 + 0x90));
}
