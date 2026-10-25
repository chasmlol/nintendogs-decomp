#include "ctx.h"

extern u8 data_02159010[];
extern u8 data_0213ec48[];
extern u8 data_0213ec4c[];
extern u8 data_0213ec50[];
extern u8 data_0213ec54[];
extern u8 data_0213ec58[];
extern u8 data_0213ec5c[];
extern u8 data_0213ec70[];
extern void func_0205f050();

void func_0208c320(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 uVar1 = 0;
    if (param_4 == 27) {
        switch (*(u16 *)(data_02159010 + 4)) {
        case 2:
            uVar1 = (u32)data_0213ec48;
            break;
        case 3:
            uVar1 = (u32)data_0213ec4c;
            break;
        case 4:
            uVar1 = (u32)data_0213ec50;
            break;
        case 5:
            uVar1 = (u32)data_0213ec54;
            break;
        default:
            uVar1 = (u32)data_0213ec58;
            break;
        }
    }
    if (uVar1 != 0) {
        func_0205f050(param_1, param_2, (u32)data_0213ec5c, uVar1, param_3);
        return;
    }
    func_0205f050(param_1, param_2, (u32)data_0213ec70, param_3);
}
