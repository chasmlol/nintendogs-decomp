#include "ctx.h"

extern u32 data_02152f3c;
extern u8 data_0212ac4c[];
extern u8 data_0212ac4d[];
extern u8 data_0212ac4e[];
extern u8 data_0212ac4f[];

extern void func_0206cae8(u32 *);

void func_020799c0(u32 *param_1)
{
    u32 V = data_02152f3c;
    u32 iVar6;
    u32 uVar9;
    u32 uVar8;
    u32 iVar3;
    u16 *puVar7;
    u16 uVar1;
    u16 *puVar4;
    u32 uVar5;
    u32 off;
    u32 w;
    u32 bt;
    iVar6 = *(u32 *)(V + 0xd4);
    off = *(u16 *)(iVar6 + 6);
    w = *(u16 *)(iVar6 + off);
    bt = *(u8 *)(*(u32 *)V + 1);
    iVar3 = *(u32 *)(iVar6 + off + w * bt + 4);
    uVar1 = *(u16 *)(iVar6 + iVar3);
    puVar7 = (u16 *)(iVar6 + iVar3);
    puVar4 = (u16 *)((u8 *)puVar7 + 4);
    if ((uVar1 & 1) == 0) {
        puVar4 = (u16 *)((u32)puVar4 + 12);
    }
    if ((uVar1 & 2) != 0) {
        goto flag2;
    }
    if ((uVar1 & 8) == 0) {
        goto fast;
    }
    iVar3 = (uVar1 & 0xf0) >> 4;
    uVar9 = (u32)(s16)puVar4[0];
    uVar8 = (u32)(s16)puVar4[1];
    func_0206cae8(param_1 + 10);
    if ((puVar7[0] & 0x100) != 0) {
        uVar5 = 0xfffff000;
    } else {
        uVar5 = 0x1000;
    }
    {
        u32 *q = param_1 + iVar3;
        q[10] = uVar5;
    }
    {
        u32 *q = param_1 + data_0212ac4c[iVar3 * 4];
        q[10] = uVar9;
    }
    {
        u32 *q = param_1 + data_0212ac4d[iVar3 * 4];
        q[10] = uVar8;
    }
    if ((puVar7[0] & 0x200) != 0) {
        uVar8 = -uVar8;
    }
    {
        u32 *q = param_1 + data_0212ac4e[(u32)iVar3 * 4];
        q[10] = uVar8;
    }
    if ((puVar7[0] & 0x400) != 0) {
        uVar9 = -uVar9;
    }
    {
        u32 *q = param_1 + data_0212ac4f[iVar3 << 2];
        q[10] = uVar9;
    }
    return;
fast:
    param_1[10] = (s32)(s16)puVar7[1];
    param_1[11] = (s32)(s16)puVar4[0];
    param_1[12] = (s32)(s16)puVar4[1];
    param_1[13] = (s32)(s16)puVar4[2];
    param_1[14] = (s32)(s16)puVar4[3];
    param_1[15] = (s32)(s16)puVar4[4];
    param_1[16] = (s32)(s16)puVar4[5];
    param_1[17] = (s32)(s16)puVar4[6];
    param_1[18] = (s32)(s16)puVar4[7];
    return;
flag2:
    *param_1 = *param_1 | 2;
    return;
}
