#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_0215be48;
extern u8 *data_02159030;
extern s32 func_01ffdb08(s32 a);
extern s32 func_0202817c(s32 a);
extern s16 *func_0210f100(s32 a, s32 b);
extern s32 func_02090cac(u32 a, u32 b, s32 c);

s32 func_020b7674(s32 param_1)
{
    s32 iVar1;
    s32 iVar3;
    s16 *psVar2;
    u8 *q;

    iVar3 = 0;
    if (param_1 == 0x30002) goto caseA;
    if (param_1 != 0x30006) goto done;
    goto caseB;
caseA:
    iVar1 = func_01ffdb08(*(s16 *)(data_0215942c + 14));
    if (iVar1 != 0) {
        iVar3 = func_0202817c(iVar1) + 120;
    }
    goto done;
caseB:
    q = data_0215be48 + 0x4800;
    psVar2 = func_0210f100(*(s16 *)(q + 180), *(s16 *)(q + 182));
    iVar3 = func_02090cac(*(u32 *)(data_02159030 + 0x10), (u16)psVar2[3], iVar3);
done:
    return iVar3;
}
