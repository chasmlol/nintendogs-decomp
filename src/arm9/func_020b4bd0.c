#include "ctx.h"

extern u32 data_021425d4;
extern u32 data_0215942c;
extern s32 func_01ffdb08(s32 x);
extern s32 func_0202817c(s32 x);
extern u8 func_02028100(s32 x);
extern s32 func_0208fc60(u32 b, u32 p);

s32 func_020b4bd0(s32 param_1, u32 param_2)
{
    s32 iVar2;
    s32 iVar3;
    u8 bVar1;

    iVar3 = (s32)&data_021425d4;
    switch (param_1) {
    case 0x30002:
        if (param_2 == 0) {
            iVar2 = func_01ffdb08(*(s16 *)(*(u8 **)&data_0215942c + 14));
            if (iVar2 != 0) {
                iVar3 = func_0202817c(iVar2) + 0x78;
            }
        }
        break;
    case 0x30005:
        iVar2 = func_01ffdb08(*(s16 *)(*(u8 **)&data_0215942c + 14));
        if (iVar2 != 0) {
            bVar1 = func_02028100(iVar2);
            iVar3 = func_0208fc60(bVar1, param_2);
        }
        break;
    }
    return iVar3;
}
