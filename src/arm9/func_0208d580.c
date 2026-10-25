#include "ctx.h"

extern u8 data_02159010[];
extern u8 data_0213ed68[];
extern u8 data_0213ed6c[];
extern u8 data_0213ed70[];
extern u8 data_0213ed74[];
extern u8 data_0213ed78[];
extern u8 data_0213ed7c[];
extern u8 data_0213ed90[];
extern void func_0205f050(u32 a, u32 b, u32 c, u32 d, ...);

void func_0208d580(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 uVar1;

    switch (*(u16 *)(data_02159010 + 4)) {
    case 2:
        uVar1 = (u32)data_0213ed68;
        break;
    case 3:
        uVar1 = (u32)data_0213ed6c;
        break;
    case 4:
        uVar1 = (u32)data_0213ed70;
        break;
    case 5:
        uVar1 = (u32)data_0213ed74;
        break;
    default:
    case 0:
    case 1:
        uVar1 = (u32)data_0213ed78;
        break;
    }
    if (uVar1 != 0 && param_4 != 0) {
        func_0205f050(param_1, param_2, (u32)data_0213ed7c, uVar1, param_3);
        return;
    }
    func_0205f050(param_1, param_2, (u32)data_0213ed90, param_3);
}
