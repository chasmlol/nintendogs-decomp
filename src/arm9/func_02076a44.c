#include "ctx.h"

extern u8 data_02152f40[];
extern u8 data_02152cd8[];
extern u8 data_0212ab08[];

extern void func_020776d4(s32 a, u32 *b, s32 c);
extern void func_020c8bd4(void);

void func_02076a44(u8 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u8 *puVar6;
    u32 uVar2;
    s32 cVar7;
    s32 bVar8;
    u32 local_34[7];
    u32 fl;
    u32 v3;
    s32 iVar3;
    s32 iVar5;
    u32 *puVar4;
    u8 *b4;
    u32 off;
    u32 stride;
    u32 qq;

    *(u8 *)(param_1 + 0xad) = (u8)param_4;
    *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) | 8;
    *(u8 **)(param_1 + 0xb0) = param_1 + 0xf4;
    cVar7 = (*(s32 *)(param_1 + 0x1c) != 0) ? *(u8 *)(param_1 + 0x90) : 0;
    if (cVar7 == 1) {
        *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xffffffbf;
        ((void (*)(u8 *))(*(s32 *)(param_1 + 0x1c)))(param_1);
        cVar7 = (*(s32 *)(param_1 + 0x1c) != 0) ? *(u8 *)(param_1 + 0x90) : 0;
        uVar2 = *(u32 *)(param_1 + 8) & 0x40;
    } else {
        uVar2 = 0;
    }
    if (uVar2 == 0) {
        iVar3 = *(s32 *)(*(s32 *)(param_1 + 4) + 0x38);
        if (iVar3 == 0) {
            goto main_path;
        }
        if ((*(u32 *)(param_1 + 8) & 0x80) != 0) {
            goto main_path;
        }
        puVar6 = (u8 *)(param_4 * 0x38 + iVar3);
        goto store_puVar6;
main_path:
        if ((param_2 == 0x20 || param_2 == 0x40) &&
            ((1u << (param_4 & 0x1f)) & *(u32 *)(param_1 + (param_4 >> 5) * 4 + 0xbc)) != 0) {
            if (iVar3 != 0) {
                puVar6 = (u8 *)(param_4 * 0x38 + iVar3);
            } else {
                puVar6 = data_02152f40 + param_4 * 0x38;
            }
        } else {
            if (iVar3 != 0) {
                *(u32 *)(param_1 + 0xbc + (param_4 >> 5) * 4) =
                    *(u32 *)(param_1 + 0xbc + (param_4 >> 5) * 4) | (1u << (param_4 & 0x1f));
                puVar6 = (u8 *)(param_4 * 0x38 + *(s32 *)(*(s32 *)(param_1 + 4) + 0x38));
            } else {
                if (param_2 == 0x40) {
                    *(u32 *)(param_1 + 0xbc + (param_4 >> 5) * 4) =
                        *(u32 *)(param_1 + 0xbc + (param_4 >> 5) * 4) | (1u << (param_4 & 0x1f));
                    puVar6 = data_02152f40 + param_4 * 0x38;
                } else {
                    puVar6 = param_1 + 0xf4;
                }
            }
            *(u32 *)puVar6 = 0;
            iVar5 = *(s32 *)(param_1 + 0xd8);
            b4 = (u8 *)(iVar5 + 4);
            off = *(u16 *)(iVar5 + 10);
            stride = *(u16 *)(b4 + off);
            qq = *(u32 *)(b4 + off + stride * param_4 + 4);
            if (*(u16 *)(iVar5 + qq + 30) & 0x20) {
                *(u32 *)puVar6 = *(u32 *)puVar6 | 0x20;
            }
            uVar2 = ((u32 *)data_0212ab08)[(*(u16 *)(param_3 + 0x1e) >> 6) & 7];
            ((u32 *)puVar6)[1] = *(u32 *)(data_02152cd8 + 0x94) & ~uVar2 | *(u32 *)(param_3 + 4) & uVar2;
            uVar2 = ((u32 *)data_0212ab08)[(*(u16 *)(param_3 + 0x1e) >> 9) & 7];
            ((u32 *)puVar6)[2] = *(u32 *)(data_02152cd8 + 0x98) & ~uVar2 | *(u32 *)(param_3 + 8) & uVar2;
            ((u32 *)puVar6)[3] = *(u32 *)(data_02152cd8 + 0x9c) & ~*(u32 *)(param_3 + 0x10) |
                                 *(u32 *)(param_3 + 0xc) & *(u32 *)(param_3 + 0x10);
            ((u32 *)puVar6)[4] = *(u32 *)(param_3 + 0x14);
            ((u32 *)puVar6)[5] = *(u16 *)(param_3 + 0x1c);
            if ((*(u16 *)(param_3 + 0x1e) & 1) != 0) {
                puVar4 = (u32 *)(param_3 + 0x2c);
                if ((*(u16 *)(param_3 + 0x1e) & 2) == 0) {
                    ((u32 *)puVar6)[6] = puVar4[0];
                    ((u32 *)puVar6)[7] = puVar4[1];
                    puVar4 = puVar4 + 2;
                } else {
                    *(u32 *)puVar6 = *(u32 *)puVar6 | 1;
                }
                if ((*(u16 *)(param_3 + 0x1e) & 4) == 0) {
                    *(s16 *)(puVar6 + 0x20) = *(s16 *)puVar4;
                    *(s16 *)(puVar6 + 0x22) = *(s16 *)((u8 *)puVar4 + 2);
                    puVar4 = puVar4 + 1;
                } else {
                    *(u32 *)puVar6 = *(u32 *)puVar6 | 2;
                }
                if ((*(u16 *)(param_3 + 0x1e) & 8) == 0) {
                    ((u32 *)puVar6)[9] = puVar4[0];
                    ((u32 *)puVar6)[10] = puVar4[1];
                } else {
                    *(u32 *)puVar6 = *(u32 *)puVar6 | 4;
                }
                *(u32 *)puVar6 = *(u32 *)puVar6 | 8;
            }
            iVar3 = *(s32 *)(param_1 + 4);
            if (*(s32 *)(iVar3 + 8) != 0 &&
                ((1u << (param_4 & 0x1f)) & *(u32 *)(iVar3 + (param_4 >> 5) * 4 + 0x3c)) != 0) {
                ((void (*)(u8 *, s32, u32))(*(s32 *)(iVar3 + 0xc)))(puVar6, *(s32 *)(iVar3 + 8), param_4);
            }
            if ((*(u32 *)puVar6 & 0x18) != 0) {
                *(u16 *)(puVar6 + 0x2c) = *(u16 *)(param_3 + 0x20);
                *(u16 *)(puVar6 + 0x2e) = *(u16 *)(param_3 + 0x22);
                ((u32 *)puVar6)[0xc] = *(u32 *)(param_3 + 0x24);
                ((u32 *)puVar6)[0xd] = *(u32 *)(param_3 + 0x28);
            }
        }
store_puVar6:
        *(u8 **)(param_1 + 0xb0) = puVar6;
    }
    if (cVar7 == 2) {
        *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xffffffbf;
        ((void (*)(u8 *))(*(s32 *)(param_1 + 0x1c)))(param_1);
        cVar7 = (*(s32 *)(param_1 + 0x1c) != 0) ? *(u8 *)(param_1 + 0x90) : 0;
        uVar2 = *(u32 *)(param_1 + 8) & 0x40;
    } else {
        uVar2 = 0;
    }
    if (uVar2 == 0) {
        puVar6 = *(u8 **)(param_1 + 0xb0);
        v3 = ((u32 *)puVar6)[3];
        if ((v3 & 0x1f0000) != 0) {
            if ((*(u32 *)puVar6 & 0x20) != 0) {
                ((u32 *)puVar6)[3] = v3 & ~0x1f0000;
            }
            *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xfffffffd;
            if ((*(u32 *)(param_1 + 8) & 0x100) == 0) {
                local_34[0] = 0x293130;
                local_34[1] = ((u32 *)puVar6)[1];
                local_34[2] = ((u32 *)puVar6)[2];
                local_34[3] = ((u32 *)puVar6)[3];
                local_34[4] = 0x2b2a;
                local_34[5] = ((u32 *)puVar6)[4];
                local_34[6] = ((u32 *)puVar6)[5];
                func_020776d4((s32)local_34[0], local_34 + 1, 6);
                if ((*(u32 *)puVar6 & 0x18) != 0) {
                    ((void (*)(u8 *))(*(s32 *)(param_1 + 0xf0)))(puVar6);
                }
            }
        } else {
            *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) | 2;
        }
    }
    if (cVar7 != 3) {
        return;
    }
    *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) & 0xffffffbf;
    ((void (*)(u8 *))(*(s32 *)(param_1 + 0x1c)))(param_1);
}
