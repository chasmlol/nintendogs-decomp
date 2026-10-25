#include "ctx.h"

extern u32 data_021425dc;
extern u8 *data_02159444;
extern u8 *data_02159030;
extern u8 data_0212f720;
extern s32 *func_02094124(u8 *p);
extern s32 *func_0208fccc(u32 a);
extern s32 *func_02090cac(u32 a, u32 b, u32 c);

s32 *func_020b8e1c(u32 param_1)
{
    s32 *piVar1;
    s32 *piVar2;

    piVar2 = (s32 *)&data_021425dc;
    switch (param_1) {
    case 0x30000:
        piVar1 = func_02094124(*(u8 **)(data_02159444 + 0x140));
        if (piVar1 != NULL) {
            piVar2 = piVar1 + 3;
        }
        break;
    case 0x30003:
        piVar2 = func_0208fccc(*(u16 *)(*(u8 **)(data_02159444 + 0x13c) + 2));
        break;
    case 0x30006:
        piVar2 = func_02090cac(*(u32 *)(data_02159030 + 4),
                               *(u32 *)(&data_0212f720 + *(u16 *)(*(u8 **)(data_02159444 + 0x13c) + 2) * 28), 0);
        break;
    }
    return piVar2;
}
