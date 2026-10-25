#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02164adc(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x12;
    SwapByte(5, (vu8 *)(param_1 + 147));
    func_0202675c(param_1);
    func_02025bb0(param_1);
    switch (*(s16 *)(param_1 + 0xee)) {
    case 0x39c:
    case 0x39e:
    case 0x3a0:
    case 0x3a2:
        SwapByte(7, (vu8 *)(param_1 + 152));
        break;
    case 0x39d:
    case 0x39f:
    case 0x3a1:
    case 0x3a3:
        SwapByte(8, (vu8 *)(param_1 + 152));
        break;
    default:
        if (*(s8 *)(param_1 + 0x96) == 1) {
            SwapByte(7, (vu8 *)(param_1 + 152));
        } else {
            SwapByte(8, (vu8 *)(param_1 + 152));
        }
        break;
    }
    if (*(volatile s8 *)(param_1 + 152) == 7) {
        func_02023654(param_1, 0x23, 3);
        return;
    }
    func_02023654(param_1, 0x23, 4);
}
