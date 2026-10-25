#include "ctx.h"

extern u32 data_02159424;
extern u32 data_0215942c;
extern u32 data_02159030;
s32 func_01ffdb08(s32 v);
u8 *func_0202817c(s32 v);
void func_02090cac(u32 a, u32 b, u32 c);

void func_02106884(u8 *param_1)
{
    s32 r4;
    u32 uVar3;
    u8 *iVar2;
    s16 sVar1;

    r4 = 1;
    if (param_1 == 0) {
        param_1 = *(u8 **)&data_02159424;
        r4 = *(s16 *)param_1;
    } else if (param_1 == (u8 *)1) {
        iVar2 = func_0202817c(func_01ffdb08(*(s16 *)(*(u8 **)&data_0215942c + 14)));
        sVar1 = *(s16 *)(*(u8 **)&data_0215942c + 6);
        if (sVar1 == 0) goto c0;
        if (sVar1 == 1) goto c1;
        if (sVar1 == 2) {
            r4 = *(s16 *)(iVar2 + 0x6c);
        }
        goto sw;
c0:
        r4 = *(s16 *)(iVar2 + 0x68);
        goto sw;
c1:
        r4 = *(s16 *)(iVar2 + 0x6a);
    }
sw:
    uVar3 = 0;
    switch (r4) {
    case 1:
        uVar3 = 0x57b;
        break;
    case 2:
        uVar3 = 0x57c;
        break;
    case 3:
        uVar3 = 0x57d;
        break;
    case 4:
        uVar3 = 0x57e;
        break;
    case 5:
        uVar3 = 0x57f;
        break;
    }
    func_02090cac(*(u32 *)(*(u8 **)&data_02159030 + 4), uVar3, 0);
}
