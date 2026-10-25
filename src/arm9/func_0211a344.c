#include "ctx.h"

extern u8 *data_02159030;
extern u32 data_0214aa48;
extern s32 func_02090cac(s32 a, s32 b, s32 c);

s32 func_0211a344(void)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = *(s32 *)(data_02159030 + 4);
    iVar2 = 0;
    switch (data_0214aa48) {
    case 0:
        break;
    case 1:
        iVar2 = func_02090cac(iVar1, 0x57b, 0);
        break;
    case 2:
        iVar2 = func_02090cac(iVar1, 0x57c, 0);
        break;
    case 3:
        iVar2 = func_02090cac(iVar1, 0x57d, 0);
        break;
    case 4:
        iVar2 = func_02090cac(iVar1, 0x57e, 0);
        break;
    case 5:
        iVar2 = func_02090cac(iVar1, 0x57f, 0);
        break;
    }
    return iVar2;
}
