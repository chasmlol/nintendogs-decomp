#pragma optimization_level 2
#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159444;
extern u16 data_0214efdc[];
extern u32 func_02042d1c(void);
extern s32 func_02042d4c(void);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
extern void func_020a02d8(s32 a);
extern void func_020ad7c8(u8 *a, s32 b);
extern void func_020ad6fc(u8 *a, s32 b);
extern void func_020af664(u8 *a);
extern s32 func_0202817c(s32 a);
extern void func_020950cc(s32 a, s32 b);
extern void func_02028184(s32 a);
extern void func_02042a0c(void);

u32 func_020b8cd4(u8 *param_1)
{
    u32 uVar4;
    s32 iVar2;
    s32 bVar5;
    s32 iVar3;
    s32 bVar1;

    uVar4 = 0;
    if (*(u16 *)data_0215942c != 0) {
        goto b60;
    }
    bVar5 = 0;
    if ((*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
        bVar5 = 1;
        goto l64;
    }
    if ((u16)(data_0214efdc[1] & 0xcf3) != 0) {
        bVar5 = 1;
    }
    goto l64;
b60:
    bVar5 = 1;
l64:
    bVar1 = func_02042d1c();
    if (bVar1 == 0) {
        goto ret;
    }
    if (bVar5 == 0) {
        goto ret;
    }
    iVar2 = func_02042d4c();
    iVar2 = func_01ffdb08(iVar2);
    iVar3 = func_02027f78(iVar2, 3);
    if (*(u16 *)data_0215942c == 0) {
        func_020a02d8(0x3d);
    }
    if (iVar3 < 10000) {
        goto lec;
    }
    if (*(u16 *)data_0215942c != 0) {
        goto lec;
    }
    iVar3 = func_0202817c(iVar2);
    func_020950cc(iVar3, -1);
    func_02028184(iVar2);
    func_02042a0c();
    goto ret;
lec:
    uVar4 = 1;
    func_020ad7c8(param_1, 0x10);
    func_020ad6fc(param_1, 0);
    if (*(u16 *)data_0215942c != 9) {
        func_020af664(param_1);
    }
ret:
    return uVar4;
}
