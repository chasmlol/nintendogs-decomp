#include "ctx.h"
extern u8 data_021594d0[];
extern u8 func_020d3cb0[];
extern u8 *func_020d6cb4(void);
extern s32 func_0206519c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_020d5130(u32 param_1, u32 param_2)
{
    u8 *iVar1;
    iVar1 = func_020d6cb4();
    if (param_2 > *(u16 *)(iVar1 + 0x4e)) {
        return;
    }
    if (*(u32 *)(*(u8 **)data_021594d0 + 0x34) != 0) {
        *(u32 *)(*(u8 **)data_021594d0 + 0x34) = 0;
        iVar1 = (u8 *)(u32)func_0206519c((u32)func_020d3cb0, 0, param_1, param_2, 0xffff, 5, 2);
        if ((u32)iVar1 != 2) {
            *(u32 *)(*(u8 **)data_021594d0 + 0x34) = 1;
        }
        return;
    }
}
