#include "ctx.h"
extern u8 *func_01ffdb08(s32 a);
extern s32 func_0202817c(u8 *a);
extern u8 func_02028100(u8 *a);
extern s32 func_0208fc60(u32 a, u32 b);
s32 func_020ae564(s32 param_1, u32 param_2)
{
    s32 iVar3;
    u8 *iVar2;
    u8 bVar1;
    iVar3 = 0;
    switch (param_1) {
    case 0x00030002:
        iVar2 = func_01ffdb08(0);
        if (iVar2 != NULL) {
            iVar3 = func_0202817c(iVar2);
            iVar3 = iVar3 + 0x78;
        }
        break;
    case 0x00030005:
        iVar2 = func_01ffdb08(0);
        if (iVar2 != NULL) {
            bVar1 = func_02028100(iVar2);
            iVar3 = func_0208fc60((u32)bVar1, param_2);
        }
        break;
    }
    return iVar3;
}
