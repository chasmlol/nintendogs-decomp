#include "ctx.h"

extern u32 data_ov007_02160d80;
extern void func_ov007_0215c3a8(void);
u8 *func_020d6cb4(void);
s32 func_0206519c(void *cb, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_ov007_0215d8e0(u32 param_1, u32 param_2)
{
    u8 *iVar1;

    iVar1 = func_020d6cb4();
    if (param_2 > *(u16 *)(iVar1 + 0x4e)) {
        return;
    }
    if (*(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x3c) != 0) {
        *(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x3c) = 0;
        if (func_0206519c(func_ov007_0215c3a8, 0, param_1, param_2, 0xffff, 5, 2) != 2) {
            *(u32 *)(*(u8 **)&data_ov007_02160d80 + 0x3c) = 1;
        }
    }
}
