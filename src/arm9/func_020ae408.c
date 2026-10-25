#include "ctx.h"

/* Blocks are written in the target's address order and joined with gotos, so the dispatch
   branches, the out-of-line case bodies and the shared return match the listing. */
extern u8 data_0214246c[];
extern u8 *data_0215942c;
extern s32 func_01ffdb08(s32);
extern s32 func_0202817c(s32);
extern s32 *func_020941bc(s32);
extern s32 func_020bc14c(void);
extern u8 func_02028100(s32);
extern s32 *func_0208fc60(u8, s32);

s32 *func_020ae408(s32 param_1, s32 param_2)
{
    s32 p2c;
    s32 *piVar3;
    s32 iVar2;
    s32 iVar4;
    u16 *puVar5;
    s32 iVar6;

    p2c = param_2;
    piVar3 = (s32 *)data_0214246c;
    iVar6 = 0;
    if (param_1 == 0x30000) {
        goto caseA;
    }
    if (param_1 == 0x30002) {
        goto caseB;
    }
    if (param_1 != 0x30005) {
        goto ret;
    }
    goto caseC;
caseA:
    if (p2c != 1) {
        goto ret;
    }
    iVar6 = func_01ffdb08(*(s16 *)(data_0215942c + 0x1c));
    iVar6 = func_0202817c(iVar6);
    piVar3 = func_020941bc(iVar6);
    piVar3 = piVar3 + 3;
    goto ret;
caseB:
    if (p2c == 0) {
        goto loopB;
    }
    if (p2c != 1) {
        goto bdef;
    }
    goto elseB;
loopB:
    iVar4 = iVar6;
    puVar5 = (u16 *)(data_0215942c + 0x20);
    do {
        if ((*puVar5 & 4) != 0) {
            iVar6 = iVar4;
            break;
        }
        iVar4 = (s16)(iVar4 + 1);
        puVar5 = puVar5 + 10;
    } while (iVar4 < 3);
    goto bdef;
elseB:
    if (*(u16 *)data_0215942c == 0xb) {
        iVar6 = ((s16 *)data_0215942c)[14];
    }
bdef:
    iVar6 = func_01ffdb08(iVar6);
    iVar6 = func_0202817c(iVar6);
    piVar3 = (s32 *)(iVar6 + 0x78);
    goto ret;
caseC:
    iVar2 = func_020bc14c();
    if (iVar2 >= 0) {
        goto c1;
    }
    {
        u16 *puVar8;
        s32 iVar7;

        iVar7 = iVar6;
        puVar8 = (u16 *)(data_0215942c + 0x20);
        do {
            if ((*puVar8 & 4) != 0) {
                iVar6 = iVar7;
                break;
            }
            iVar7 = (s16)(iVar7 + 1);
            puVar8 = puVar8 + 10;
        } while (iVar7 < 3);
    }
    goto c2;
c1:
    iVar6 = iVar2;
c2:
    iVar2 = func_01ffdb08(iVar6);
    if (iVar2 != 0) {
        piVar3 = func_0208fc60(func_02028100(iVar2), p2c);
    }
ret:
    return piVar3;
}
