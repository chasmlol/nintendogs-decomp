#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern void func_ov007_0215d828(void);
u32 func_020d6978(u32 a, u32 *b);

u32 func_ov007_0215dc90(void)
{
    u32 local;
    u32 uVar1;
    if (*(u32 *)(data_ov007_02160d80 + 0x28) != 1) {
        goto ret0;
    }
    *(u32 *)(data_ov007_02160d80 + 0x28) = 4;
    uVar1 = (u32)func_ov007_0215d828;
    if (func_020d6978(uVar1, &local) == 0) {
        return 0;
    }
    *(u32 *)(data_ov007_02160d80 + 0x2c) = 0;
    return 1;
ret0:
    return 0;
}
