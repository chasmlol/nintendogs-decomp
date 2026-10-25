#include "ctx.h"

extern u8 *data_02159068;

void func_020d55bc(void);

void func_0209a5d8(u32 param_1, u32 param_2)
{
    func_020d55bc();
    *(u16 *)data_02159068 = 1;
    *(u16 *)(data_02159068 + 6) = 1;
    *(u32 *)(data_02159068 + 0xc) = param_1;
    *(u32 *)(data_02159068 + 0x10) = param_2;
    *(u16 *)(data_02159068 + 2) = 1;
}
