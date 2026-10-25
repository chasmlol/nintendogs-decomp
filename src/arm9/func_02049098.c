#include "ctx.h"
extern u8 data_02049198[];
extern s32 func_02049304(u8 *p, s32 *a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_02028130(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
void func_02049098(u8 *param_1)
{
    s32 bVar1;
    u32 uVar2;
    u64 uVar3;
    s32 local_10[2];
    local_10[0] = 0;
    bVar1 = func_02049304(param_1, local_10, 0, 0xb5, 0xb8, 0x29a);
    if (bVar1) {
        return;
    }
    uVar2 = func_02028130(param_1);
    uVar3 = (s64)(s32)uVar2 * 0x300c + 0x800;
    if (local_10[0] > (s32)((u32)(uVar3 >> 12) + 0xcd0)) {
        func_0203e908(param_1, 0x299);
        return;
    }
    uVar2 = func_02028130(param_1);
    uVar3 = (s64)(s32)uVar2 * 0x1cd4 + 0x800;
    if (local_10[0] < (s32)((u32)(uVar3 >> 12) - 0xcd0)) {
        func_0203e908(param_1, 0x298);
        return;
    }
}
