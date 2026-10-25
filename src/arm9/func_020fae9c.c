#include "ctx.h"

typedef struct Obj {
    u8 pad0[12];
    s16 kind;
    u8 pad1[0x8c - 14];
    s32 slot[4];
    u8 pad2[0xb4 - 0x9c];
    s32 link;
} Obj;

extern u8 data_021332d8[];
extern u8 data_021332dc[];
extern u8 data_021332e0[];
extern u8 data_021332e4[];
extern u8 data_021332e8[];
extern u8 data_021332ec[];
extern u8 *data_02159030;

extern s32 func_0210e938(void);
extern void func_0207dbe0(s32 a, u32 b);
extern void func_0207dc3c(s32 a, u32 b);
extern u16 *func_02092a50(s32 a, u32 b);
extern void func_02101280(s32 a, u32 b);
extern u16 *func_02090cac(s32 a, u32 b, s32 c);
extern void func_02101118(s32 a, s32 b, u32 c, u32 d, u16 *e);
extern void func_0208b604(s32 *a, u32 b, u32 c, s32 *d);
extern void func_0210f14c(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_020fc310(u32 a, s32 b);


static inline void PutNum(u16 *s, u16 *num, s32 v, u16 pad)
{
    s[0] = num[0];
    s[1] = num[1];
    if (v < 10) {
        s[1] = s[0];
        s[0] = pad;
    }
}
void func_020fae9c(Obj *param_1)
{
    u16 uVar1;
    u16 sVar2;
    s32 iVar3;
    u16 *puVar4;
    s32 k;
    s32 *piVar5;
    u16 *psVar6;
    s32 iVar7;
    u32 uVar9;
    s32 local_148;
    u8 *pbVar8;
    u8 *local_144;
    u8 *local_140;
    u8 *local_13c;
    u8 *local_138;
    u8 *local_134;
    s32 local_114;
    s32 local_100;
    s32 local_f4;
    s32 local_e8;
    s32 t;
    u16 dig[7][3];
    s32 info[3];
    u16 local_a8[66];

    iVar3 = func_0210e938();
    func_0207dbe0(iVar3, 0x4e464948);
    iVar3 = func_0210e938();
    func_0207dc3c(iVar3, 0x4e464948);
    local_144 = data_021332d8;
    local_140 = data_021332e0;
    local_13c = data_021332e4;
    local_138 = data_021332e8;
    local_134 = data_021332dc;
    local_148 = 0;
    local_100 = 0;
    local_f4 = 0;
    local_114 = 0;
    local_e8 = 0;
    pbVar8 = data_021332ec;
    do {
        puVar4 = func_02092a50(param_1->kind, *local_144);
        func_02101280(0, *pbVar8);
        func_02101280(0, *local_140);
        if (*puVar4 == 0xffff) {
            puVar4 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x586, 0);
            func_02101118(0, param_1->link, *pbVar8, *local_13c, puVar4);
            puVar4 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x587, 0);
            func_02101118(0, param_1->link, *local_140, *local_138, puVar4);
            param_1->slot[local_148] = 0;
        } else {
            k = local_114;
            func_02101118(k, param_1->link, *pbVar8, *local_13c, puVar4 + 2);
            param_1->slot[local_148] = 1;
            piVar5 = (s32 *)func_0210e938();
            func_0208b604(piVar5, puVar4[0], ((u8 *)puVar4)[2], info);
            func_0210f14c(2, *local_134, local_148 + 9, info[0], info[1], info[2], 0, 0);
            switch (param_1->kind) {
            case 0:
                if ((s16)puVar4[11] < 1) {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x588, 0);
                } else if ((s16)puVar4[11] == 1) {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x588, 1);
                } else {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x588, 2);
                }
                sVar2 = *psVar6;
                iVar3 = local_100;
                while (sVar2 != 0) {
                    local_a8[iVar3] = psVar6[iVar3];
                    sVar2 = psVar6[iVar3 + 1];
                    iVar3++;
                }
                local_a8[iVar3] = psVar6[iVar3];
                uVar1 = local_a8[0];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                uVar9 = (u32)(s16)puVar4[11];
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[0]);
                {
                    u16 *pa;
                    local_a8[k] = dig[0][0];
                    pa = local_a8 + k;
                    pa[1] = dig[0][1];
                    if ((s32)uVar9 < 10) {
                        pa[1] = local_a8[k];
                        local_a8[k] = 0x20;
                    }
                }
                break;
            case 1:
                psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x589, 0);
                sVar2 = *psVar6;
                iVar3 = local_f4;
                while (sVar2 != 0) {
                    local_a8[iVar3] = psVar6[iVar3];
                    sVar2 = psVar6[iVar3 + 1];
                    iVar3++;
                }
                local_a8[iVar3] = psVar6[iVar3];
                t = ((s16 *)puVar4)[12];
                t = t * 100;
                iVar7 = t / 60;
                uVar1 = local_a8[0];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                uVar9 = (u32)(iVar7 / 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[1]);
                PutNum(&local_a8[k], dig[1], uVar9, 0x20);
                k += 2;
                uVar1 = local_a8[k];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                uVar9 = (u32)(iVar7 % 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[2]);
                PutNum(&local_a8[k], dig[2], uVar9, 0x30);
                k += 2;
                uVar1 = local_a8[k];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                uVar9 = (u32)((-(s32)(s16)puVar4[11]) / 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[3]);
                PutNum(&local_a8[k], dig[3], uVar9, 0x20);
                k += 2;
                uVar1 = local_a8[k];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                iVar7 = -(s32)(s16)puVar4[11];
                uVar9 = (u32)(iVar7 % 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[4]);
                {
                    u16 *pa;
                    local_a8[k] = dig[4][0];
                    pa = local_a8 + k;
                    pa[1] = dig[4][1];
                    if ((s32)uVar9 < 10) {
                        pa[1] = local_a8[k];
                        local_a8[k] = 0x30;
                    }
                }
                break;
            case 2:
                if ((s16)puVar4[11] < 100) {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x58a, 0);
                } else if ((s16)puVar4[11] == 100) {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x58a, 1);
                } else {
                    psVar6 = func_02090cac(*(s32 *)((u8 *)data_02159030 + 4), 0x58a, 2);
                }
                sVar2 = *psVar6;
                iVar3 = local_e8;
                while (sVar2 != 0) {
                    local_a8[iVar3] = psVar6[iVar3];
                    sVar2 = psVar6[iVar3 + 1];
                    iVar3++;
                }
                local_a8[iVar3] = psVar6[iVar3];
                uVar1 = local_a8[0];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                uVar9 = (u32)((s16)puVar4[11] / 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[5]);
                PutNum(&local_a8[k], dig[5], uVar9, 0x20);
                k += 2;
                uVar1 = local_a8[k];
                while (uVar1 != 0x30) {
                    k++;
                    uVar1 = local_a8[k];
                }
                iVar7 = (s16)puVar4[11];
                uVar9 = (u32)(iVar7 % 100);
                if (99 < (s32)uVar9) uVar9 = 99;
                func_020fc310(uVar9, (s32)dig[6]);
                {
                    u16 *pa;
                    local_a8[k] = dig[6][0];
                    pa = local_a8 + k;
                    pa[1] = dig[6][1];
                    if ((s32)uVar9 < 10) {
                        pa[1] = local_a8[k];
                        local_a8[k] = 0x30;
                    }
                }
                break;
            }
            func_02101118(0, param_1->link, *local_140, *local_138, local_a8);
        }
        pbVar8++;
        local_144++;
        local_140++;
        local_13c++;
        local_138++;
        local_134++;
        local_148++;
    } while (local_148 < 4);
}
