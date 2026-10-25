#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u32 p);
extern void func_02025804(u32 p);
extern void func_02034198(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_02165ec4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x93;
    SwapByte(0x13, (vu8 *)(param_1 + 0x93));
    func_02026494((u32)param_1);
    func_02025804((u32)param_1);
    func_02034198((u32)param_1);
}
