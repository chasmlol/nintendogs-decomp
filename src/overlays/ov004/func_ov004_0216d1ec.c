#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u32 *data_0214f464;
extern void func_02026c0c(u8 *p);
extern void func_02025ae0(u8 *p);
extern void func_02028184(u8 *p);
extern void func_020fbb68(u32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_0216d1ec(u8 *param_1)
{
    s32 iVar1;
    u32 r4;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0x152;
    SwapByte(1, (vu8 *)(param_1 + 152));
    func_02026c0c(param_1);
    func_02025ae0(param_1);
    iVar1 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar1 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar1) {
        r4 = 0;
    } else {
        r4 = *(u32 *)(data_02159468 + iVar1 * 4 + 4);
    }
    if (r4 != 0) {
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        func_02028184(param_1);
        *(u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x70) = (u16)((u32)(u16)v * 20 >> 16) + 117;
        func_020fbb68(r4);
    }
}
