#include "ctx.h"

extern u32 data_021594ec;
extern u16 data_021594dc;
extern u16 data_021594d8;
extern u32 data_02159500;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r);
extern s32 func_02064ca0(u32 a, u32 b);

u32 func_020d64d4(u32 param_1, s16 *param_2)
{
    u32 r4;
    s32 iVar1;

    r4 = func_02080b08();
    if (data_021594ec == 1 || data_021594dc == 1) {
        *param_2 = 0x17;
        return 0;
    }
    if (data_021594d8 == 0x8000) {
        *param_2 = 3;
        func_02080b1c(r4);
        return 0;
    }
    if (data_021594d8 == 0) {
        *param_2 = 0x15;
        func_02080b1c(r4);
        return 0;
    }
    iVar1 = func_02064ca0(param_1, (u32)&data_02159500);
    *param_2 = (s16)iVar1;
    if ((u16)*param_2 == 2) {
        data_021594ec = 1;
        func_02080b1c(r4);
        return 1;
    }
    func_02080b1c(r4);
    return 0;
}
