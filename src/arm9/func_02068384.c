#include "ctx.h"

extern u16 data_0213e4d8;
extern vu16 data_02150e2c;

void func_02068384(u16 param_1, u32 param_2, s32 param_3)
{
    u16 sVar1 = data_0213e4d8;
    u32 lr = *(vu32 *)0x04000000;
    u32 r0 = param_1;
    data_02150e2c = param_1;
    if (sVar1 == 0) {
        r0 = 0;
    }
    *(vu32 *)0x04000000 = param_2 | ((lr & 0xfff0fff0) | (r0 << 16)) | (param_3 << 3);
    if (data_02150e2c == 0) {
        data_0213e4d8 = 0;
    }
}
