#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void *func_0202fcd4(u8 *p);
void func_0204e020(u8 *p, void *a, s32 b, s32 c, s32 d);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_02026514(u8 *p);
void func_02027f40(void *p, s32 a, s32 b);
s32 func_02027708(void *p);
void func_02027abc(void *p, s32 a, s32 b);
void func_020449d0(s32 a);
void func_0204494c(s32 a);
void func_020362ec(u8 *p, s32 a);
void func_020514c8(u8 *p);
void func_0203e908(u8 *p, s32 a);

extern u32 *data_0214f464;

void func_ov004_0216a5c4(u8 *param_1)
{
    void *iVar1;
    s32 iVar2;
    s32 k;
    s32 t;
    u32 uVar3;
    u32 sel;

    iVar1 = func_0202fcd4(param_1);
    if (*(u16 *)(param_1 + 0xfc) < 0x78) {
        func_0204e020(param_1, iVar1, 0, 0, 0);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) < 0x87) {
        func_0203e8cc(param_1, 0, 0x8e);
        func_02026514(param_1);
        return;
    }
    if (*(s32 *)(param_1 + 0x488) <= 0) {
        k = 0x2710;
        { u8 sw; u32 bv = *(u8 *)(param_1 + 0xb0); sw = SwapByte(bv & ~2u, (vu8 *)(param_1 + 0xb0)); (void)sw; }
        func_02027f40(param_1, 0, k);
        func_02027f40(param_1, 6, 0);
        func_02027f40(param_1, 2, 0);
        func_02027f40(param_1, 5, 0);
        func_02027f40(param_1, 1, 0x2710);
        iVar2 = func_02027708(iVar1);
        func_02027abc(param_1, iVar2, 0);
        func_02027f40(iVar1, 0, 0x2710);
        func_02027f40(iVar1, 6, 0);
        func_02027f40(iVar1, 2, 0);
        func_02027f40(iVar1, 5, 0);
        func_02027f40(iVar1, 1, 0x2710);
        func_02027abc(iVar1, (s8)*(s8 *)(param_1 + 0x88), 0);
        func_020449d0(16);
        func_0204494c(2);
        t = *(s8 *)((u8 *)iVar1 + 0x88);
        func_020362ec(param_1, (s16)t);
        func_020514c8(param_1);
        return;
    }
    if (*(s32 *)(param_1 + 0x488) >= 2) {
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        uVar3 = (u16)(((u32)(u16)uVar3 * 3u) >> 16);
        switch (uVar3) {
        case 0:
            func_0203e908(param_1, 0x4cc);
            return;
        case 1:
            func_0203e908(param_1, 0x4cd);
            return;
        case 2:
            func_0203e908(param_1, 0x4ce);
            return;
        default:
            return;
        }
    }
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    sel = (u16)(((u32)iVar2 << 16) >> 31);
    if (sel == 0) goto A1;
    if (sel == 1) goto B1;
    return;
A1:
    func_0203e908(param_1, 0x4cd);
    return;
B1:
    func_0203e908(param_1, 0x4ce);
}
