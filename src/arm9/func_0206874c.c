#include "ctx.h"

extern u8 data_02150e30;
extern void func_02068824(void);

void func_0206874c(void)
{
    ((void (*)(u32))func_02068824)(*(u16 *)(&data_02150e30 + 0x14));
}
