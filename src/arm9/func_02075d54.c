#include "ctx.h"

extern u8 data_0213e678[];
extern u8 data_0213e684[];
extern u8 data_0213e654[];
extern u8 data_02152cd8[];
extern u8 data_02152d24[];
extern u8 data_0213e64c[];
extern u8 data_0213e648[];

extern void func_020776d4(s32, void *, s32);
extern void func_020778d0(void);
extern s32 func_0206a33c(void *);
extern void *func_020745f8(void);
extern void *func_020745b4(void);
extern void *func_020746a0(void);
extern void func_02066ba8(void *, void *);
extern void func_02067404(void *, void *, void *);
extern s32 func_02067c30(void *);
extern void func_02067af0(void *, void *);
extern void func_0206c81c(void *, void *, s32);

typedef struct {
    u32 local_f0;
    u32 local_ec;
    s32 aiStack_e8[4];
    u32 uStack_d8;
    s32 local_d4;
    s32 local_d0;
    u32 pad0;
    u32 auStack_c8[4];
    u32 local_b8;
    u32 local_b4;
    u32 local_b0;
    u32 pad1;
    u32 auStack_a8[16];
    u32 auStack_68[17];
} Locals;

void func_02075d54(s32 *param_1, s32 param_2)
{
    s32 iVar9;
    u32 *puVar6;
    s32 *piVar2;
    u32 *puVar3;
    s32 iVar4;
    u32 *puVar5;
    u32 *puVar7;
    u32 uVar8;
    u8 cVar10;
    Locals L;

    iVar9 = 2;
    puVar6 = (u32 *)data_0213e678;
    piVar2 = (s32 *)data_0213e684;
    puVar3 = (u32 *)data_0213e654;
    if ((param_1[2] & 0x200) == 0) {
        goto BIG;
    }
    if (param_2 == 0x40 || param_2 == 0x60) {
        iVar9 = iVar9 + 1;
    }
    if (param_2 == 0x20 || param_2 == 0x60) {
        iVar9 = iVar9 + 1;
    }
    *param_1 = *param_1 + iVar9;
    return;
BIG:
    if ((param_2 == 0x40 || param_2 == 0x60) && (iVar9 = iVar9 + 1, (param_1[2] & 0x100) == 0)) {
        if (param_2 == 0x40) {
            L.local_f0 = *(u8 *)(*param_1 + 2);
        } else {
            L.local_f0 = *(u8 *)(*param_1 + 3);
        }
        func_020776d4(0x14, &L.local_f0, 1);
    }
    if (param_1[0xb] != 0) {
        cVar10 = *(u8 *)&param_1[0x25];
    } else {
        cVar10 = 0;
    }
    if (cVar10 == 1) {
        param_1[2] = param_1[2] & ~0x40;
        ((void (*)(s32 *))param_1[0xb])(param_1);
        if (param_1[0xb] != 0) {
            cVar10 = *(u8 *)&param_1[0x25];
        } else {
            cVar10 = 0;
        }
        uVar8 = param_1[2] & 0x40;
    } else {
        uVar8 = 0;
    }
    if (((param_1[2] & 0x100) == 0) && (uVar8 == 0)) {
        func_020778d0();
        puVar5 = (u32 *)0x04000400;
        *puVar5 = 0x151110;
        *puVar5 = 0;
        *puVar5 = 0;
        do {
            iVar4 = func_0206a33c(L.aiStack_e8);
        } while (iVar4 != 0);
        if ((*(u32 *)(data_02152cd8 + 0xfc) & 1) != 0) {
            puVar5 = (u32 *)func_020745f8();
            func_02066ba8(puVar5, L.auStack_a8);
            func_02067404(L.aiStack_e8, L.auStack_a8, L.aiStack_e8);
        } else {
            if ((*(u32 *)(data_02152cd8 + 0xfc) & 2) != 0) {
                func_02066ba8(data_02152d24, L.auStack_68);
                func_02067404(L.aiStack_e8, L.auStack_68, L.aiStack_e8);
            }
        }
        puVar6[0] = L.local_b8;
        puVar6[1] = L.local_b4;
        puVar6[2] = L.local_b0;
        iVar4 = func_02067c30(L.aiStack_e8);
        piVar2[0] = iVar4;
        iVar4 = func_02067c30(&L.uStack_d8);
        piVar2[1] = iVar4;
        iVar4 = func_02067c30(L.auStack_c8);
        piVar2[2] = iVar4;
        if (L.local_d4 != 0 || L.local_d0 != 0) {
            func_02067af0(&L.uStack_d8, puVar3 + 3);
            puVar3[7] = -puVar3[5];
            puVar3[8] = puVar3[4];
        } else {
            func_02067af0(L.auStack_c8, puVar3 + 6);
            puVar3[5] = -puVar3[7];
            puVar3[4] = puVar3[8];
        }
        if ((*(u32 *)(data_02152cd8 + 0xfc) & 1) != 0) {
            *(u32 *)0x04000400 = 0x171012;
            func_0206c81c(data_0213e64c, (void *)0x04000400, 8);
            puVar7 = (u32 *)func_020745b4();
            func_0206c81c(puVar7, (void *)0x04000400, 0x30);
            *(u32 *)0x04000400 = 0x1b19;
            func_0206c81c(data_0213e654, (void *)0x04000400, 0x3c);
        } else {
            if ((*(u32 *)(data_02152cd8 + 0xfc) & 2) != 0) {
                *(u32 *)0x04000400 = 0x171012;
                func_0206c81c(data_0213e64c, (void *)0x04000400, 8);
                puVar7 = (u32 *)func_020746a0();
                func_0206c81c(puVar7, (void *)0x04000400, 0x30);
                *(u32 *)0x04000400 = 0x1b19;
                func_0206c81c(data_0213e654, (void *)0x04000400, 0x3c);
            } else {
                func_0206c81c(data_0213e648, (void *)0x04000400, 0x48);
            }
        }
    }
    if (cVar10 == 3) {
        param_1[2] = param_1[2] & ~0x40;
        ((void (*)(s32 *))param_1[0xb])(param_1);
        uVar8 = param_1[2] & 0x40;
    } else {
        uVar8 = 0;
    }
    if (((param_2 == 0x20 || param_2 == 0x60) && (iVar9 = iVar9 + 1, uVar8 == 0)) &&
        ((param_1[2] & 0x100) == 0)) {
        L.local_ec = *(u8 *)(*param_1 + 2);
        func_020776d4(0x13, &L.local_ec, 1);
    }
    *param_1 = *param_1 + iVar9;
}
