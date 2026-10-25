#include "ctx.h"

extern void func_02068a84(void);
extern u8 data_02150e44;

void func_02068988(void)
{
    ((void (*)(u32))func_02068a84)((u32)&data_02150e44);
}
