#include "ctx.h"

extern u32 data_02159198;
extern u32 data_021591a0;
extern void func_02072fe4(u32, u32, u32);

void func_0209dfe4(void)
{
    u8 *g = (u8 *)&data_02159198;
    u32 arg = (u32)&data_021591a0;
    if (*(u32 *)(g + 0x44) == 0) {
        func_02072fe4(arg, 0x30, 7);
        *(u32 *)(g + 0x40) = 0;
        *(u32 *)(g + 0x44) = 1;
        *(u32 *)(g + 0x4c) = 0;
        *(u16 *)(g + 0x38) = 0;
    }
    *(u32 *)(g + 0x48) = 1;
}
