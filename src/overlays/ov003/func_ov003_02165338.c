#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

static inline u32 SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

void func_ov003_02165338(u8 *param_1)
{
    *(u16 *)((u32)((u8 *)param_1 + 256) + 82) = 0x144;
    SwapByte(5, (vu8 *)(param_1 + 147));
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_02023654(param_1, 37, 1);
}
