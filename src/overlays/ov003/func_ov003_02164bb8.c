#pragma avoid_byte strb
#include "ctx.h"
extern void func_020266f8(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
static inline void SwapB(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}
void func_ov003_02164bb8(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x11;
    SwapB(5, param_1 + 0x93);
    func_020266f8(param_1);
    func_02025bb0(param_1);
    switch (*(s16 *)(param_1 + 0xee)) {
    case 0x39c:
    case 0x39e:
    case 0x3a0:
    case 0x3a2:
        SwapB(7, param_1 + 0x98);
        break;
    case 0x39d:
    case 0x39f:
    case 0x3a1:
    case 0x3a3:
        SwapB(8, param_1 + 0x98);
        break;
    default:
        if (*(s8 *)(param_1 + 0x96) == 1) {
            SwapB(7, param_1 + 0x98);
        } else {
            SwapB(8, param_1 + 0x98);
        }
        break;
    }
    if (*(s8 *)(param_1 + 0x98) == 7) {
        func_02023654(param_1, 0x23, 1);
        return;
    }
    func_02023654(param_1, 0x23, 2);
}
