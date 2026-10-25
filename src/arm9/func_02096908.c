#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_propagation off

typedef struct { u8 pad[6]; u16 f; } FL;
extern u8 *data_02159034;
extern void func_0206c7d4(s32 a, s32 b, s32 c);

u32 func_02096908(u8 *param_1, s32 param_2, s32 param_3)
{
    u32 ret;
    u8 *pp;
    s32 pz;
    s32 t16;
    s32 w14;
    s32 iVar6;
    s32 iVar5;
    s32 iVar4;
    s32 iVar3;
    s32 iVar2;
    u8 *q;
    u8 *P;
    s32 *e;

    pp = param_1;
    iVar4 = *(s32 *)(pp + 4);
    iVar3 = iVar4 * param_2;
    t16 = *(s32 *)(pp + 0x10);
    w14 = *(s32 *)(pp + 0x14);
    iVar6 = t16 + iVar3;
    iVar2 = iVar6 + iVar4;
    q = (u8 *)(iVar2 - 8);
    pz = param_3;
    iVar5 = w14 + iVar3;
    ret = 0;
    if (pz != 0) {
        P = data_02159034;
        e = (s32 *)(P + 12 + *(s16 *)(P + 6) * 20);
        e[0] = *(s32 *)(pp + 8) + iVar3;
        e[1] = iVar6;
        e[2] = iVar5;
        e[3] = iVar4;
        e[4] = pz;
        P = data_02159034;
        *(s16 *)(P + 6) = *(s16 *)(P + 6) + 1;
        return ret;
    }
    if ((((FL *)q)->f & 2) == 0) {
        return ret;
    }
    ((FL *)q)->f = ((FL *)q)->f & ~2;
    ((FL *)q)->f = ret;
    func_0206c7d4(iVar6, iVar5, iVar4);
    P = data_02159034;
    e = (s32 *)(P + 12 + *(s16 *)(P + 6) * 20);
    e[0] = *(s32 *)(pp + 8) + iVar3;
    e[1] = iVar6;
    e[2] = iVar5;
    e[3] = iVar4;
    e[4] = pz;
    P = data_02159034;
    *(s16 *)(P + 6) = *(s16 *)(P + 6) + 1;
    return 1;
}
