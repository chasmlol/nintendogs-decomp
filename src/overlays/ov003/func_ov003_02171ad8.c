#include "ctx.h"

s32 func_02035584(u8 *p, u32 n);
void func_0203e8cc(u8 *p, u32 a, u32 b);
s32 func_0202e29c(u8 *p);
void func_020b9b18(u32 a);
void func_020b9858(s32 a, s32 b);
void func_02029290(u8 *p, u32 a, u32 b);
void func_0203e908(u8 *p, s16 v);

void func_ov003_02171ad8(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_02035584(param_1, 1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        iVar1 = func_0202e29c(param_1);
        if (iVar1 != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s8)*(s8 *)(param_1 + 0x88), (s16)*(u16 *)(param_1 + 0xf6));
        func_02029290(param_1, 0x57, 1);
        func_0203e908(param_1, (s16)0xed);
        return;
    }
}
