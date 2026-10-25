#include "ctx.h"

extern u8 data_02150e46;
extern void func_02068a84(void);

void func_02068960(void)
{
    vu32 *r;
    r = (vu32 *)0x04001000;
    *r = *r & 0xbfffffff;
    ((void (*)(u32))func_02068a84)((u32)&data_02150e46);
}
