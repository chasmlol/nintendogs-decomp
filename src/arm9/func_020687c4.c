#include "ctx.h"

extern void func_02068824(u32 a);
extern u8 data_02150e30[];

void func_020687c4(void)
{
    void (*fp)(u32) = func_02068824;
    fp(*(u16 *)(data_02150e30 + 0x10));
}
