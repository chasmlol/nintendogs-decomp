#include "ctx.h"

extern u8 data_02126868[];
extern u8 data_0213e844[];
extern u8 data_0213e83c[];
extern void func_02066c08(u32 *a, u32 b, u32 c, u32 d);
extern void func_02066cd4(u32 *a, u32 *b, u32 *c);
extern void func_0206a0c0(u32 a);
extern void func_0206a0a4(u32 *a);

typedef struct { u16 f0 : 5; u16 f1 : 5; u16 f2 : 6; } Attr16;
typedef struct { u16 g0 : 9; u16 g1 : 2; u16 g2 : 1; u16 g3 : 4; } Hdr16;
typedef struct { u32 h0 : 2; u32 h1 : 2; u32 h2 : 28; } Hdr32;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define B_PTR(p) (*(u8 **)(*(u8 **)((p) + 0x34) + 0x18))
#define IP_PTR(p) (*(u8 **)B_PTR(p))
#define X_PTR(p) (*(u16 **)(B_PTR(p) + 0x14))
#define C6 (*(u16 *)(param_2 + 0x3a))
#define C4 (*(u16 *)(*(u8 **)(param_1 + 0x34) + 0x5a))

u32 func_02082878(u8 *param_1, u8 *param_2)
{
    u32 buf[36];
    s32 iVar3;
    s32 k;
    s32 uVar4;
    s32 uVar7;
    u32 sel;
    s32 v;
    s64 t;
    u16 *puVar5;
    u32 w;
    u32 rv;

    w = *(u32 *)(param_1 + 0x30);
    iVar3 = (s32)(((Attr16 *)(param_2 + 0x40))->f0 * (((Attr16 *)(param_2 + 0x40))->f1 + 1)) >> 5;
    *(u32 *)0x040004a4 = (((Attr16 *)(param_2 + 0x40))->f2 << 24) | (w | 0xc0) | ((u32)iVar3 << 16);
    rv = *(vu32 *)0x040004a4;
    if (iVar3 == 0) {
        return rv;
    }
    k = ((s32)*(u16 *)(param_2 + 0x36) >> 4) * 2;
    ((void (*)(s32, s32, u32 *))(*(u32 *)(data_0213e844 + ((Hdr16 *)X_PTR(param_1))->g1 * 4)))(
        ((s16 *)data_02126868)[k],
        ((s16 *)data_02126868)[k + 1],
        buf + 12);
    uVar7 = *(u32 *)(param_2 + 0x30);
    uVar4 = FX_Mul(uVar7, *(s16 *)(IP_PTR(param_1) + 0x30));
    sel = (*(u32 *)(IP_PTR(param_1) + 0x44) << 1) >> 29;
    if (sel == 0) goto L0;
    if (sel == 1) goto L1;
    if (sel != 2) goto JOIN;
    goto L2;
L0:
    v = *(s16 *)(param_2 + 0x34);
    uVar4 = FX_Mul(uVar4, v);
    uVar7 = FX_Mul(uVar7, v);
    goto JOIN;
L1:
    uVar4 = FX_Mul(uVar4, *(s16 *)(param_2 + 0x34));
    goto JOIN;
L2:
    uVar7 = FX_Mul(uVar7, *(s16 *)(param_2 + 0x34));
JOIN:
    func_02066c08(buf + 24, uVar4, uVar7, uVar7);
    func_02066cd4(buf + 12, buf + 24, buf);
    buf[9] = *(u32 *)(param_2 + 0x14) + *(u32 *)(param_2 + 8);
    buf[10] = *(u32 *)(param_2 + 0x18) + *(u32 *)(param_2 + 0xc);
    buf[11] = *(u32 *)(param_2 + 0x1c) + *(u32 *)(param_2 + 0x10);
    func_0206a0c0(*(u32 *)(param_1 + 0x38));
    func_0206a0a4(buf);
    *(vu32 *)0x04000480 = (u16)(((s32)((C6 & 0x1f) * (C4 & 0x1f)) >> 5) |
                                (((s32)((C6 & 0x3e0) * (C4 & 0x3e0)) >> 15) << 5) |
                                (((s32)((C6 & 0x7c00) * (C4 & 0x7c00)) >> 25) << 10));
    puVar5 = X_PTR(param_1);
    return ((u32 (*)(u8, u8))(*(u32 *)(data_0213e83c + ((Hdr16 *)puVar5)->g2 * 4)))(
        (u8)((Hdr32 *)(puVar5 + 8))->h0, (u8)((Hdr32 *)(puVar5 + 8))->h1);
}
