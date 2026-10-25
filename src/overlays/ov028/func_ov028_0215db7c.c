#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern u8 func_ov028_0215d414[];
extern s32 func_020d6268(void *a, s16 *b);

void func_ov028_0215db7c(void)
{
    s16 buf;
    if (*(s16 *)(data_ov028_0215df90 + 0x2c) != 0 &&
        *(s16 *)(data_ov028_0215df90 + 0x2c) == 1 &&
        func_020d6268(func_ov028_0215d414, &buf) != 0) {
        *(s32 *)(data_ov028_0215df90 + 0x1c) = 3;
    }
    *(s16 *)(data_ov028_0215df90 + 0x2c) = 0;
}
