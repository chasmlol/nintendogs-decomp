#include "ctx.h"

extern s32 func_02035584(u32, u32);
extern void func_0203e8cc(u32, u32, u32);
extern s32 func_0202e29c(u32);
extern void func_020b9b18(u32);
extern void func_020b9858(s32, s32);
extern void func_02029290(u32, u32, u32);
extern void func_0203e908(u32, s16);

void func_ov003_02171958(u8 *param_1)
{
    s32 iVar1;
    iVar1 = func_02035584((u32)param_1, 1);
    if (iVar1 != 0) {
        func_0203e8cc((u32)param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 252) > 100) {
        iVar1 = func_0202e29c((u32)param_1);
        if (iVar1 != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s32)*(s8 *)(param_1 + 136), (s32)*(s16 *)(param_1 + 246));
        func_02029290((u32)param_1, 0x57, 1);
        func_0203e908((u32)param_1, 0xf0);
        return;
    }
}
