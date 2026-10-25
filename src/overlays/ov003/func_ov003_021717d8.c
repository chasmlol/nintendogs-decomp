#include "ctx.h"

u32 func_02035584(u8 *a, u32 b);
void func_0203e8cc(u8 *a, u32 b, u32 c);
u32 func_0202e29c(u8 *a);
void func_020b9b18(u32 a);
void func_020b9858(s32 a, s32 b);
void func_02029290(u8 *a, u32 b, u32 c);
void func_0203e908(u8 *a, u32 b);

void func_ov003_021717d8(u8 *param_1)
{
    u32 iVar1;
    iVar1 = func_02035584(param_1, 1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 252) > 100) {
        iVar1 = func_0202e29c(param_1);
        if (iVar1 != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s32)*(s8 *)(param_1 + 136), (s32)*(s16 *)(param_1 + 246));
        func_02029290(param_1, 87, 1);
        func_0203e908(param_1, 243);
    }
}
