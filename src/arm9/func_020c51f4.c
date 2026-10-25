#include "ctx.h"
#pragma opt_dead_assignments off

extern s32 data_02142b40;
extern s32 func_01ffdb08(s32);
extern BOOL func_02034f64(s32);
extern s32 func_02034f04(s32);
extern void func_02027668(s32, s32 *);
extern s32 func_02067c30(s32 *);
extern void func_02028194(s32);

void func_020c51f4(s32 *p)
{
    s32 arr[4];
    s32 *pb5;
    s32 *piVar8;
    s16 iVar7;
    s32 k;
    s32 *piVar6;
    s32 *piVar5;
    s32 iVar3;
    s32 one;
    s16 jVar7;
    s32 *pg;
    s32 zz;
    s32 iVar4;
    s32 *q;

    piVar8 = *(s32 **)((u8 *)p + 0x214);
    one = 1;
    iVar7 = 0;
    pg = &data_02142b40;
    arr[0] = 0;
    pb5 = piVar8 + 0x21;
    do {
        iVar3 = func_01ffdb08(iVar7);
        if (iVar3 != 0 && func_02034f64(iVar3) != 0) {
            q = piVar8 + iVar7;
            if (q[0x43] == 0 && q[0x46] == 0) {
                func_02027668(iVar3, &arr[1]);
                piVar6 = piVar8;
                piVar5 = pb5;
                k = arr[0];
                do {
                    iVar4 = arr[1] - piVar6[0];
                    if (iVar4 <= 0) {
                        iVar4 = -iVar4;
                    }
                    if (iVar4 < 0x1000) {
                        iVar4 = arr[3] - piVar6[2];
                        if (iVar4 <= 0) {
                            iVar4 = -iVar4;
                        }
                        if (iVar4 < 0x1000 && func_02067c30(piVar5) > data_02142b40) {
                            (piVar8 + iVar7)[0x43] = one;
                            break;
                        }
                    }
                    k = (s16)(k + 1);
                    piVar6 = piVar6 + 3;
                    piVar5 = piVar5 + 3;
                } while (k < 11);
            }
        }
        iVar7 = iVar7 + 1;
    } while (iVar7 <= 3);

    jVar7 = 0;
    zz = jVar7;
    do {
        iVar3 = func_01ffdb08(jVar7);
        if (iVar3 != 0 && func_02034f04(iVar3) != 0) {
            if ((piVar8 + jVar7)[0x43] == 1 && (piVar8 + jVar7)[0x46] == 0) {
                func_02028194(iVar3);
            }
            (piVar8 + jVar7)[0x46] = zz;
            (piVar8 + jVar7)[0x43] = zz;
        }
        jVar7 = jVar7 + 1;
    } while (jVar7 <= 3);
}
