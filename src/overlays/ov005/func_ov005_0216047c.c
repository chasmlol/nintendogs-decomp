#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 data_02152cd8[];
extern u32 *data_0214f464;

extern s32 func_02028130(u8 *p);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);
extern s32 func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_ov005_02167268(u8 *a, s32 *b);
extern void func_0203e908(u8 *p, u32 a);

#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_ov005_0216047c(u8 *param_1, s32 param_2)
{
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 local_20[3];
    u8 *g;
    u8 *tbl;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;

    s32 uVar6;
    s32 uVar7;
    s32 idx;
    s32 bVar2;
    s32 bVar3;
    u8 *entry;
    u32 *pp;
    u32 x;

    g = data_02159444;
    idx = (s16)*(s16 *)(g + 0x7a);
    if (idx < 0) {
        goto z1;
    }
    tbl = data_02159468;
    if ((s16)*(s16 *)(tbl + 0x20) > idx) {
        goto p1;
    }
z1:
    entry = 0;
    goto c1;
p1:
    entry = *(u8 **)(tbl + idx * 4 + 4);
c1:
    bVar2 = 0;
    if (entry != 0) {
        if (*(s16 *)(entry + 0x96) == 8) {
            bVar2 = 1;
        }
    }
    if (bVar2 == 0) {
        goto no;
    }
    if ((*(u16 *)(g + 0x84) & 1) == 0) {
        goto no;
    }
    if (idx < 0) {
        goto z2;
    }
    tbl = data_02159468;
    if ((s16)*(s16 *)(tbl + 0x20) > idx) {
        goto p2;
    }
z2:
    entry = 0;
    goto c2;
p2:
    entry = *(u8 **)(tbl + idx * 4 + 4);
c2:
    if (entry == 0) {
        goto no;
    }
    if (func_ov005_02167268(entry, aiStack_38) == 0) {
        goto no;
    }
    local_20[0] = *(s32 *)(data_02152cd8 + 0x54);
    local_20[1] = *(s32 *)(data_02152cd8 + 0x60);
    local_20[2] = *(s32 *)(data_02152cd8 + 0x6c);
    func_02067e68(aiStack_38, local_20, aiStack_2c);
    bVar3 = 1;
    goto chk;
no:
    bVar3 = 0;
chk:
    if (bVar3 == 0) {
        goto zero;
    }
    if (param_2 == 1) {
        iVar3 = func_02028130(param_1);
        iVar5 = func_02028130(param_1);
        iVar4 = func_0200b8a0((s32 *)(param_1 + 756), aiStack_38, aiStack_2c);
        uVar6 = FX(iVar5, iVar3);
        if (iVar4 < FX(uVar6, 1230)) {
            func_0203e908(param_1, 0x468);
            return 1;
        }
    }
    iVar3 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    iVar4 = func_0200b8a0((s32 *)(param_1 + 780), aiStack_38, aiStack_2c);
    uVar6 = FX(iVar5, iVar3);
    if (iVar4 < FX(uVar6, 820)) {
        switch (param_2) {
        case 1:
            func_0203e908(param_1, 0x46a);
            break;
        case 2:
            func_0203e908(param_1, 0x457);
            break;
        case 3:
            pp = data_0214f464;
            x = *pp * 0x10dcd + 1;
            *pp = x;
            if ((u16)((((u16)x) * 3u) >> 16) == 0) {
                func_0203e908(param_1, 0x45e);
            } else {
                func_0203e908(param_1, 0x457);
            }
            break;
        }
        return 1;
    }
    iVar3 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    iVar4 = func_0200b8a0((s32 *)(param_1 + 864), aiStack_38, aiStack_2c);
    uVar6 = FX(iVar5, iVar3);
    if (iVar4 < FX(uVar6, 2050)) {
        func_0203e908(param_1, 0x469);
        return 1;
    }
    iVar3 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    iVar4 = func_0200b8a0((s32 *)(param_1 + 840), aiStack_38, aiStack_2c);
    uVar6 = FX(iVar5, iVar3);
    if (iVar4 < FX(uVar6, 2050)) {
        switch (param_2) {
        case 1:
            func_0203e908(param_1, 0x467);
            break;
        case 2:
            func_0203e908(param_1, 0x456);
            break;
        case 3:
            pp = data_0214f464;
            x = *pp * 0x10dcd + 1;
            *pp = x;
            if ((u16)((((u16)x) * 3u) >> 16) == 0) {
                func_0203e908(param_1, 0x45a);
            } else {
                func_0203e908(param_1, 0x457);
            }
            break;
        }
        return 1;
    }
    iVar3 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    iVar4 = func_0200b8a0((s32 *)(param_1 + 900), aiStack_38, aiStack_2c);
    uVar6 = FX(iVar5, iVar3);
    if (iVar4 < FX(uVar6, 2050)) {
        switch (param_2) {
        case 1:
            func_0203e908(param_1, 0x467);
            break;
        case 2:
            func_0203e908(param_1, 0x456);
            break;
        case 3:
            pp = data_0214f464;
            x = *pp * 0x10dcd + 1;
            *pp = x;
            if ((u16)((((u16)x) * 3u) >> 16) == 0) {
                func_0203e908(param_1, 0x461);
            } else {
                func_0203e908(param_1, 0x457);
            }
            break;
        }
        return 1;
    }
    iVar3 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    iVar4 = func_0200b8a0((s32 *)(param_1 + 732), aiStack_38, aiStack_2c);
    uVar7 = FX(iVar5, iVar3);
    if (iVar4 < FX(uVar7, 1640)) {
        switch (param_2) {
        case 1:
            func_0203e908(param_1, 0x466);
            break;
        case 2:
            func_0203e908(param_1, 0x456);
            break;
        case 3:
            func_0203e908(param_1, 0x457);
            break;
        }
        return 1;
    }
zero:
    return 0;
}
