#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_0214f460;

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

extern s32 func_02024d40(u32, s32, s32, s32);
extern s32 func_02028130(u32);
extern s32 func_020aaf38(u32, s32 *, s32);
extern s32 func_0202dddc(u32);
extern void func_ov003_0218bc08(u32, s32);
extern void func_0202f9b4(u32);
extern void func_0202f8c8(u32);
extern void func_0202f7d8(u32);
extern void func_0202f6ec(u32);
extern void func_0202f5fc(u32);
extern s32 func_0203567c(u32);
extern void func_0203e908(u32, u32);

void func_ov003_0218381c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s16 param_5,
                         s32 param_6, s16 param_7, s16 param_8, s32 param_9)
{
    s32 iVar2;
    s32 iVar3;
    s32 uVar4;

    iVar2 = func_02024d40(param_1, param_4, (s32)param_5, param_6);
    if (iVar2 == 0) {
        func_02024d40(param_1, (s32)param_7, (s32)param_8, param_9);
    }
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x378), FX_Mul(FX_Mul(iVar3, iVar2), 0x1004));
    if (iVar2 == 0) {
        iVar2 = func_02028130(param_1);
        iVar3 = func_02028130(param_1);
        iVar2 = func_020aaf38(data_0214f460, (s32 *)(param_1 + 900), FX_Mul(FX_Mul(iVar3, iVar2), 0x14d2));
        if (iVar2 == 0) {
            iVar2 = func_02028130(param_1);
            iVar3 = func_02028130(param_1);
            iVar2 = func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x348), FX_Mul(FX_Mul(iVar3, iVar2), 0x14d2));
            if (iVar2 == 0) {
                goto succ;
            }
        }
    }
    *(u16 *)((u8 *)param_1 + 0x11c) = 0;
    *(u16 *)((u8 *)param_1 + 0x11e) = 1;
    goto done;
succ:
    *(u16 *)((u8 *)param_1 + 0x11c) = 1;
    *(u16 *)((u8 *)param_1 + 0x11e) = 0;
done:
    if (*(u16 *)((u8 *)param_1 + 0x11c) == 0) {
        SwapByte(1, (vu8 *)((u8 *)param_1 + 0xb9));
    } else {
        SwapByte(0, (vu8 *)((u8 *)param_1 + 0xb9));
    }
    iVar2 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar2);
    switch (param_2) {
    case 0:
        break;
    case 1:
        func_0202f9b4(param_1);
        break;
    case 2:
        func_0202f8c8(param_1);
        break;
    case 3:
        func_0202f7d8(param_1);
        break;
    case 4:
        func_0202f6ec(param_1);
        break;
    case 5:
        func_0202f5fc(param_1);
        break;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, param_3);
}
