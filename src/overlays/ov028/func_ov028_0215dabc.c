#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern void func_ov028_0215d5b4(void);
extern u32 func_020d671c(u32 a, u32 *b);

u32 func_ov028_0215dabc(void)
{
    u32 buf;
    u8 *p = data_ov028_0215df90;
    if (*(s32 *)(p + 0x1c) == 1) {
        *(u32 *)(p + 0x1c) = 0;
        return func_020d671c((u32)func_ov028_0215d5b4, &buf);
    }
    return 0;
}
