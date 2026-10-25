#include "ctx.h"
extern u8 *func_01ffdb08(u32 a);
extern u32 func_02034528(u8 *p);
extern void func_0202707c(u8 *p, u32 a);
extern void func_020274e8(u8 *p, s32 a);
extern void func_020aace4(s32 a);
extern s32 func_020c604c(u8 *p);
s32 func_020e8c74(u8 *param_1, u32 param_2)
{
    u8 *iVar2;
    u32 uVar3;
    iVar2 = func_01ffdb08(param_2);
    uVar3 = func_02034528(iVar2);
    if (uVar3 != 0) {
        func_0202707c(iVar2, 0x23);
        func_020274e8(iVar2, (s32)*(s16 *)(param_1 + 0x94));
        func_020aace4((s32)*(s16 *)(param_1 + 0x94));
        return func_020c604c(param_1);
    }
    return (s32)uVar3;
}
