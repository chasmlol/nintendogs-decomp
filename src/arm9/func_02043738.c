#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u8 *data_02159444;
extern u8 *data_02159468;

void func_02043738(void)
{
    s32 kc;
    u8 *q;
    s32 b3;
    s32 r7;
    u8 *tab;
    s32 w;
    s32 iVar9;
    s8 i;
    s32 nv;
    s32 iVar8;
    s32 iVar7;
    u8 **pO;
    u8 *S;
    u8 *rec;
    u8 *tm;
    u8 *Sm;
    u8 *obj;
    u16 z;
    u16 two;

    z = 0;
    pO = &data_02159444;
    q = data_0214f464 + 4;
    *q = z;
    obj = *pO;
    iVar7 = *(s16 *)(obj + 0x7a);
    if (iVar7 < 0) goto ZR;
    tab = data_02159468;
    if (*(s16 *)(tab + 0x20) > iVar7) goto LK;
ZR:
    rec = 0;
    goto RC;
LK:
    rec = *(u8 **)(tab + iVar7 * 4 + 4);
RC:
    if (rec == 0) goto Z3;
    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) goto F8;
    kc = *(s16 *)(rec + 0x90);
    switch (kc) {
    case 0: case 1: case 2: case 3:
        goto Z0;
    case 4: case 5: case 6: case 7: case 8:
        goto C2;
    default:
        goto Z0;
    }

Z0:
    z = 0;
    pO = &data_0214f464;
    S = *pO;
    q = S + 4;
    *q = z;
    S = *pO;
    *(u16 *)(S + 0x28) = z;
    return;

C2:
    two = 2;
    z = 0;
    pO = &data_0214f464;
    S = *pO;
    q = S + 4;
    *q = two;
    S = *pO;
    *(u16 *)(S + 0x28) = z;
    return;

F8:
    kc = *(s16 *)(rec + 0x90);
    if (kc == 0) goto Z1;
    if (kc == 2) goto Z2;
    if (kc != 3) goto MAIN;
    goto Z2;

Z1:
    z = 0;
    pO = &data_0214f464;
    S = *pO;
    q = S + 4;
    *q = z;
    S = *pO;
    *(u16 *)(S + 0x28) = z;
    return;

Z2:
    two = 2;
    z = 500;
    pO = &data_0214f464;
    S = *pO;
    q = S + 4;
    *q = two;
    S = *pO;
    *(u16 *)(S + 0x28) = z;
    return;

MAIN:
    Sm = data_0214f464;
    tm = data_02159468;
    i = 0;
    for (;;) {
        if (i < 0 || i >= 3) {
            iVar8 = 0;
        } else {
            iVar8 = *(s32 *)(Sm + i * 4 + 0x54);
        }
        if (iVar8 != 0) {
            iVar9 = (s16)(*(s16 *)(iVar8 + 256 + 62) - 3);
            if (iVar9 < 0 || *(s16 *)(tm + 0x20) <= iVar9) {
                r7 = 0;
            } else {
                r7 = *(s32 *)(tm + iVar9 * 4 + 4);
            }
            if (r7 != 0) {
                b3 = 1;
            } else {
                b3 = (*(s32 *)(iVar8 + 0x94c) != 0);
            }
            if (b3) {
                Sm[4] = 2;
                S = data_0214f464;
                *(u16 *)(S + 0x28) = 200;
                return;
            }
        }
        i = i + 1;
        if (i >= 3) break;
    }
    w = *(u16 *)(Sm + 0x28);
    if (w == 0) return;
    *(u16 *)(Sm + 0x28) = w - 1;
    S = data_0214f464;
    S[4] = 2;
    return;

Z3:
    z = 0;
    pO = &data_0214f464;
    S = *pO;
    q = S + 4;
    *q = z;
    S = *pO;
    *(u16 *)(S + 0x28) = z;
    return;
}
