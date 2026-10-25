#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
void func_02026bac(u8 *p);
void func_02025a84(u8 *p);
void func_020362ec(u8 *p, s16 b);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_0216e1f0(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0x208;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 152));
    func_02026bac(param_1);
    func_02025a84(param_1);
    func_020362ec(param_1, (s16)(*(s16 *)(data_02159444 + 0x7a) + 3));
}
