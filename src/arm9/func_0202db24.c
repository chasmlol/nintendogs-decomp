#include "ctx.h"

extern u32 data_0214f464;

extern s32 func_020bc14c(void);
extern void func_020bbe14(u32 a, s32 b);
extern u8 *func_020bc3c4(void);

void func_0202db24(u8 *param_1, u32 param_2)
{
    s32 r5;
    s32 r4;
    s32 iVar2;
    r5 = 1;
    r4 = *(s8 *)(param_1 + 0x88);
    if (r4 != func_020bc14c()) {
        if (r4 != *(s8 *)(*(u8 **)&data_0214f464 + 7)) {
            r5 = 0;
        }
    }
    if (r5 == 0) {
        return;
    }
    switch (param_2) {
    case 0:
    case 3:
    default:
        if (r4 == *(s8 *)(*(u8 **)&data_0214f464 + 7)) {
            func_020bbe14(3, r4);
        } else {
            func_020bbe14(2, r4);
        }
        break;
    case 1:
        func_020bbe14(6, r4);
        break;
    case 2:
        func_020bbe14(8, r4);
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020bbe14(12, r4);
        break;
    }
    if (*(s8 *)(param_1 + 0x88) == *(s8 *)(*(u8 **)&data_0214f464 + 7)) {
        iVar2 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar2 + 0x6c) = 1;
        return;
    }
    iVar2 = (s32)func_020bc3c4() + 136;
    *(u32 *)(iVar2 + 0x6c) = 0;
}
