#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02035770(u8 *p, u32 n);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 v);
extern s32 func_0202c5d8(u8 *p, u32 n);
extern s32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, s32 v);

static inline void SwapR(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02188a28(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    BOOL bVar1;
    u16 one;
    u16 zero;

    iVar2 = func_02035770(param_1, 7);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    one = 1;
    zero = 0;
    *(u16 *)(param_1 + 0x11c) = one;
    *(u16 *)(param_1 + 0x11e) = zero;
    if (iVar3 != 0) {
        SwapR(one, (vu8 *)(param_1 + 185));
    } else {
        SwapR(zero, (vu8 *)(param_1 + 185));
    }
    iVar3 = func_0202c5d8(param_1, 3);
    if (iVar3 != 0) {
        bVar1 = TRUE;
    } else {
        iVar3 = func_02029b7c(param_1, 3, 31, 0);
        bVar1 = (iVar3 != 0);
    }
    if (!bVar1) {
        if (iVar2 != 0) {
            func_0203e908(param_1, 0x169);
        }
    }
}
