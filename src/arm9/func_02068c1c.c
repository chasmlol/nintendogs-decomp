#include "ctx.h"

extern u8 data_02150e40;
extern void func_02068c64(u8 *p);

void func_02068c1c(void)
{
    u32 *r = (u32 *)0x04000000;
    *r = *r & 0x7fffffff;
    func_02068c64(&data_02150e40);
}
