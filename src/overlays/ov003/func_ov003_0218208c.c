#pragma avoid_byte strb
#include "ctx.h"

extern void *data_0214f460;

extern s32 func_02028124(u8 *a);
extern s32 func_0202518c(u8 *a, u32 b, s32 c);
extern void func_0202508c(u8 *a, u32 b, u32 c, s32 d);
extern s32 func_02028130(u8 *a);
extern s32 func_020aaf38(void *a, void *b, s32 c);
extern s32 func_0202dddc(u8 *a);
extern void func_ov003_0218bc08(u8 *a, s32 b);
extern void func_0202f9b4(u8 *a);
extern s32 func_0203567c(u8 *a);
extern void func_0203e908(u8 *a, u32 b);

#define FXM(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))

void func_ov003_0218208c(u8 *param_1)
{
    s32 uVar5;
    s32 uVar2;
    s32 iVar3, iVar4;

    uVar2 = func_02028124(param_1);
    iVar3 = func_0202518c(param_1, 0x17, -FXM(uVar2, -249));
    if (0 == iVar3) {
        uVar2 = func_02028124(param_1);
        func_0202508c(param_1, 0x18, 0x2d, -FXM(uVar2, 74));
    }
    iVar3 = func_02028130(param_1);
    iVar4 = func_02028130(param_1);
    uVar5 = FXM(iVar4, iVar3);
    iVar3 = func_020aaf38(data_0214f460, param_1 + 0x378, FXM(uVar5, 0x1004));
    if (0 != iVar3) goto FAIL;
    iVar3 = func_02028130(param_1);
    iVar4 = func_02028130(param_1);
    uVar5 = FXM(iVar4, iVar3);
    iVar3 = func_020aaf38(data_0214f460, 900 + param_1, FXM(uVar5, 0x14d2));
    if (iVar3 != 0) goto FAIL;
    iVar3 = func_02028130(param_1);
    iVar4 = func_02028130(param_1);
    uVar5 = FXM(iVar4, iVar3);
    iVar3 = func_020aaf38(data_0214f460, param_1 + 0x348, FXM(uVar5, 0x14d2));
    if (iVar3 == 0) goto SUCC;
FAIL:
    *(s16 *)(0x11c + param_1) = 0;
    *(s16 *)(param_1 + 0x11e) = 1;
    goto LAB;
SUCC:
    *(s16 *)(0x11c + param_1) = 1;
    *(s16 *)(0x11e + param_1) = 0;
LAB:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        *(u8 *)(0xb9 + param_1) = 1;
    } else {
        *(u8 *)(0xb9 + param_1) = 0;
    }
    iVar3 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar3);
    func_0202f9b4(param_1);
    iVar3 = func_0203567c(param_1);
    if (0 != iVar3) {
        func_0203e908(param_1, 0xec);
        return;
    }
}
