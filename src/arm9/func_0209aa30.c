#include "ctx.h"

extern u8 *data_02159070;
extern u8 data_02159074;

void func_0206c924(void *p, u32 v, u32 n);
void func_020e1d18(void);

void func_0209aa30(void)
{
    u8 *p = data_02159070;

    func_0206c924(p, 0, 0x4e30);
    *(u16 *)(p + 0x4e30) = 0;
    *(u32 *)((u8 *)&data_02159074 + 0x28) = 0;
    *(u32 *)((u8 *)&data_02159074 + 0x2c) = 0;
    *(u32 *)((u8 *)&data_02159074 + 0x34) = 1;
    func_020e1d18();
}
