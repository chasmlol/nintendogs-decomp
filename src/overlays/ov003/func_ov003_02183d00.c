#pragma avoid_byte strb
#include "ctx.h"

extern void *data_0214f460;

extern void func_02024ff0(u8 *a, u32 b);
extern s32 func_02028130(u8 *a);
extern s32 func_020aaf38(void *a, void *b, s32 c);
extern s32 func_0202dddc(u8 *a);
extern void func_ov003_0218bc08(u8 *a, s32 b);
extern void func_0202f9b4(u8 *a);
extern void func_0202f8c8(u8 *a);
extern void func_0202f7d8(u8 *a);
extern void func_0202f6ec(u8 *a);
extern void func_0202f5fc(u8 *a);
extern s32 func_0203567c(u8 *a);
extern void func_0203e908(u8 *a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

#define FXM(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))

void func_ov003_02183d00(u8 *param_1, u32 param_2, u16 param_3, u32 param_4)
{
    s32 iVar2, iVar3;

    func_02024ff0(param_1, param_4);
    iVar3 = func_02028130(param_1);
    iVar2 = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 0x378, FXM(FXM(iVar2, iVar3), 0x1004));
    if (iVar2 != 0) goto FAIL;
    iVar3 = func_02028130(param_1);
    iVar2 = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 900, FXM(FXM(iVar2, iVar3), 0x14d2));
    if (iVar2 != 0) goto FAIL;
    iVar3 = func_02028130(param_1);
    iVar2 = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 0x348, FXM(FXM(iVar2, iVar3), 0x14d2));
    if (iVar2 == 0) goto SUCC;
FAIL:
    *(s16 *)(param_1 + 0x11c) = 0;
    *(s16 *)(param_1 + 0x11e) = 1;
    goto LAB;
SUCC:
    *(s16 *)(param_1 + 0x11c) = 1;
    *(s16 *)(param_1 + 0x11e) = 0;
LAB:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapByte(1, (vu8 *)(param_1 + 0xb9));
    } else {
        SwapByte(0, (vu8 *)(param_1 + 0xb9));
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
