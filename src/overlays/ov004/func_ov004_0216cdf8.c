#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern void func_02029290(u32 obj, u32 a, u32 b);
extern s8 func_02028100(u32 obj);

static inline u32 SwapByte(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

#define GP (*(s32 **)&data_0214f464)

void func_ov004_0216cdf8(u32 param_1, s32 param_2)
{
    switch (param_2) {
    case 1:
        func_02029290(param_1, 0x4d, 1);
        { SwapByte(param_2, (u8 *)param_1 + 0xb7); return; }
    case 2:
        if (func_02028100(param_1) == 0) {
            s32 *pp = GP;
            s32 iVar3 = *pp * 0x10dcd + 1;
            *pp = iVar3;
            func_02029290(param_1, 0x4e, (u8)(1 + (u16)((u32)(iVar3 * 0x10000) >> 31)));
        } else {
            func_02029290(param_1, 0x4e, 3);
        }
        { SwapByte(param_2, (u8 *)param_1 + 0xb7); return; }
    case 3:
        func_02029290(param_1, 0x4f, 1);
        { SwapByte(param_2, (u8 *)param_1 + 0xb7); return; }
    }
    return;
}
