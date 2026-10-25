#include "ctx.h"

extern u8 data_02150600[];

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207f554(u8 *p);

u32 func_020655c4(void)
{
    u32 g = (u32)data_02150600;
    u32 r5;
    r5 = func_02080b08();
    if ((*(u32 *)(g + 0x34) & 4) != 0) {
        u8 *q = (u8 *)(g + 212);
        do {
            func_0207f554(q);
        } while ((*(u32 *)(g + 0x34) & 4) != 0);
    }
    func_02080b1c(r5);
    return **(u32 **)g == 0;
}
