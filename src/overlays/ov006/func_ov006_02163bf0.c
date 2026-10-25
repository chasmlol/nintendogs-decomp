#include "ctx.h"

extern s32 data_ov006_02166040[];
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_02067af0(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);

static inline void vset3(s32 *d, s32 a, s32 b, s32 c)
{
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

static inline s32 FXM(s32 a, s32 b)
{
    s64 v = (s64)a * b + 0x800;
    return (s32)(v >> 12);
}

void func_ov006_02163bf0(s32 param_1)
{
    s32 *piVar3;
    s32 z1;
    s32 z2;
    s32 uVar2;
    s32 iVar7;
    s32 *puVar6;
    s32 *puVar5;
    s32 local_48[3];
    s32 local_3c[3];
    s32 local_30[3];
    s32 uVar4;
    s32 *pt;
    s32 zt;

    pt = *(s32 **)(param_1 + 0x2c);
    piVar3 = pt;
    (void)&piVar3;
    iVar7 = 0;
    puVar6 = data_ov006_02166040;
    uVar2 = 0xe66;
    puVar5 = pt + 0x19;
    z1 = 0;
    z2 = 0;
    (void)&z1;
    (void)&z2;
    do {
        vset3(local_48, puVar6[0], puVar6[1], puVar6[2]);
        vset3(local_3c, puVar6[3], puVar6[4], puVar6[5]);
        vset3(local_30, puVar6[6], puVar6[7], puVar6[8]);
        puVar5[0] = puVar5[0] - FXM(local_3c[0], 0x29);
        puVar5[2] = puVar5[2] - FXM(local_3c[2], 0x29);
        func_02067e68(puVar5, local_3c, local_3c);
        puVar5[0] = FXM(puVar5[0], uVar2);
        puVar5[1] = FXM(puVar5[1], uVar2);
        puVar5[2] = FXM(puVar5[2], uVar2);
        uVar4 = local_3c[0];
        if ((s32)uVar4 <= 0) {
            uVar4 = -local_3c[0];
        }
        if ((s32)uVar4 < 8) {
            uVar4 = puVar5[0];
            if ((s32)uVar4 <= 0) {
                uVar4 = -puVar5[0];
            }
            if ((s32)uVar4 < 8) {
                zt = z1;
                local_3c[0] = zt;
                puVar5[0] = zt;
            }
        }
        uVar4 = local_3c[2];
        if ((s32)uVar4 <= 0) {
            uVar4 = -local_3c[2];
        }
        if ((s32)uVar4 < 8) {
            uVar4 = puVar5[2];
            if ((s32)uVar4 <= 0) {
                uVar4 = -puVar5[2];
            }
            if ((s32)uVar4 < 8) {
                zt = z2;
                puVar5[2] = zt;
                local_3c[2] = zt;
            }
        }
        if (((piVar3[0] - iVar7) & 0x3f) == 0) {
            func_02067af0(local_3c, local_3c);
            func_02067d04(local_3c, local_30, local_48);
            func_02067af0(local_48, local_48);
            func_02067d04(local_48, local_3c, local_30);
        }
        iVar7 = iVar7 + 1;
        puVar6[0] = local_48[0];
        puVar6[1] = local_48[1];
        puVar5 = puVar5 + 3;
        puVar6[2] = local_48[2];
        puVar6[3] = local_3c[0];
        puVar6[4] = local_3c[1];
        puVar6[5] = local_3c[2];
        puVar6[6] = local_30[0];
        puVar6[7] = local_30[1];
        puVar6[8] = local_30[2];
        puVar6 = puVar6 + 0xc;
    } while (iVar7 < 8);
}
