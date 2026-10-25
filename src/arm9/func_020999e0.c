#include "ctx.h"

extern void func_02069f4c(int a, int b);

void func_020999e0(int param_1)
{
    s32 w;
    if ((*(u16 *)(param_1 + 0x78) & 1) != 0) {
        w = 0xc0 - *(s16 *)(param_1 + 0x92);
        *(vu16 *)0x04000040 = 0xff;
        *(vu16 *)0x04000044 = w & 0xff;
        *(vu32 *)0x0400001c = 0x01ff0000 & ((u32)*(s16 *)(param_1 + 0x92) << 16);
    }
    if ((*(u16 *)(param_1 + 0x78) & 2) != 0) {
        w = 0xc0 - *(s16 *)(param_1 + 0x92);
        *(vu16 *)0x04001040 = 0xff;
        *(vu16 *)0x04001044 = w & 0xff;
        *(vu32 *)0x04001010 = 0x01ff0000 & ((u32)*(s16 *)(param_1 + 0x92) << 16);
    }
    if (*(s16 *)(param_1 + 0x74) != 0) {
        func_02069f4c(0x04000050, (int)*(s16 *)(param_1 + 0x90));
        return;
    }
    func_02069f4c(0x04001050, (int)*(s16 *)(param_1 + 0x90));
}
