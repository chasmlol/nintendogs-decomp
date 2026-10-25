#include "ctx.h"
extern u32 func_02036578(u8 *p);
extern void func_02027668(u32 a, s32 *b);
extern void func_02067e34(u8 *a, s32 *b, u8 *c);
extern void func_02027654(u32 a, u32 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_0204be88(u8 *p, u32 a, u32 b);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);
void func_0204bce0(u8 *param_1)
{
    u32 iVar1;
    s32 aiStack_18[3];
    iVar1 = func_02036578(param_1);
    if (iVar1 != 0) {
        func_02027668(iVar1, aiStack_18);
        func_02067e34(param_1 + 0x2a0, aiStack_18, param_1 + 0x26c);
        func_02027654(iVar1, (u32 *)(param_1 + 0x3b4));
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    iVar1 = func_0204be88(param_1, iVar1, 1);
    if (iVar1 == 0) {
        if (*(u16 *)(param_1 + 0xfc) > 0x78) {
            func_020362f8(param_1);
            func_0202fcc0(param_1);
            return;
        }
        return;
    }
}
