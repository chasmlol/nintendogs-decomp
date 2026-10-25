#include "ctx.h"

extern void func_02068c64(void);
extern u8 data_02150e44;

void func_02068bb8(void)
{
    ((void (*)(u32))func_02068c64)((u32)&data_02150e44);
}
