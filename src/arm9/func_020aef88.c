#include "ctx.h"

extern u8 *data_02159468;
extern u8 func_020ad77c(u8 *);
extern u32 func_020bb04c(u8 *);
extern void func_020ad7c8(u8 *, s32);
extern u32 func_020ad6fc(u8 *, u32);
extern void func_020ab4fc(u8 *);
extern u32 func_020af094(u8 *);
extern u8 func_020ad690(u8 *);
extern void func_020ad8f0(u8 *);
extern s32 func_020bd548(s32);
extern void func_020bca08(s32);

u32 func_020aef88(u8 *param_1)
{
    s16 sVar1;
    u8 bVar2;
    s32 iVar3;
    u32 uVar4;
    u8 b5;

    sVar1 = *(s16 *)(param_1 + 0x2e);
    if (sVar1 == 0) {
        goto s0;
    }
    if (sVar1 == 1) {
        goto s1;
    }
    if (sVar1 == 4) {
        goto s4;
    }
    return (u32)param_1;
s0:
    b5 = func_020ad77c(param_1);
    return (u32)b5;
s1:
    bVar2 = 0;
    uVar4 = func_020bb04c(param_1);
    if (uVar4 != 0) {
        bVar2 = 1;
        goto T;
    }
    b5 = bVar2;
    uVar4 = 0xfffffffd;
    if (*(s32 *)(param_1 + 0x134) == (s32)uVar4) {
        b5 = 1;
        func_020ad7c8(param_1, 10);
        uVar4 = func_020ad6fc(param_1, bVar2);
    }
    if (b5 != 0) {
        bVar2 = 1;
    }
T:
    if (bVar2 != 0) {
        return uVar4;
    }
    func_020ab4fc(param_1);
    return func_020af094(param_1);
s4:
    bVar2 = func_020ad690(param_1);
    if (bVar2 == 0) {
        return (u32)bVar2;
    }
    func_020ad8f0(param_1);
    *(u32 *)(data_02159468 + 0x24) = 1;
    iVar3 = func_020bd548(*(s16 *)(param_1 + 0x7c));
    if (iVar3 == 0) {
        return (u32)iVar3;
    }
    *(s16 *)(param_1 + 0x7c) = -1;
    func_020bca08(0);
    *(u16 *)(param_1 + 0x76) = 0;
    *(u16 *)(param_1 + 0x78) = 0;
    return 0;
}
