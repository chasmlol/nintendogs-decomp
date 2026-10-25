#include "ctx.h"

extern s32 data_0213e630[];
extern s32 data_0213e63c[];
extern u8 data_02152cd8[];
extern u8 data_02152d24[];
extern u8 data_0213e604[];
extern u8 data_0213e60c[];
extern u8 data_0213e600[];

extern void func_020776d4(u32 a, void *b, u32 c);
extern void func_020778d0(void);
extern s32 func_0206a33c(void *a);
extern void *func_020745f8(void);
extern void *func_020745b4(void);
extern void *func_020746a0(void);
extern void func_02066ba8(void *a, void *b);
extern void func_02067404(void *a, void *b, void *c);
extern s32 func_02067c30(void *a);
extern void func_0206c81c(void *a, void *b, u32 c);

typedef struct {
    u32 local_e8;
    u32 local_e4;
    s32 aiStack_e0[4];
    s32 aiStack_d0[4];
    s32 aiStack_c0[4];
    s32 local_b0;
    s32 local_ac;
    s32 local_a8;
    u32 pad68;
    u32 auStack_a0[16];
    u32 auStack_60[16];
} Frame;

#define local_e8 (F.local_e8)
#define local_e4 (F.local_e4)
#define aiStack_e0 (F.aiStack_e0)
#define aiStack_d0 (F.aiStack_d0)
#define aiStack_c0 (F.aiStack_c0)
#define local_b0 (F.local_b0)
#define local_ac (F.local_ac)
#define local_a8 (F.local_a8)
#define auStack_a0 (F.auStack_a0)
#define auStack_60 (F.auStack_60)
#define MMIO400 (*(vu32 *)0x04000400)

void func_020760ec(s32 *param_1, s32 param_2)
{
    Frame F;
    s32 iVar9;
    s32 iVar3;
    s32 iVar5;
    u32 uVar8;
    u8 cVar10;
    s32 *puVar6;
    s32 *piVar2;

    iVar9 = 2;
    puVar6 = data_0213e630;
    piVar2 = data_0213e63c;
    if ((param_1[2] & 0x200) != 0) {
    if (param_2 == 0x40 || param_2 == 0x60) {
        iVar9 = iVar9 + 1;
    }
    if (param_2 == 0x20 || param_2 == 0x60) {
        iVar9 = iVar9 + 1;
    }
    *param_1 = *param_1 + iVar9;
    return;
    }
        if ((param_2 == 0x40 || param_2 == 0x60) && (iVar9 = iVar9 + 1, (param_1[2] & 0x100) == 0)) {
            if (param_2 == 0x40) {
                local_e8 = *(u8 *)(*param_1 + 2);
            } else {
                local_e8 = *(u8 *)(*param_1 + 3);
            }
            func_020776d4(0x14, &local_e8, 1);
        }
        if (param_1[10] != 0) {
            cVar10 = *(u8 *)((u8 *)param_1 + 0x93);
        } else {
            cVar10 = 0;
        }
        if (cVar10 == 1) {
            param_1[2] = param_1[2] & ~0x40;
            ((void (*)(s32 *))param_1[10])(param_1);
            if (param_1[10] != 0) {
                cVar10 = *(u8 *)((u8 *)param_1 + 0x93);
            } else {
                cVar10 = 0;
            }
            uVar8 = param_1[2] & 0x40;
        } else {
            uVar8 = 0;
        }
        if ((param_1[2] & 0x100) == 0 && uVar8 == 0) {
            func_020778d0();
            MMIO400 = 0x00151110;
            MMIO400 = 0;
            MMIO400 = 0;
            do {
                iVar3 = func_0206a33c(aiStack_e0);
            } while (iVar3 != 0);
            if ((*(u32 *)(data_02152cd8 + 0xfc) & 1) != 0) {
                func_02066ba8(func_020745f8(), auStack_a0);
                func_02067404(aiStack_e0, auStack_a0, aiStack_e0);
            } else if ((*(u32 *)(data_02152cd8 + 0xfc) & 2) != 0) {
                func_02066ba8(data_02152d24, auStack_60);
                func_02067404(aiStack_e0, auStack_60, aiStack_e0);
            }
            puVar6[0] = local_b0;
            puVar6[1] = local_ac;
            puVar6[2] = local_a8;
            piVar2[0] = func_02067c30(aiStack_e0);
            piVar2[1] = func_02067c30(aiStack_d0);
            piVar2[2] = func_02067c30(aiStack_c0);
            if ((*(u32 *)(data_02152cd8 + 0xfc) & 1) != 0) {
                MMIO400 = 0x00171012;
                func_0206c81c(data_0213e604, (void *)0x04000400, 8);
                func_0206c81c(func_020745b4(), (void *)0x04000400, 0x30);
                MMIO400 = 0x1b19;
                func_0206c81c(data_0213e60c, (void *)0x04000400, 0x3c);
            } else if ((*(u32 *)(data_02152cd8 + 0xfc) & 2) != 0) {
                MMIO400 = 0x00171012;
                func_0206c81c(data_0213e604, (void *)0x04000400, 8);
                func_0206c81c(func_020746a0(), (void *)0x04000400, 0x30);
                MMIO400 = 0x1b19;
                func_0206c81c(data_0213e60c, (void *)0x04000400, 0x3c);
            } else {
                func_0206c81c(data_0213e600, (void *)0x04000400, 0x48);
            }
        }
        if (cVar10 == 3) {
            param_1[2] = param_1[2] & ~0x40;
            ((void (*)(s32 *))param_1[10])(param_1);
            uVar8 = param_1[2] & 0x40;
        } else {
            uVar8 = 0;
        }
        if ((param_2 == 0x20 || param_2 == 0x60) &&
            (iVar9 = iVar9 + 1, uVar8 == 0 && (param_1[2] & 0x100) == 0)) {
            local_e4 = *(u8 *)(*param_1 + 2);
            func_020776d4(0x13, &local_e4, 1);
        }
        *param_1 = *param_1 + iVar9;
        return;
}
#undef local_e8
#undef local_e4
#undef aiStack_e0
#undef aiStack_d0
#undef aiStack_c0
#undef local_b0
#undef local_ac
#undef local_a8
#undef auStack_a0
#undef auStack_60
