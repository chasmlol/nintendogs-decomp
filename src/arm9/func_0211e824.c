#include "ctx.h"

u8 *func_0210f100(s32 a, s32 b);
u32 func_0211c294(u8 *p, u32 v);
void func_02097b94(s32 a, s32 b, u32 c, s32 d, s32 e);

void func_0211e824(u32 *param_1)
{
    u8 *psVar1;
    u8 *q;
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    u32 uVar5;

    q = (u8 *)param_1 + 0x1cc0;
    psVar1 = func_0210f100(*(s16 *)(q + 8), *(s16 *)(q + 10));
    uVar5 = func_0211c294(psVar1, param_1[0x730]);
    iVar2 = 0;
    uVar3 = 0;
    if (param_1[0x730] == 2) {
        iVar4 = ((s32)param_1[1] + 1) * (s32)uVar5 + (s32)param_1[2];
        if (0x05f5e0ff < iVar4) {
            iVar2 = 0x2455;
            uVar3 = 1;
        }
    } else {
        if ((s32)param_1[1] >= 99 - (s32)param_1[0]) {
            iVar2 = 0x23f1;
        } else if ((s32)param_1[2] < ((s32)param_1[1] + 1) * (s32)uVar5) {
            iVar2 = 0x2329;
        }
    }
    if (iVar2 != 0) {
        func_02097b94(8, iVar2, uVar3, 0, 0);
    }
}
