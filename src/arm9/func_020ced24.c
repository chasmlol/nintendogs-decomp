#include "ctx.h"
extern u8 data_02142e4c[];
extern void func_020d1224(u8 *p, u32 v);
extern void func_020d1214(u8 *p);
void func_020ced24(u8 *param_1)
{
    *(u16 *)param_1 = 2;
    func_020d1224(param_1 + 44, *(u32 *)(param_1 + 0x68));
    func_020d1214(param_1 + 44);
    *(u32 *)(param_1 + 0x6c) = *(u32 *)data_02142e4c;
}
