#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;

void func_02022b7c(u8 *p);
s32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, s32 a);
s32 func_0202c5d8(u8 *p, s32 a);
s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
void func_0203e908(u8 *p, s32 v);

static inline void SwapR(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021885e0(u8 *param_1)
{
    s32 bVar5;
    s32 bVar1;
    s32 iVar2;
    u32 uVar4;
    u32 one;
    u32 zero;
    u32 r;

    bVar5 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 60) {
        uVar4 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar4;
        if ((u16)(((u32)(u16)uVar4 * 30) >> 16) == 0) {
            bVar5 = 1;
        }
    }
    func_02022b7c(param_1);
    iVar2 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar2);
    one = 1;
    zero = 0;
    *(u16 *)(param_1 + 0x11c) = one;
    *(u16 *)(param_1 + 0x11e) = zero;
    if (iVar2 != 0) {
        SwapR(one, param_1 + 0xb9);
    } else {
        SwapR(zero, param_1 + 0xb9);
    }
    if (func_0202c5d8(param_1, 1) != 0) {
        bVar1 = 1;
        goto J;
    }
    bVar1 = (func_02029b7c(param_1, 1, 31, 0) != 0);
J:
    if (bVar1) {
        return;
    }
    if (bVar5 == 0) {
        return;
    }
    func_0203e908(param_1, 366);
}
