#include "ctx.h"

extern u32 data_02159074;
extern void func_020e1808(void);
extern void func_0209e524(void);

void func_0209aa84(void)
{
    func_020e1808();
    func_0209e524();
    *(u32 *)((u8 *)&data_02159074 + 0x2c) = 0;
}
