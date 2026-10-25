#include "ctx.h"
extern void func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_020beec0(u8 *p, s32 a, s32 *b);
extern void func_020c0b34(u8 *p, s32 *a, s32 *b);
extern void func_020c0778(u8 *p);
extern u32 func_020341c0(s32 a);
extern u32 func_020341e4(s32 a);
extern s32 func_020c5f4c(u8 *p, s32 a);
extern u32 func_0202707c(s32 a, s32 b);
extern u32 func_020c5fbc(u8 *p);

u32 func_020c0194(u8 *param_1)
{
    u8 *iVar5;
    s32 iVar1;
    s32 iVar2;
    s32 iVar4;
    u32 uVar3;
    s32 aiStack_30[3];
    s32 aiStack_24[4];

    iVar5 = *(u8 **)(param_1 + 0x214);
    func_02044ca0((s16)*(s16 *)(param_1 + 156));
    iVar1 = func_01ffdb08((s16)*(s16 *)(param_1 + 152));
    if (iVar1 == 0) {
        return (u32)iVar1;
    }
    iVar2 = func_01ffdb08((s16)*(s16 *)(param_1 + 154));
    if (iVar2 == 0) {
        return (u32)iVar2;
    }
    func_020beec0(param_1, iVar2, aiStack_30);
    func_020beec0(param_1, iVar1, aiStack_24);
    if (*(s32 *)(iVar5 + 0x1c) == 0) {
        func_020c0b34(param_1, aiStack_30, aiStack_24);
    } else {
        func_020c0b34(param_1, aiStack_24, aiStack_30);
    }
    func_020c0778(param_1);
    uVar3 = func_020341c0(iVar1);
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = func_020341e4(iVar1);
    if (uVar3 != 0) {
        iVar4 = func_020c5f4c(param_1, (s16)*(s16 *)(param_1 + 152));
        if (iVar4 == 0) {
            return (u32)iVar4;
        }
        func_0202707c(iVar1, 39);
        return func_0202707c(iVar2, 40);
    }
    uVar3 = func_020341e4(iVar2);
    if (uVar3 != 0) {
        iVar4 = func_020c5f4c(param_1, (s16)*(s16 *)(param_1 + 154));
        if (iVar4 == 0) {
            return (u32)iVar4;
        }
        func_0202707c(iVar1, 40);
        func_0202707c(iVar2, 39);
        if (*(s32 *)(iVar5 + 0x1c) == 0) {
            *(s32 *)(iVar5 + 0x1c) = 1;
            return 1;
        }
        *(s32 *)(iVar5 + 0x1c) = 0;
        return 0;
    }
    return func_020c5fbc(param_1);
}
