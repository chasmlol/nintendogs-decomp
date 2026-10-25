#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_lifetimes off

typedef struct { u32 w[3]; } T3;

extern u8 *data_0214f45c;
extern u8 *data_02159444;
extern u8 *data_0214f464;
extern s16 data_02126868[];
extern u8 *data_02159424;

extern u8 *func_020364a8(u8 *p);
extern u16 *func_0200c498(u32 a, s32 b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_0200b4d0(s32 *a, s32 *b, s32 *c, s32 *d);
extern void func_02027de8(u8 *p, s32 a, s32 b);
extern void func_02029504(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_ov006_02162954(s32 a, s32 b);
extern s32 func_ov006_021621c4(s32 a);
extern s32 func_ov006_021607d0(u8 *p, u8 *q, s32 a, s32 b);
extern void func_021089b8(s32 a);
extern void func_ov006_02161344(u8 *p);

void func_ov006_0215f0e8(u8 *param_1)
{
    s32 local_b0;
    u8 *iVar3;
    u16 *local_a8;
    s32 local_a4;
    s16 local_a0;
    s32 bVar2;
    s8 local_84;
    s32 uVar7;
    s32 iVar9;
    s32 iVar4;
    s8 local_80;
    s32 iVar10;
    int iVar12;
    int uVar11;
    s32 uVar6;
    s32 iVar5;
    u32 uVar1;
    s32 *piVar15;
    s32 *piVar16;
    s32 *piVar17;
    s32 *piVar18;
    u32 uVar8;
    s32 local_78[5];
    s32 local_64[6];
    s32 local_4c[6];
    s32 aiStack_34[4];

    local_b0 = 0;
    iVar3 = func_020364a8(param_1);
    if (iVar3 == 0) goto Z0;
    local_a8 = func_0200c498(*(u32 *)(iVar3 + 0x30), (s16)*(s32 *)(iVar3 + 0x2c));
    if (local_a8 == 0) goto Z0;
    if (*(s32 *)(data_0214f45c + 0x18) + (s16)*(s32 *)((u8 *)local_a8 + 0x20) * 36 != 0) {
        bVar2 = 1;
        goto J0;
    }
Z0:
    bVar2 = 0;
J0:
    if (bVar2 != 0) {
        s32 ix2;
        if ((*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
            s32 dx;
            *(T3 *)&local_78[2] = *(T3 *)(data_0214f464 + 0x74);
            iVar4 = *(s32 *)(param_1 + 0x26c);
            dx = local_78[2] - iVar4;
            *(s32 *)(param_1 + 0x26c) = iVar4 + (s32)((((s64)dx * 256) + 0x800) >> 12);
            iVar4 = *(s32 *)(param_1 + 0x274);
            dx = local_78[4] - iVar4;
            *(s32 *)(param_1 + 0x274) = iVar4 + (s32)((((s64)dx * 256) + 0x800) >> 12);
        }
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
        local_a4 = *(s32 *)(iVar3 + 0x34);
        func_02067e34((s32 *)(param_1 + 0x2a0), (s32 *)(param_1 + 0x2b8), aiStack_34);
        ix2 = ((u16)local_a8[2] >> 4) * 2;
        iVar9 = data_02126868[ix2];
        iVar4 = data_02126868[ix2 + 1];
        uVar8 = iVar9 >> 1;
        uVar1 = iVar4 >> 1;
        if (local_a8[0] == 2) {
            local_78[0] = 5;
            local_78[1] = -5;
            local_b0 = 2;
            local_a0 = 30;
            iVar5 = func_ov006_02162954((s16)*(s32 *)(iVar3 + 0x2c), 0);
            if (iVar5 != 0) {
                *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) - 1;
                *(s32 *)(param_1 + 0x470) = 1;
            }
            iVar5 = func_ov006_02162954((s16)*(s32 *)(iVar3 + 0x2c), 1);
            if (iVar5 != 0) {
                *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) - 1;
                *(s32 *)(param_1 + 0x470) = 1;
            }
        } else {
            local_78[0] = 0;
            local_78[1] = 0;
            local_b0 = 1;
            local_a0 = 40;
            iVar5 = func_ov006_021621c4((s16)*(s32 *)(iVar3 + 0x2c));
            if (iVar5 != 0) {
                *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) - 1;
                *(s32 *)(param_1 + 0x470) = 1;
            }
        }
        if ((s32)(s8)param_1[0x89] > *(s32 *)(iVar3 + 0x20) && *(s32 *)(iVar3 + 0x24) >= 0) {
            local_a4 = *(s32 *)(iVar3 + 0x38);
        }
        iVar5 = 0;
        if (0 < local_b0) {
            piVar15 = local_4c;
            local_80 = 0;
            piVar16 = local_64;
            local_84 = 1;
            piVar17 = piVar15;
            piVar18 = piVar16;
            do {
                *(T3 *)piVar15 = *(T3 *)((u8 *)local_a8 + 8);
                *(T3 *)piVar16 = *(T3 *)piVar15;
                iVar12 = local_78[iVar5];
                piVar16[0] = piVar16[0] + (uVar8 * iVar12 - uVar1 * 8);
                piVar16[2] = piVar16[2] + (uVar8 * 8 + uVar1 * iVar12);
                piVar15[0] = piVar15[0] + (uVar1 * 8 + uVar8 * iVar12);
                piVar15[2] = piVar15[2] + (uVar1 * iVar12 - uVar8 * 8);
                iVar10 = func_0200b4d0(piVar18, piVar17, (s32 *)(param_1 + 0x2a0), aiStack_34);
                if (iVar10 != 0) {
                    uVar11 = *(u32 *)(param_1 + 0x2b8);
                    uVar6 = *(u32 *)(0x2c0 + param_1);
                    iVar10 = (s32)((((s64)(s32)uVar8 * uVar11) + 0x800) >> 12) +
                             (s32)((((s64)(s32)uVar1 * uVar6) + 0x800) >> 12);
                    if (iVar10 > 0) {
                        iVar10 = local_84;
                    } else {
                        iVar10 = local_80;
                    }
                    if (*(s16 *)data_02159424 == 0 || (local_a4 == 0 && iVar10 != 0) ||
                        (local_a4 == 1 && iVar10 == 0)) {
                        *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
                    }
                    func_02027de8(param_1, 0, local_a0);
                    *(s32 *)(param_1 + 0x468) = *(s32 *)(0x468 + param_1) + 1;
                }
                piVar15 = piVar15 + 3;
                piVar16 = piVar16 + 3;
                piVar17 = piVar17 + 3;
                piVar18 += 3;
                iVar5 = (s16)(iVar5 + 1);
            } while (iVar5 < local_b0);
        }
    }
    func_02029504(param_1);
    if (*(s32 *)(param_1 + 0x468) >= local_b0) {
        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
    }
    if (*(s32 *)(param_1 + 0x46c) == 0 &&
        (*(s32 *)(param_1 + 0x468) > local_b0 + 7 || func_0203567c(param_1) != 0 ||
         (*(s32 *)(param_1 + 0x470) != 0 && *(u16 *)(param_1 + 0xfc) > 30))) {
        *(s32 *)(param_1 + 0x46c) = 1;
        uVar7 = func_ov006_021607d0(param_1, iVar3, 1, 1);
        switch (uVar7) {
        case 0:
            break;
        case 1:
            if (*(s32 *)(0x464 + param_1) == local_b0) {
                u8 *q;
                *(u16 *)(data_0214f464 + 0x2e) = 1;
                q = data_0214f464;
                *(s16 *)(q + 0x2c) = *(s16 *)(q + 0x2c) + 1;
                if (*(s16 *)(q + 0x2c) >= 5) {
                    func_021089b8(3);
                } else {
                    func_021089b8(2);
                }
            } else {
                *(u16 *)(data_0214f464 + 0x2e) = 2;
                *(u16 *)(data_0214f464 + 0x2c) = 0;
                func_021089b8(1);
            }
            break;
        case 2:
            *(u16 *)(data_0214f464 + 0x2e) = 2;
            *(u16 *)(data_0214f464 + 0x2c) = 0;
            func_021089b8(1);
            break;
        case 3:
            break;
        case 4:
            *(u16 *)(data_0214f464 + 0x2e) = 9;
            *(u16 *)(data_0214f464 + 0x2c) = 0;
            func_021089b8(1);
        }
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_ov006_021607d0(param_1, iVar3, 0, 0);
    param_1[0xb0] = (u8)(param_1[0xb0] | 4);
    func_ov006_02161344(param_1);
}
