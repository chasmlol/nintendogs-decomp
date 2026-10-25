#include "ctx.h"

extern u8 data_02152cd8[];
extern BOOL func_02009f38(s32 *a, s32 *b);

u32 func_0202a60c(u8 *param_1)
{
    BOOL bVar1;
    u32 uVar2;
    s32 local_10[3];
    local_10[0] = *(s32 *)(data_02152cd8 + 0x54);
    local_10[1] = *(s32 *)(data_02152cd8 + 0x60);
    local_10[2] = *(s32 *)(data_02152cd8 + 0x6c);
    bVar1 = func_02009f38(local_10, (s32 *)(param_1 + 0x18c));
    if (bVar1) {
        uVar2 = 1;
    } else {
        uVar2 = 2;
    }
    return uVar2;
}
