#include "ctx.h"

extern u8 data_0212ab28[];
extern u8 data_0212ab29[];
extern u8 data_0212ab2a[];
extern u8 data_0212ab2b[];

extern void func_020776d4(s32, u32 *, s32);
extern void func_0206cae8(u32 *);

void func_02076424(s32 *param_1, s32 param_2)
{
    s32 iVar11;
    u16 *puVar1;
    u8 bVar2;
    u16 uVar3;
    s32 iVar4;
    u32 uVar5;
    s32 iVar6;
    u32 *puVar10;
    u32 *puVar9;
    u16 *puVar8;
    u8 cVar12;
    s32 bVar13;
    u32 local_38;
    u32 local_34;
    u32 local_30;
    u32 local_2c;
    u32 local_28;
    u32 uVar7;
    u32 toff;
    u32 tw;

    uVar7 = *(u8 *)(*param_1 + 1);
    iVar11 = 4;
    *(u8 *)((u8 *)param_1 + 0xae) = *(u8 *)(*param_1 + 1);
    param_1[2] = param_1[2] | 0x10;
    if ((param_1[2] & 0x400) != 0) {
        if (param_2 == 0x40 || param_2 == 0x60) {
            iVar11 = iVar11 + 1;
        }
        if ((param_2 == 0x20 || param_2 == 0x60) && (iVar11 = iVar11 + 1, (param_1[2] & 0x100) == 0)) {
            local_30 = *(u8 *)(*param_1 + 4);
            func_020776d4(0x14, &local_30, 1);
        }
        *param_1 = *param_1 + iVar11;
        return;
    }
    if (param_2 == 0x40 || param_2 == 0x60) {
        if (param_2 == 0x40) {
            bVar2 = *(u8 *)(*param_1 + 4);
            local_2c = bVar2;
        } else {
            bVar2 = *(u8 *)(*param_1 + 5);
            local_2c = bVar2;
        }
        iVar11 = iVar11 + 1;
        if ((param_1[2] & 0x100) == 0) {
            func_020776d4(0x14, &local_2c, 1);
        }
    }
    param_1[0x2d] = (s32)(param_1 + 0x4b);
    if (param_1[9] != 0) {
        cVar12 = *(u8 *)((u8 *)param_1 + 0x92);
    } else {
        cVar12 = 0;
    }
    if (cVar12 == 1) {
        param_1[2] = param_1[2] & 0xffffffbf;
        ((void (*)(s32 *))param_1[9])(param_1);
        if (param_1[9] != 0) {
            cVar12 = *(u8 *)((u8 *)param_1 + 0x92);
        } else {
            cVar12 = 0;
        }
        uVar5 = param_1[2] & 0x40;
    } else {
        uVar5 = 0;
    }
    if (uVar5 == 0) {
        if (*(s32 *)(param_1[1] + 0x34) == 0) goto Lp0;
        puVar10 = (u32 *)(uVar7 * 0x58 + *(s32 *)(param_1[1] + 0x34));
        bVar13 = (param_1[2] & 0x80) == 0;
        goto Lp1;
Lp0:
        puVar10 = (u32 *)(param_1 + 0x4b);
        bVar13 = 0;
Lp1:
        if (!bVar13) {
            *puVar10 = 0;
            iVar4 = *(s32 *)(param_1[1] + 0x10);
            if (iVar4 == 0 || (iVar4 = ((s32 (*)(u32 *, s32, u32))(*(s32 *)(param_1[1] + 0x14)))(puVar10, iVar4, uVar7), iVar4 == 0)) {
                iVar6 = param_1[0x35];
                toff = *(u16 *)(iVar6 + 6);
                tw = *(u16 *)(iVar6 + toff);
                iVar4 = *(s32 *)((iVar6 + toff) + tw * uVar7 + 4);
                puVar8 = (u16 *)(iVar6 + iVar4);
                puVar9 = (u32 *)(puVar8 + 2);
                if ((*(u16 *)(iVar6 + iVar4) & 1) == 0) {
                    puVar10[0x13] = puVar9[0];
                    puVar10[0x14] = puVar9[1];
                    puVar10[0x15] = puVar9[2];
                    puVar9 += 3;
                } else {
                    *puVar10 = *puVar10 | 4;
                }
                uVar3 = *puVar8;
                if ((uVar3 & 2) != 0) {
                    *puVar10 = *puVar10 | 2;
                } else {
                    if ((uVar3 & 8) != 0) {
                        iVar4 = (s32)(uVar3 & 0xf0) >> 4;
                        local_38 = (s32)*(s16 *)puVar9;
                        local_34 = (s32)(s16)*(u16 *)((u8 *)puVar9 + 2);
                        func_0206cae8(puVar10 + 10);
                        puVar9 = puVar9 + 1;
                        if ((*puVar8 & 0x100) != 0) {
                            uVar7 = 0xfffff000;
                        } else {
                            uVar7 = 0x1000;
                        }
                        (puVar10 + iVar4)[10] = uVar7;
                        (puVar10 + data_0212ab28[iVar4 * 4])[10] = local_38;
                        (puVar10 + data_0212ab29[iVar4 * 4])[10] = local_34;
                        if ((*puVar8 & 0x200) != 0) {
                            local_34 = -local_34;
                        }
                        (puVar10 + data_0212ab2a[(u32)iVar4 * 4])[10] = local_34;
                        if ((*puVar8 & 0x400) != 0) {
                            local_38 = -local_38;
                        }
                        (puVar10 + data_0212ab2b[(u32)iVar4 << 2])[10] = local_38;
                    } else {
                        puVar10[10] = (s32)(s16)puVar8[1];
                        puVar10[0xb] = (s32)*(s16 *)puVar9;
                        puVar10[0xc] = (s32)(s16)*(u16 *)((u8 *)puVar9 + 2);
                        puVar10[0xd] = (s32)*(s16 *)(puVar9 + 1);
                        puVar10[0xe] = (s32)(s16)*(u16 *)((u8 *)puVar9 + 6);
                        puVar10[0xf] = (s32)*(s16 *)(puVar9 + 2);
                        puVar10[0x10] = (s32)(s16)*(u16 *)((u8 *)puVar9 + 10);
                        puVar10[0x11] = (s32)*(s16 *)(puVar9 + 3);
                        puVar10[0x12] = (s32)(s16)*(u16 *)((u8 *)puVar9 + 14);
                        puVar9 = puVar9 + 4;
                    }
                }
                ((void (*)(u32 *, u32 *, s32, u16))param_1[0x3a])(puVar10, puVar9, *param_1, *puVar8);
            }
        }
        param_1[0x2d] = (s32)puVar10;
    }
    if (cVar12 == 2) {
        param_1[2] = param_1[2] & 0xffffffbf;
        ((void (*)(s32 *))param_1[9])(param_1);
        if (param_1[9] != 0) {
            cVar12 = *(u8 *)((u8 *)param_1 + 0x92);
        } else {
            cVar12 = 0;
        }
        uVar7 = param_1[2] & 0x40;
    } else {
        uVar7 = 0;
    }
    if (uVar7 == 0 && (param_1[2] & 0x100) == 0) {
        ((void (*)(s32))param_1[0x3b])(param_1[0x2d]);
    }
    uVar7 = 0;
    param_1[0x2d] = 0;
    if (cVar12 == 3) {
        param_1[2] = param_1[2] & 0xffffffbf;
        ((void (*)(s32 *))param_1[9])(param_1);
        uVar7 = param_1[2] & 0x40;
    }
    if (((param_2 == 0x20 || param_2 == 0x60) && (iVar11 = iVar11 + 1, uVar7 == 0)) && (param_1[2] & 0x100) == 0) {
        local_28 = *(u8 *)(*param_1 + 4);
        func_020776d4(0x13, &local_28, 1);
    }
    *param_1 = *param_1 + iVar11;
}
