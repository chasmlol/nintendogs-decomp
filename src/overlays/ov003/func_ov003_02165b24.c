#include "ctx.h"

extern u32 data_0214f464;
extern void func_02026494(u8 *);
extern void func_02025860(u8 *);
extern void func_02034198(u8 *);

void func_ov003_02165b24(u8 *param_1)
{
    u32 *st = (u32 *)data_0214f464;
    s32 iVar1;
    u16 q;
    iVar1 = *st * 0x10dcd + 1;
    *st = (u32)iVar1;
    q = (u16)((u32)(iVar1 * 0x10000) >> 30);
    *(u16 *)(param_1 + 0x152) = (u16)(q + 155);
    func_02026494(param_1);
    func_02025860(param_1);
    func_02034198(param_1);
}
