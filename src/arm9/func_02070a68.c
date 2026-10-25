#include "ctx.h"
extern void func_02089830(u32 a, s32 b, s32 c);
void func_02070a68(s32 *param_1, s32 param_2, s32 param_3)
{
    if (*param_1 != 0) {
        func_02089830((u32)*(u8 *)(*param_1 + 0x3c), param_2, param_3);
    }
}
