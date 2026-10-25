#include "ctx.h"

extern void func_020d5c80(void);
extern void func_02064f68(u32, u32, u32, s32);

void func_020d5c4c(u8 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    if (*(u16 *)(param_1 + 2) == 0) {
        func_02064f68((u32)func_020d5c80, param_2, param_3, param_4);
        return;
    }
}
