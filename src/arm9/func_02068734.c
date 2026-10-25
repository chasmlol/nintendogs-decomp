#include "ctx.h"

extern u8 data_02150e30[];
extern void func_02068824(u32 a);

void func_02068734(void)
{
    void (*fp)(u32) = func_02068824;
    fp(*(u16 *)(data_02150e30 + 0x16));
}
