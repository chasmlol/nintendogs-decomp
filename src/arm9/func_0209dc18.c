#include "ctx.h"

extern u8 data_02159150[];
extern u8 data_02159154[];
extern u8 data_02159148[];
extern void func_02070b48(u32 a);

void func_0209dc18(void)
{
    u8 *p;
    func_02070b48((u32)data_02159150);
    func_02070b48((u32)data_02159154);
    p = data_02159148;
    *(s16 *)(p + 0) = -1;
    *(u16 *)(p + 2) = 0;
    *(s16 *)(p + 4) = -1;
    *(s16 *)(p + 6) = -1;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x14) = 0;
    *(u32 *)(p + 0x18) = 0;
    *(u32 *)(p + 0x1c) = 0;
    *(u32 *)(p + 0x24) = 0;
    *(u32 *)(p + 0x28) = 0;
    *(u32 *)(p + 0x2c) = 0;
}
