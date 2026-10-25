#include "ctx.h"

#define FX_NEG_MUL(k, x) ((s32)(((s64)(-(k)) * (x) + 0x800) >> 12))

typedef struct {
    s32 a[3];
    s32 b[12];
    s32 c[6];
    s32 d[13];
} Frame;

extern s32 data_02142a2c;
extern s16 data_02159478;
extern s32 data_02159488;
extern s32 data_02159484;
extern s32 data_021429bc;
extern s16 data_0212a268[];
extern s16 data_02126868[];

extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_01ff8020(s32 *a, s32 b, s32 c);
extern void func_01ff8058(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02067288(s32 *a, s32 *b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);

void func_020c2d74(u8 *param_1)
{
    Frame F;
    s32 *puVar7;
    s32 iVar1;
    s32 hv;
    u32 uVar8;

    puVar7 = *(s32 **)(param_1 + 0x214);
    *(s32 *)(param_1 + 0xb4) += data_02142a2c;
    if (data_02159478 == 0) {
        *puVar7 += FX_NEG_MUL(data_02159488, *puVar7);
        *(s32 *)(param_1 + 0xb0) += FX_NEG_MUL(data_02159484, *(s32 *)(param_1 + 0xb0));
        *(s32 *)(param_1 + 0xb8) += FX_NEG_MUL(data_02159484, *(s32 *)(param_1 + 0xb8));
        *(s32 *)(param_1 + 0xb4) += FX_NEG_MUL(data_021429bc, *(s32 *)(param_1 + 0xb4));
    }
    func_02067e68((s32 *)(param_1 + 0xbc), (s32 *)(param_1 + 0xb0), (s32 *)(param_1 + 0xbc));
    {
        s32 t2 = *(s32 *)(param_1 + 0xdc);
        s32 t1 = *(s32 *)(param_1 + 0xd8);
        s32 t0 = *(s32 *)(param_1 + 0xd4);
        F.a[0] = t0;
        F.a[1] = t1;
        F.a[2] = t2;
    }
    func_01ff8020(F.b, *(s16 *)((u8 *)data_0212a268 + 0xe8), *(s16 *)((u8 *)data_0212a268 + 0xea));
    func_01ff8058(&F.a[0], F.b, &F.a[0]);
    F.a[0] = (s32)(((s64)0xf33 * F.a[0] + 0x800) >> 12);
    F.a[2] = (s32)(((s64)0xf33 * F.a[2] + 0x800) >> 12);
    func_02006a30(&F.a[0], &F.a[0]);
    {
        s32 u2 = *(s32 *)(param_1 + 0xd0);
        s32 u1 = *(s32 *)(param_1 + 0xcc);
        s32 u0 = *(s32 *)(param_1 + 0xc8);
        F.c[0] = u0;
        F.c[1] = u1;
        F.c[2] = u2;
    }
    {
        s32 v5 = *(s32 *)(param_1 + 0xe8);
        s32 v4 = *(s32 *)(param_1 + 0xe4);
        s32 v3 = *(s32 *)(param_1 + 0xe0);
        F.c[3] = v3;
        F.c[4] = v4;
        F.c[5] = v5;
    }
    func_02067d04(&F.c[0], &F.a[0], &F.c[3]);
    func_02006a30(&F.c[3], &F.c[3]);
    func_02067d04(&F.a[0], &F.c[3], &F.c[0]);
    func_02006a30(&F.c[0], &F.c[0]);
    *(s32 *)(param_1 + 0xc8) = F.c[0];
    *(s32 *)(param_1 + 0xcc) = F.c[1];
    *(s32 *)(param_1 + 0xd0) = F.c[2];
    *(s32 *)(param_1 + 0xd4) = F.a[0];
    *(s32 *)(param_1 + 0xd8) = F.a[1];
    *(s32 *)(param_1 + 0xdc) = F.a[2];
    *(s32 *)(param_1 + 0xe0) = F.c[3];
    *(s32 *)(param_1 + 0xe4) = F.c[4];
    *(s32 *)(param_1 + 0xe8) = F.c[5];
    uVar8 = *(u32 *)puVar7;
    {
        s64 pp = (s64)(s32)uVar8 * 0x28be60db9391LL + ((s64)0x800 << 32);
        hv = (s32)(u32)(pp >> 32);
    }
    iVar1 = (s32)(((u32)hv << 4) >> 16) >> 4;
    func_02067288(F.d, F.a, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
    func_01ff810c((s32 *)(param_1 + 200), F.d, (s32 *)(param_1 + 200));
}
