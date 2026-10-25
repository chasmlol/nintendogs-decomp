#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern void func_ov007_0215d4e4(void);
extern void func_020d6978(u32 a, void *b);

u32 func_ov007_0215dc24(void)
{
    u32 buf;
    u8 *p;
    p = data_ov007_02160d80;
    if (*(u32 *)(p + 0x28) == 1) {
        *(u32 *)(p + 0x48) = 0;
        *(u32 *)(data_ov007_02160d80 + 0x2c) = 3;
        *(u32 *)(data_ov007_02160d80 + 0x28) = 4;
        func_020d6978((u32)func_ov007_0215d4e4, &buf);
        return 1;
    }
    return 0;
}
