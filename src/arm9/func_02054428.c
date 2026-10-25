#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern u32 func_0202fd7c(u8 *p);
extern u32 func_0202fcc0(u8 *p);
extern u32 func_02054e50(u8 *p, s32 a);
extern u32 func_020548f0(u8 *p, s32 a);
extern u32 func_020544cc(u8 *p, s32 a);

u32 func_02054428(u8 *param_1)
{
    s32 iVar2;
    u16 uVar1;

    iVar2 = func_02036578(param_1);
    uVar1 = *(u16 *)(param_1 + 0xfc);
    if (uVar1 > 800) {
        func_020362f8(param_1);
        return func_0202fd7c(param_1);
    }
    if (iVar2 == 0) {
        func_020362f8(param_1);
        return func_0202fcc0(param_1);
    }
    if (uVar1 == 180) {
        return func_02054e50(param_1, iVar2);
    }
    if (uVar1 == 250) {
        return func_020548f0(param_1, iVar2);
    }
    if (uVar1 == 800) {
        return func_020544cc(param_1, iVar2);
    }
    return 0;
}
