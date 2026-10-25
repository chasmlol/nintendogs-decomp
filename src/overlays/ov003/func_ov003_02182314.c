#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f460;
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *a, u8 *b, s32 c);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern void func_0202f9b4(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_02182314(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 uVar5;

    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = FX_Mul(iVar3, iVar2);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 0x378, FX_Mul(uVar5, 0x1004));
    if (iVar2 != 0) goto L14c;
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = FX_Mul(iVar3, iVar2);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 900, FX_Mul(uVar5, 0x14d2));
    if (iVar2 != 0) goto L14c;
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = FX_Mul(iVar3, iVar2);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 0x348, FX_Mul(uVar5, 0x14d2));
    if (iVar2 == 0) goto L164;
L14c:
    *(u16 *)(param_1 + 0x11c) = 0;
    *(u16 *)(param_1 + 0x11e) = 1;
    goto after;
L164:
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
after:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapByte(1, param_1 + 0xb9);
    } else {
        SwapByte(0, param_1 + 0xb9);
    }
    iVar2 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar2);
    func_0202f9b4(param_1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xee);
    }
}
