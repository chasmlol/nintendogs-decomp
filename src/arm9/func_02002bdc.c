#include "ctx.h"

extern u32 data_0214e6e0;
extern u32 data_0214e6e4;
extern u32 data_0214e6f4;
extern u32 data_0214e718;
extern u32 data_0214e71c;
extern void func_02002d8c(u32 a);

void func_02002bdc(u32 param_1, u32 param_2, s32 param_3)
{
    u16 uVar1;
    u32 uVar2;
    s32 idx;
    u32 off;
    u16 val;

    if (param_3 != 0) {
        func_02002d8c(2);
        return;
    }
    uVar1 = (u16)((param_2 & 0x7f00) >> 8);
    uVar2 = (u16)(param_2 & 0xff);
    if (uVar1 < 0x70) {
        goto other;
    }
    if (uVar1 > 0x73) {
        goto other;
    }
    idx = uVar1 - 0x70;
    val = (u16)(uVar2 & 0xff);
    if (0 != *(u16 **)((u8 *)&data_0214e71c + idx * 8)) {
        **(u16 **)((u8 *)&data_0214e71c + idx * 8) = val;
    }
    off = (u32)idx * 8;
    *(u16 *)((u8 *)&data_0214e718 + off) = 1;
    uVar2 = 0;
    goto done;
other:
    if (uVar1 == 0x60) {
        *(u32 *)&data_0214e6e0 = 1;
    } else if (uVar1 == 0x62) {
        *(u32 *)&data_0214e6e4 = 1;
    } else if (uVar1 == 0x67) {
        if (*(u32 **)((u8 *)&data_0214e6f4 + 0xc) != 0) {
            **(u32 **)((u8 *)&data_0214e6f4 + 0xc) = uVar2;
        }
        uVar2 = 0;
    }
done:
    func_02002d8c(uVar2);
}
