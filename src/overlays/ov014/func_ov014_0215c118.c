#include "ctx.h"

typedef struct { u16 v; } H16;
typedef struct { vu16 v; } S2;
typedef volatile s32 vs32;
typedef struct { s16 lo : 12; u16 b : 2; u16 c : 2; } BF;

extern u8 data_0214efdc[];
extern u32 data_ov014_0215c7c0;
extern u8 data_0214f004[];
extern u32 data_02159058;
extern void func_0208f6ac(s32 a);
extern void func_02091eec(s32 a);
extern s32 func_02091080(s32 a);
extern void func_02091d80(s32 a);
extern void func_0206c7bc(s32 a, s32 b, s32 c);
extern void func_02085fa4(s32 *a, s32 *b, BF c, BF d, s32 e, s32 f, u16 *g, s32 h);
extern u16 *func_02090cdc(s32 a, u32 b);

void func_ov014_0215c118(void)
{
    u32 uVar10;
    s16 sVar1;
    u32 *piVar2;
    s32 iVar3;
    u16 *puVar4;
    u16 *puVar5;
    u32 uVar6;
    u32 uVar7;
    s32 *piVar9;
    s32 *piVar8;
    BF local_38;
    BF local_32;
    BF local_20;
    BF local_22;
    u32 sv7;
    u32 *pe;

    if ((u16)(*(u16 *)data_0214efdc & 0x40) != 0) {
        *(s16 *)data_ov014_0215c7c0 = *(s16 *)data_ov014_0215c7c0 + 1;
    }
    if ((u16)(*(u16 *)data_0214efdc & 0x80) != 0) {
        *(s16 *)data_ov014_0215c7c0 = *(s16 *)data_ov014_0215c7c0 - 1;
    }
    func_0208f6ac(*(s32 *)(data_ov014_0215c7c0 + 4));
    if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
        func_02091eec(data_ov014_0215c7c0 + 0x38);
    }
    iVar3 = func_02091080(data_ov014_0215c7c0 + 0x38);
    puVar4 = (u16 *)data_ov014_0215c7c0;
    sVar1 = puVar4[0x1c];
    if (sVar1 == 3) {
        if ((*(u16 *)(data_0214f004 + 2) & 1) != 0) {
            puVar4[0x3e] = 1;
        }
    } else if (sVar1 != 4) {
        if (sVar1 == 5) {
            if ((u16)(*(u16 *)(data_0214efdc + 2) & 1) != 0) {
                puVar4[0x40] = (u16)*(s16 *)puVar4;
            }
        } else if (sVar1 == 2) {
            if ((u16)(*(u16 *)(data_0214efdc + 2) & 1) != 0) {
                func_02091d80((s32)(puVar4 + 0x1c));
            }
        } else {
            if (puVar4[0x1d] == 2) {
                goto A2;
            }
            if (puVar4[0x1d] != 3) {
                goto B2;
            }
A2:
            {
                u32 pp = *(u32 *)(puVar4 + 0x1cc);
                vu16 t0;
                t0 = 0;
                func_0206c7bc(t0, *(s32 *)pp, *(s32 *)(pp + 0x10));
            }
B2:
            ;
        }
    }
    if (iVar3 != 0) {
        S2 z0 = {0};
        *(u16 *)&local_38 = z0.v;
        {
            S2 z1 = {0};
            *(u16 *)&local_32 = z1.v;
        }
        if ((*(u16 *)(data_ov014_0215c7c0 + 0x40) & 1) != 0) {
            local_38.lo = 0x40;
            local_38.b = 0;
        }
        iVar3 = *(vs32 *)&data_ov014_0215c7c0;
        func_02085fa4((s32 *)data_02159058, *(s32 **)(iVar3 + 0x398), local_38, local_32, 1, 1,
                      (u16 *)(iVar3 + 0x92), (s32)*(s16 *)(iVar3 + 0x4c));
    }
    piVar2 = (u32 *)&data_ov014_0215c7c0;
    if (*(u16 *)(*piVar2 + 0x3a) != 5) {
        return;
    }
    {
        S2 z2 = {0};
        *(u16 *)&local_20 = z2.v;
        {
            S2 z3 = {0};
            *(u16 *)&local_22 = z3.v;
        }
    }
    uVar10 = 0;
    sv7 = 0x40;
    do {
        iVar3 = *piVar2;
        pe = (u32 *)iVar3 + uVar10;
        uVar6 = pe[33];
        local_22.lo = (s16)sv7;
        if (uVar6 != 0xffffffff) {
            piVar9 = *(s32 **)(iVar3 + 0x398);
            piVar8 = (s32 *)data_02159058;
            puVar5 = func_02090cdc(iVar3 + 0xc, uVar6);
            func_02085fa4(piVar8, piVar9, local_20, local_22, 1, 1, puVar5, (s32)*(s16 *)(iVar3 + 0x4c));
        }
        uVar10 = uVar10 + 1;
        sv7 = sv7 + 0xc;
    } while (uVar10 < 3);
}
