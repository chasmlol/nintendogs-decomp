#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201e180(u8 *param_1)
{
    s32 iVar1;

    *(u16 *)(param_1 + 0x152) = 0x16f;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026bac(param_1);
    func_02025548(param_1);
    iVar1 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar1 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar1) {
        iVar1 = 0;
    } else {
        iVar1 = *(s32 *)(data_02159468 + iVar1 * 4 + 4);
    }
    if (iVar1 != 0) {
        if (*(s8 *)(param_1 + 0x88) == *(s16 *)(iVar1 + 0x98)) {
            *(u16 *)(param_1 + 0x156) = 1;
        }
        return;
    }
}
