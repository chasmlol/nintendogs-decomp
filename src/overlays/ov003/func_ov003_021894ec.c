#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 v);
extern s32 func_0202c5d8(u8 *p, s32 v);
extern s32 func_02029b7c(u8 *p, s32 a, u32 b, int c);
extern s32 func_0202e29c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

u32 func_ov003_021894ec(u8 *param_1, s32 param_2, u32 param_3, s32 param_4)
{
    s32 iVar2;
    int bVar1;

    iVar2 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar2);
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (iVar2 != 0) {
        param_1[185] = 1;
    } else {
        param_1[185] = 0;
    }
    iVar2 = func_0202c5d8(param_1, param_2);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto test;
    }
    iVar2 = func_02029b7c(param_1, param_2, param_3, 0);
    bVar1 = (iVar2 != 0);
test:
    if (bVar1) {
        return 1;
    }
    if (param_4 == 0) {
        goto ret0;
    }
    iVar2 = func_0202e29c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, (s16)(param_2 + 0xec));
        return 1;
    }
    if (*(s8 *)(param_1 + 139) != 2) {
        goto other;
    }
    switch (param_2) {
    case 5:
        func_0203e908(param_1, 0x37c);
        goto ret0;
    case 6:
        func_0203e908(param_1, 0x37d);
        goto ret0;
    case 7:
        func_0203e908(param_1, 0x37e);
        goto ret0;
    case 8:
        func_0203e908(param_1, 0x37f);
        goto ret0;
    default:
        func_0203e908(param_1, 0x380);
        goto ret0;
    }
other:
    func_0203e908(param_1, (s16)(param_2 + 0xec));
    return 1;
ret0:
    return 0;
}
