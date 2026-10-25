#include "ctx.h"

typedef struct {
    u8 pad[4];
    u16 f4;
} Obj04;

extern Obj04 data_02159010;
extern u8 data_021418c0[];
extern u8 data_021418c4[];
extern u8 data_021418c8[];
extern u8 data_021418cc[];
extern u8 data_021418d0[];
extern u8 data_021418d4[];
extern u8 data_021418e4[];

void func_0205f050(u8 *buf, s32 n, u8 *fmt, ...);

void func_02090fcc(u8 *param_1, s32 param_2, u32 param_3)
{
    u32 uVar1;

    switch (data_02159010.f4) {
    case 2:
        uVar1 = (u32)data_021418c0;
        break;
    case 3:
        uVar1 = (u32)data_021418c4;
        break;
    case 4:
        uVar1 = (u32)data_021418c8;
        break;
    case 5:
        uVar1 = (u32)data_021418cc;
        break;
    default:
        uVar1 = (u32)data_021418d0;
        break;
    }
    if (uVar1 != 0) {
        func_0205f050(param_1, param_2, data_021418d4, uVar1, param_3);
        return;
    }
    func_0205f050(param_1, param_2, data_021418e4, param_3);
}
