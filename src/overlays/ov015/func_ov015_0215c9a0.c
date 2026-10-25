#include "ctx.h"

extern u32 data_ov015_0215ca88[3];
extern u32 data_ov015_0215cab0[3];
extern u32 data_ov015_0215caf0[3];
extern u32 data_ov015_0215cb08[3];
extern u32 data_ov015_0215cafc[3];

u32 func_02078224(u32 a, u32 b);

void func_ov015_0215c9a0(u8 *param_1)
{
    u8 *q4;
    u8 *iVar2;
    u32 uVar1;
    u16 x1;
    u32 y1;
    u16 x2;
    u32 y2;
    u32 hx1;
    u32 hx2;

    q4 = *(u8 **)(param_1 + 4);
    iVar2 = *(u8 **)(q4 + 4);
    uVar1 = func_02078224((u32)(iVar2 + *(u32 *)(iVar2 + 8) + 4), (u32)data_ov015_0215ca88);
    if (*(u8 *)(param_1 + 0xad) == uVar1) {
        x1 = data_ov015_0215cab0[0] | data_ov015_0215cab0[1] << 5 | data_ov015_0215cab0[2] << 10;
        hx1 = (u32)x1 << 16;
        y1 = data_ov015_0215caf0[0] | data_ov015_0215caf0[1] << 5 | data_ov015_0215caf0[2] << 10;
        x2 = data_ov015_0215cb08[0] | data_ov015_0215cb08[1] << 5 | data_ov015_0215cb08[2] << 10;
        hx2 = (u32)x2 << 16;
        y2 = data_ov015_0215cafc[0] | data_ov015_0215cafc[1] << 5 | data_ov015_0215cafc[2] << 10;
        *(u32 *)(*(u8 **)(param_1 + 0xb0) + 4) = hx1 + (u16)y1;
        *(u32 *)(*(u8 **)(param_1 + 0xb0) + 8) = hx2 + (u16)y2;
    }
}
