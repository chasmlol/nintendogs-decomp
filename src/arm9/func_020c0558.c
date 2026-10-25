#include "ctx.h"

s32 func_01ffdb08(s32 a);
void func_020bee8c(u8 *p, s32 *a);
void func_020c0b34(u8 *p, s32 *a, s32 *b);
void func_020c0948(u8 *p);
void func_020c0778(u8 *p);
s32 func_020341e4(s32 a);
s32 func_020341d8(s32 a);
u32 func_020c5fbc(u8 *p);
u32 func_020c5ef8(u8 *p);

u32 func_020c0558(u8 *param_1)
{
    s32 aiStack_20[4];
    u8 *iv4;
    s32 iVar2;
    u32 uVar3;

    iv4 = *(u8 **)(param_1 + 0x214);
    iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
    func_020bee8c(param_1, aiStack_20);
    if (*(s32 *)(iv4 + 0x1c) == 0) {
        func_020c0b34(param_1, 0, aiStack_20);
    } else {
        func_020c0b34(param_1, aiStack_20, 0);
    }
    func_020c0948(param_1);
    func_020c0778(param_1);
    uVar3 = func_020341e4(iVar2);
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = func_020341d8(iVar2);
    if (uVar3 != 0) {
        return func_020c5ef8(param_1);
    }
    return func_020c5fbc(param_1);
}
