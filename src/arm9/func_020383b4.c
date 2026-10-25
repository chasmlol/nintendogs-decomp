#include "ctx.h"

extern u8 *data_02159468;
extern u8 *data_02159428;
extern u32 data_0213b9fc[];
extern u8 data_02136a14[];

extern s32 func_02038940(u8 *p, u32 n);

u32 func_020383b4(u8 *param_1)
{
    u32 hv;
    s32 idx;
    u32 ent;
    s32 iVar4;
    s32 iVar6;
    s32 iVar5;
    s32 k;
    s16 bucket;
    s32 res;
    s32 bound;
    u8 *row;
    u8 *sp9;
    u8 *gp;
    s32 c;

    idx = (s16)(*(s16 *)(param_1 + 0x13e) - 3);
    if (idx < 0) {
        goto zero;
    }
    if (*(s16 *)(*(u8 **)&data_02159468 + 0x20) > idx) {
        goto load;
    }
zero:
    ent = 0;
    goto have;
load:
    ent = *(u32 *)(*(u8 **)&data_02159468 + idx * 4 + 4);
have:
    if (ent == 0) {
        goto ret0;
    }
    iVar4 = func_02038940(param_1, ent);
    bound = (iVar4 << 4) >> 16;
    sp9 = *(u8 **)(param_1 + 0x9e8);
    gp = *(u8 **)&data_02159428;
    hv = data_0213b9fc[*(u16 *)(gp + 6)];
    iVar6 = *(s32 *)(sp9 + 0xc);
    if (iVar6 < 0xccd) {
        bucket = 0;
    } else if (iVar6 <= 0x119a) {
        bucket = 1;
    } else {
        bucket = 2;
    }
    row = data_02136a14 + hv * 36 + bucket * 12;
    k = 5;
    do {
        iVar5 = *(s16 *)(row + k * 2);
        if (iVar5 >= 0 && iVar5 <= bound) {
            break;
        }
        k = (s16)(k - 1);
    } while (k > 0);
    switch (k) {
    case 0:
        res = 0;
        break;
    case 1:
        res = 1;
        break;
    case 2:
        res = 2;
        break;
    default:
        res = 3;
        break;
    }
    c = *(s8 *)(param_1 + 139);
    if (c == 1) {
        goto c1;
    }
    if (c == 4) {
        goto zr;
    }
    if (c != 5) {
        return res;
    }
zr:
    return 0;
c1:
    res = res + 1;
    if (res >= 4) {
        res = res - 1;
    }
    return res;
ret0:
    return 0;
}
