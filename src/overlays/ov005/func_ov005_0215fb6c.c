#include "ctx.h"

typedef struct {
    u32 w[3];
} Triple;

extern s32 func_0203567c(u32);
extern void func_0203e908(u32, s16);

void func_ov005_0215fb6c(u8 *param_1)
{
    s32 iVar1;
    *(Triple *)(param_1 + 0x3b4) = *(Triple *)(param_1 + 0x30c);
    iVar1 = func_0203567c((u32)param_1);
    if (iVar1 != 0) {
        func_0203e908((u32)param_1, 0x451);
        return;
    }
}
