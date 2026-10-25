#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern u8 *func_020d6ccc(void);
extern u32 func_0206519c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern void func_ov028_0215cfe8(void);

void func_ov028_0215d63c(u32 param_1, u32 param_2)
{
    u8 *iVar1;
    u32 ret;

    iVar1 = func_020d6ccc();
    if (param_2 > *(u16 *)(iVar1 + 0x34)) {
        return;
    }
    if (*(u32 *)(data_ov028_0215df90 + 0x30) != 0) {
        *(u32 *)(data_ov028_0215df90 + 0x30) = 0;
        ret = func_0206519c((void *)func_ov028_0215cfe8, 0, param_1, param_2, 0xffff, 5, 2);
        if (ret != 2) {
            *(u32 *)(data_ov028_0215df90 + 0x30) = 1;
        }
        return;
    }
    return;
}
