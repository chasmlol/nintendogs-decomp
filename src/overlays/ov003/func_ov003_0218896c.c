#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 a);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_0202c5d8(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0218896c(u8 *param_1)
{
    s32 flag;
    s32 iVar2;
    s32 iVar3;
    u32 one;
    u32 zero;

    iVar2 = func_02035770(param_1, 7);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    one = 1;
    zero = 0;
    *(u16 *)(param_1 + 0x11c) = one;
    *(u16 *)(param_1 + 0x11e) = zero;
    if (iVar3 != 0) {
        SwapByte(one, (vu8 *)(param_1 + 0xb9));
    } else {
        SwapByte(zero, (vu8 *)(param_1 + 0xb9));
    }
    if (func_0202c5d8(param_1, 3) != 0) {
        flag = 1;
        goto test;
    }
    flag = (func_02029b7c(param_1, 3, 0x1f, 0) != 0);
test:
    if (flag == 0) {
        if (iVar2 != 0) {
            func_0203e908(param_1, 0x16a);
        }
    }
}
