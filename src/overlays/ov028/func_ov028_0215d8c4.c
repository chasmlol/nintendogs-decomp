#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern void func_ov028_0215d904(void);

u32 func_ov028_0215d8c4(void)
{
    if (*(s32 *)(data_ov028_0215df90 + 0x1c) == 1) {
        func_ov028_0215d904();
        return 1;
    }
    return 0;
}
