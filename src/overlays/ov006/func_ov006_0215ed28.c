#include "ctx.h"

typedef struct {
    u32 w[3];
} Vec3;

typedef struct {
    u32 w[6];
} Vec6;

extern u32 data_ov006_02165de4[6];
extern s16 data_02126868[];
extern u8 *data_02159444;
extern u8 *data_0214f464;

extern int func_020364a8(u8 *p);
extern void func_02067e34(int *a, int *b, int *c);
extern int func_02009d34(int *a, int *b, int *c);
extern int func_02009bd0(int *a, int *b);
extern void func_0203942c(u8 *p);
extern int func_02037450(u8 *p, int a);
extern int func_02027e4c(u8 *p, int a);
extern void func_02037f20(u8 *p, int a);
extern void func_0203e908(u8 *p, int a);
extern void func_ov006_021607d0(u8 *p, int a, int b, int c);
extern void func_ov006_02161344(u8 *p);

void func_ov006_0215ed28(u8 *param_1)
{
    u32 iVar2;
    u8 bVar9;
    s32 iVar8;
    int iVar7;
    s16 xv;
    int iVar4;
    int uVar6;
    int local_60[3];
    u32 yv;
    int local_54[3];
    int aiStack_48[3];
    int local_3c[6];

    iVar2 = func_020364a8(param_1);
    iVar8 = 0;
    asm { mov iVar7, iVar8 }
    uVar6 = 0;
    bVar9 = 0;
    if (iVar2 != 0) {
        u16 hw = *(u16 *)(iVar2 + 4);
        s32 el;
        iVar4 = hw >> 4;
        xv = data_02126868[iVar4 * 2];
        yv = data_02126868[iVar4 * 2 + 1];
        *(Vec6 *)local_3c = *(Vec6 *)data_ov006_02165de4;
        el = (s32)local_3c;
        el = ((s32 *)el)[*(s16 *)(param_1 + 0x148) - 17];
        uVar6 = ((((s64)el * el) + 0x800) >> 12);
        *(Vec3 *)(param_1 + 0x26c) = *(Vec3 *)(8 + iVar2);
        local_60[2] = yv;
        local_60[0] = xv;
        local_54[2] = xv;
        local_54[0] = -yv;
        local_60[1] = iVar8;
        local_54[1] = iVar8;
        iVar7 = 0x90000;
        func_02067e34((int *)(8 + iVar2), (int *)(param_1 + 0x2a0), aiStack_48);
        iVar8 = func_02009d34(aiStack_48, local_60, local_54);
        if (0 == iVar8) {
            bVar9 = 1;
        }
        if ((*(u16 *)(0x84 + data_02159444) & 1) != 0) {
            iVar8 = func_02009bd0((int *)(0x26c + param_1), (int *)(param_1 + 0x2a0));
            *(Vec3 *)(param_1 + 0x26c) = *(Vec3 *)((u32)0x74 + data_0214f464);
            func_0203942c(param_1);
            func_02037450(param_1, 0x310);
        } else {
            func_0203942c(param_1);
            iVar8 = func_02037450(param_1, 0x310);
        }
        iVar4 = func_02027e4c(param_1, 1);
        func_02037f20(param_1, iVar4);
    }
    if ((u8)bVar9 && iVar8 < uVar6) {
        func_0203e908(param_1, 0x4e9);
        return;
    }
    if (iVar8 > iVar7) {
        func_ov006_021607d0(param_1, iVar2, 0, 1);
        func_ov006_02161344(param_1);
        return;
    }
}
