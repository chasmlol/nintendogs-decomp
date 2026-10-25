#include "ctx.h"

extern u8 *data_02159070;
extern u8 *data_02159144;
extern u8 data_02159198;
extern u32 data_02159074[];
extern void func_020e19c4(u8 *a, u8 *b, s32 c, s32 d);
extern void func_0209e534(s32 a);

void func_0209ab28(s32 param_1)
{
    u8 *iVar2;

    iVar2 = data_02159070;
    *(u16 *)(iVar2 + 0x4e30) = 1;
    func_020e19c4(data_02159144, iVar2, param_1, *(s16 *)((&data_02159198) + 0x32) + 0x100);
    func_0209e534(param_1);
    data_02159074[10] = 1;
    data_02159074[11] = 1;
    data_02159074[12] = 0;
    data_02159074[13] = 0;
}
