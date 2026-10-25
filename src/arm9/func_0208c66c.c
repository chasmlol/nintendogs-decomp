#include "ctx.h"

extern u8 data_02159010[];
extern u32 data_0213ecc4;
extern u32 data_0213ecc8;
extern u32 data_0213eccc;
extern u32 data_0213ecd0;
extern u32 data_0213ecd4;
extern u32 data_0213ecd8;
extern u32 data_0213ece8;
extern void func_0205f050();

void func_0208c66c(u8 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;

    switch (*(u16 *)(data_02159010 + 4)) {
    case 2:
        uVar1 = (u32)&data_0213ecc4;
        break;
    case 3:
        uVar1 = (u32)&data_0213ecc8;
        break;
    case 4:
        uVar1 = (u32)&data_0213eccc;
        break;
    case 5:
        uVar1 = (u32)&data_0213ecd0;
        break;
    case 0:
    case 1:
    default:
        uVar1 = (u32)&data_0213ecd4;
        break;
    }
    if (uVar1 != 0) {
        func_0205f050(param_1, param_2, &data_0213ecd8, uVar1, param_3);
        return;
    }
    func_0205f050(param_1, param_2, &data_0213ece8, param_3);
}
