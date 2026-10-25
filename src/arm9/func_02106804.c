#include "ctx.h"
extern u8 data_0215942c[];
extern u8 data_0215be9c[];
extern u8 *func_01ffdb08(s32 a);
extern u8 *func_0202817c(u8 *a);
extern void func_020fc310(s32 a, u8 *b);
s32 func_02106804(void)
{
    u8 *iVar2;
    u8 *iVar3;
    s16 sVar1;
    iVar2 = func_01ffdb08((s32)*(s16 *)(*(u8 **)data_0215942c + 0xe));
    iVar2 = func_0202817c(iVar2);
    iVar3 = NULL;
    sVar1 = *(s16 *)(*(u8 **)data_0215942c + 6);
    switch (sVar1) {
    case 0:
        iVar3 = iVar2 + 2000;
        break;
    case 1:
        iVar3 = iVar2 + 0x7d8;
        break;
    case 2:
        iVar3 = iVar2 + 0x7e0;
        break;
    }
    func_020fc310((s32)*(s16 *)(iVar3 + 4), data_0215be9c);
    return (s32)data_0215be9c;
}
