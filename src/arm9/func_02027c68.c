#include "ctx.h"

extern u8 *data_0214f464;
extern u8 data_0213b80c[];

BOOL func_02027c68(u8 *param_1, s16 param_2)
{
    u32 *cnt = *(u32 **)&data_0214f464;
    u32 v = *cnt * 0x10dcd + 1;
    u8 *addr;
    u8 b;
    *cnt = v;
    addr = (data_0213b80c + param_2 * 9) + *(s8 *)(param_1 + 141);
    b = addr[0];
    return (s32)b - 1 > (s32)((u32)(s32)(((v << 16) >> 30) << 16) >> 16);
}
