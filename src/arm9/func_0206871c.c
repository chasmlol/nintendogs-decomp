#include "ctx.h"

extern void func_02068824(void);
extern u8 data_02150e30;

void func_0206871c(void)
{
    void (*fp)(u32) = (void (*)(u32))func_02068824;
    fp(*(u16 *)(&data_02150e30 + 0x18));
}
