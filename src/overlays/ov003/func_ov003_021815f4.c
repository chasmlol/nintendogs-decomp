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

static inline u32 SwapR(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_ov003_021815f4(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 uVar5;
    s32 r;

    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 888, (s32)((((s64)uVar5 * 0x1004) + 0x800) >> 12));
    if (r != 0) goto nz;
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 900, (s32)((((s64)uVar5 * 0x14d2) + 0x800) >> 12));
    if (r != 0) goto nz;
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 840, (s32)((((s64)uVar5 * 0x14d2) + 0x800) >> 12));
    if (r == 0) goto z;
nz:
    *(u16 *)(param_1 + 0x11c) = 0;
    *(u16 *)(param_1 + 0x11e) = 1;
    goto tail;
z:
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
tail:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapR(1, (vu8 *)(param_1 + 185));
    } else {
        SwapR(0, (vu8 *)(param_1 + 185));
    }
    iVar2 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar2);
    func_0202f9b4(param_1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xef);
    }
}
