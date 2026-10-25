#include "ctx.h"

extern u8 data_02126868[];
extern u32 data_ov006_02165dcc[];
extern u32 data_ov006_02165db4[];
extern u8 *data_02159444;
extern u32 *data_0214f464;

extern u8 *func_020364a8(u8 *p);
extern s16 *func_0200c498(s32 a, s32 b);
extern s32 func_02009d34(void *a, void *b, void *c);
extern void func_02067e34(void *a, void *b, void *c);
extern s32 func_02009bd0(void *a, void *b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern s32 func_02027e4c(u8 *p, s32 a);
extern void func_02037f20(u8 *p, s32 a);
extern u32 func_02028124(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern u32 func_ov006_021611a0(u8 *p);
extern void func_ov006_021607d0(u8 *p, u8 *q, s32 a, s32 b);
extern void func_ov006_02161344(u8 *p);

typedef struct { u32 w[6]; } T6;
typedef struct { u32 w[3]; } T3;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

void func_ov006_0215f6f8(u8 *param_1)
{
    u8 *iVar4;
    u16 *psVar5;
    s32 iVar14;
    s32 iVar6;
    s32 iVar7;
    s32 iVar13;
    s32 bVar3;
    s32 uVar12;
    s32 uVar15;
    s32 uVar9;
    s32 uVar10;
    s32 ix;
    s32 t2;
    s32 d0;
    s32 d1;
    s32 fx0;
    s32 fx2;
    s32 local_7c[3];
    s32 local_70[3];
    s32 aiStack_64[3];
    T6 t58;
    T6 t40;
    T3 cp;

    iVar4 = func_020364a8(param_1);
    iVar6 = 0x2710000;
    iVar14 = 0;
    iVar13 = 0;
    uVar12 = 0;
    bVar3 = 0;
    if (iVar4 == 0) goto L2ec;
    psVar5 = (u16 *)func_0200c498(*(s32 *)(iVar4 + 0x30), (s32)(s16)*(s32 *)(iVar4 + 0x2c));
    if (psVar5 == 0) goto L258;
    ix = (s32)psVar5[2] >> 4;
    t2 = ix * 2;
    fx0 = *(s16 *)(data_02126868 + t2 * 2);
    fx2 = *(s16 *)(data_02126868 + (t2 + 1) * 2);
    if (psVar5[0] != 2) goto Lc4;
    t58 = *(T6 *)data_ov006_02165dcc;
    iVar13 = 0x110000;
    uVar15 = t58.w[*(s16 *)(param_1 + 0x148) - 17];
    uVar12 = FXM(uVar15, uVar15);
    goto L10c;
Lc4:
    t40 = *(T6 *)data_ov006_02165db4;
    iVar13 = 0xa9000;
    uVar15 = t40.w[*(s16 *)(param_1 + 0x148) - 17];
    uVar12 = FXM(uVar15, uVar15);
L10c:
    d0 = *(s32 *)(param_1 + 0x2a0) - *(s32 *)((u8 *)psVar5 + 8);
    d1 = *(s32 *)(param_1 + 0x2a8) - *(s32 *)((u8 *)psVar5 + 16);
    if ((s32)(FXM(fx0, d0) + FXM(fx2, d1)) < 0) {
        uVar15 = -uVar15;
    }
    uVar9 = FXM(fx0, uVar15);
    uVar10 = FXM(fx2, uVar15);
    cp = *(T3 *)((u8 *)psVar5 + 8);
    *(T3 *)(param_1 + 0x26c) = cp;
    *(s32 *)(param_1 + 0x26c) += uVar9;
    *(s32 *)(param_1 + 0x274) += uVar10;
    local_7c[0] = fx0;
    local_7c[1] = 0;
    local_7c[2] = fx2;
    local_70[0] = -fx2;
    local_70[1] = 0;
    local_70[2] = fx0;
    func_02067e34(psVar5 + 4, param_1 + 0x2a0, aiStack_64);
    iVar6 = func_02009d34(aiStack_64, local_7c, local_70);
    if (iVar6 == 0) goto L230;
    if (iVar6 != 3) goto L258;
L230:
    iVar6 = func_02009d34(param_1 + 0x1a4, local_7c, local_70);
    if (iVar6 == 0) goto L250;
    if (iVar6 != 3) goto L258;
L250:
    bVar3 = 1;
L258:
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) goto L2ac;
    iVar6 = func_02009bd0(param_1 + 0x26c, param_1 + 0x2a0);
    iVar14 = (s32)data_0214f464;
    cp = *(T3 *)((u8 *)iVar14 + 0x74);
    *(T3 *)(param_1 + 0x26c) = cp;
    func_0203942c(param_1);
    func_02037450(param_1, 0x310);
    goto L2c4;
L2ac:
    func_0203942c(param_1);
    iVar6 = func_02037450(param_1, 0x310);
L2c4:
    iVar14 = func_02027e4c(param_1, 0);
    func_02037f20(param_1, iVar14);
    iVar14 = func_02009bd0(iVar4 + 8, param_1 + 0x2a0);
L2ec:
    iVar7 = func_02028124(param_1);
    if (iVar6 >= iVar7 * 0x10) goto L37c;
    iVar6 = func_02027e4c(param_1, 0);
    uVar12 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar12;
    if (iVar6 >= (s32)(u16)(((u16)uVar12 * 1000u) >> 16)) goto C611;
    func_0203e908(param_1, 0x4e7);
    return;
C611:
    uVar12 = func_ov006_021611a0(param_1);
    func_0203e908(param_1, uVar12);
    return;
L37c:
    if (bVar3 == 0) goto L410;
    if (iVar14 >= uVar12) goto L410;
    iVar6 = func_02027e4c(param_1, 0);
    uVar12 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar12;
    if (iVar6 >= (s32)(u16)(((u16)uVar12 * 1000u) >> 16)) goto C611b;
    func_0203e908(param_1, 0x4e7);
    return;
C611b:
    uVar12 = func_ov006_021611a0(param_1);
    func_0203e908(param_1, uVar12);
    return;
L410:
    if (*(u16 *)(param_1 + 0xfc) <= 0x1e) {
        return;
    }
    if (iVar14 <= iVar13) {
        return;
    }
    func_ov006_021607d0(param_1, iVar4, 0, 1);
    func_ov006_02161344(param_1);
    return;
}
