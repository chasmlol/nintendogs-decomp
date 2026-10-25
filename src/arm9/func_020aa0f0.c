#include "ctx.h"

extern u32 data_02159438;
extern u8 *func_020bc3c4(void);

void func_020aa0f0(void)
{
    u8 *p;
    *(s16 *)(*(u8 **)&data_02159438 + 8) = -1;
    p = func_020bc3c4();
    *(u16 *)(p + 0x26) = *(u16 *)(p + 0x26) ^ 1;
}
