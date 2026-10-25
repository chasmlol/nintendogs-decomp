#include "ctx.h"

extern u32 data_0213e590[];
extern u32 data_0213e594[];
extern u32 data_0213e5c0[];
extern u32 data_02152cd8[];
extern u32 data_02152db8[];
extern u32 data_02152d94[];

extern void func_02077d20(u32 *a, u32 *b);
extern void func_020776d4(u32 a, void *b, u32 c);
extern void *func_020746a0(void);
extern void func_020778d0(void);
extern s32 func_0206a33c(void *a);

static inline u32 PackTexCoord(s32 s, s32 t)
{
    return (u32)(u16)(s16)(s >> 8) | ((u32)(u16)(s16)(t >> 8) << 16);
}

void func_02074ed8(s32 *param_1)
{
    u8 cVar7;
    u32 local_90;
    u32 local_8c[15];
    s32 auStack_50[16];
    u32 uVar4;
    u32 *puVar2, *piVar3, *puVar6;
    s32 iVar8;
    u8 *base;
    u32 off;
    u8 *e;

    if (((param_1[2] & 0x200) == 0) && ((param_1[2] & 1) != 0)) {
        func_02077d20(local_8c + 3, 0);
        local_90 = 0x1e;
        func_020776d4(0x13, &local_90, 1);
        if ((*(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10) & 0xc0000000) != 0xc0000000) {
            *(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10) = *(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10) & 0x3fffffff;
            puVar2 = data_0213e594;
            puVar6 = data_0213e590;
            *(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10) = *(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10) | 0xc0000000;
            puVar6[1] = *(u32 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x10);
            func_020776d4(*puVar6, puVar2, 1);
        }
        if (!param_1[0x10]) {
            cVar7 = 0;
        } else {
            cVar7 = *(u8 *)((u8 *)param_1 + 0x99);
        }
        if (cVar7 == 1) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(s32 *))param_1[0x10])(param_1);
            if (param_1[0x10] != 0) {
                cVar7 = *(u8 *)((u8 *)param_1 + 0x99);
            } else {
                cVar7 = 0;
            }
            uVar4 = param_1[2] & 0x40;
        } else {
            uVar4 = 0;
        }
        if (uVar4 == 0) {
            piVar3 = data_0213e5c0;
            uVar4 = *(u16 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x2e);
            iVar8 = (u32)*(u16 *)(*(u8 **)((u8 *)param_1 + 0xb0) + 0x2c) << 15;
            piVar3[0] = iVar8;
            piVar3[5] = (0 - uVar4) * 0x8000;
            piVar3[12] = iVar8;
            piVar3[13] = uVar4 << 15;
            func_020776d4(0x16, piVar3, 0x10);
        }
        if (cVar7 == 2) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(s32 *))param_1[0x10])(param_1);
            if (param_1[0x10] != 0) {
                cVar7 = *(u8 *)((u8 *)param_1 + 0x99);
            } else {
                cVar7 = 0;
            }
            uVar4 = param_1[2] & 0x40;
        } else {
            uVar4 = 0;
        }
        if (uVar4 == 0) {
            base = (u8 *)param_1[0x36];
            off = *(u16 *)(base + 10);
            e = base + 4 + off;
            iVar8 = (s32)(base + *(u32 *)(e + (*(u16 *)e) * (*(u8 *)((u8 *)(*param_1) + 1)) + 4));
            if ((*(u16 *)((u8 *)iVar8 + 30) & 0x2000) != 0) {
                puVar6 = (u32 *)((u8 *)iVar8 + 0x2c);
                if ((*(u16 *)((u8 *)iVar8 + 30) & 2) == 0) {
                puVar6 = puVar6 + 2;
                }
                if ((*(u16 *)((u8 *)iVar8 + 30) & 4) == 0) {
                    puVar6 = puVar6 + 1;
                }
                if ((*(u16 *)((u8 *)iVar8 + 30) & 8) == 0) {
                    puVar6 = puVar6 + 2;
                }
                func_020776d4(0x18, puVar6, 0x10);
            }
        }
        if (cVar7 == 3) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(s32 *))param_1[0x10])(param_1);
            uVar4 = param_1[2] & 0x40;
        } else {
            uVar4 = 0;
        }
        if (uVar4 == 0) {
            if ((*(u32 *)((u8 *)data_02152cd8 + 0xfc) & 1) != 0) {
                func_020776d4(0x1c, data_02152db8, 3);
                func_020776d4(0x1a, data_02152d94, 9);
                func_020776d4(0x19, local_8c + 3, 0xc);
            } else {
                if ((*(u32 *)((u8 *)data_02152cd8 + 0xfc) & 2) != 0) {
                    func_020776d4(0x19, local_8c + 3, 0xc);
                } else {
                    puVar6 = func_020746a0();
                    func_020776d4(0x19, puVar6, 0xc);
                    func_020776d4(0x19, local_8c + 3, 0xc);
                }
            }
            func_020778d0();
            *(vu32 *)0x04000440 = 0;
            *(vu32 *)0x04000444 = 0;
            *(vu32 *)0x04000454 = 0;
            do {
                iVar8 = func_0206a33c(auStack_50);
            } while (iVar8 != 0);
            *(vu32 *)0x04000448 = 1;
            *(vu32 *)0x04000440 = 3;
            func_020776d4(0x16, auStack_50, 0x10);
            local_8c[0] = PackTexCoord(auStack_50[12] >> 4, auStack_50[13] >> 4);
            func_020776d4(0x22, local_8c, 1);
        }
        local_8c[1] = 2;
        func_020776d4(0x10, local_8c + 1, 1);
        local_8c[2] = 0x1e;
        func_020776d4(0x14, local_8c + 2, 1);
    }
    *param_1 = *param_1 + 3;
}
