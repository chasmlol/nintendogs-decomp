#include "ctx.h"

extern u32 data_02159010;
extern u32 data_0213ea60;
extern u32 data_0213ea64;
extern u32 data_0213ea68;
extern u32 data_0213ea6c;
extern u32 data_0213ea70;
extern u32 data_0213ea74;
extern u32 data_0213ea90;
extern void func_0205f050();

void func_0208b3d4(int param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;
    switch (*(u16 *)((u8 *)&data_02159010 + 4)) {
    case 2:
        uVar1 = (u32)&data_0213ea60;
        break;
    case 3:
        uVar1 = (u32)&data_0213ea64;
        break;
    case 4:
        uVar1 = (u32)&data_0213ea68;
        break;
    case 5:
        uVar1 = (u32)&data_0213ea6c;
        break;
    default:
    case 0:
    case 1:
        uVar1 = (u32)&data_0213ea70;
        break;
    }
    if (uVar1 == 0) {
        goto Lzero;
    }
    func_0205f050(param_1, param_2, (u32)&data_0213ea74, uVar1, param_3);
    return;
Lzero:
    func_0205f050(param_1, param_2, (u32)&data_0213ea90, param_3);
}
