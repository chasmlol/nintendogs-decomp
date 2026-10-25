#include "ctx.h"

extern u32 data_0214204c[];
extern s16 data_02159148;
extern u8 data_021591a0[];
extern u8 data_02159198[];
extern s32 func_0209e494(s32 a);
extern void func_02072fe4(u8 *a, s32 b, s32 c);
extern void func_020a1a40(s32 a);

void func_020a17cc(s32 param_1, s32 param_2)
{
    u8 *iVar1;

    if (param_1 == 0) {
        iVar1 = (u8 *)data_0214204c[param_2];
        if (iVar1 != NULL && param_2 != data_02159148) {
            if (iVar1[1] == '0' && func_0209e494(0x1e) != 0) {
                func_02072fe4(data_021591a0, 0x30, 9);
            }
            *(u16 *)(data_02159198 + 54) = 1;
        }
    }
    func_020a1a40(0x21);
}
