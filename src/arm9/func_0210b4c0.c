#include "ctx.h"

extern u32 data_02148130;
extern u32 data_02148140;
extern u32 data_02148154;
extern u32 data_02148168;
extern u32 data_0214817c;
extern u32 data_0214818c;
extern u32 data_021481a0;
extern u32 data_021481b4;
extern u32 data_021481c8;
extern u32 data_021481d8;
extern u32 data_021481ec;
extern u32 data_02148200;
extern u32 data_02148214;
extern u32 data_02148224;
extern u32 data_02148234;
extern u32 data_02148244;
extern void func_020fc684(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_0210b4c0(u32 param_1, u32 *param_2)
{
    s32 iVar1;
    param_2[1] = param_1;
    iVar1 = (s32)param_2[1];
    if (iVar1 < 1) {
        return;
    }
    if (4 < iVar1) {
        return;
    }
    switch (iVar1) {
    case 0:
        break;
    case 1:
        func_020fc684(0, (u32)&data_02148130, (u32)&data_02148140, (u32)&data_02148154, (u32)&data_02148168);
        return;
    case 2:
        func_020fc684(0, (u32)&data_0214817c, (u32)&data_0214818c, (u32)&data_021481a0, (u32)&data_021481b4);
        return;
    case 3:
        func_020fc684(0, (u32)&data_021481c8, (u32)&data_021481d8, (u32)&data_021481ec, (u32)&data_02148200);
        return;
    case 4:
        func_020fc684(0, (u32)&data_02148214, (u32)&data_02148224, (u32)&data_02148234, (u32)&data_02148244);
    }
    return;
}
