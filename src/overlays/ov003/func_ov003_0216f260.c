#include "ctx.h"

extern void func_02026bac(void *);
extern void func_02025918(void *);
extern s32 func_02027f78(void *, s32);
extern void func_02027f40(void *, s32, s32);
extern s32 func_020274d8(void *);
extern void func_02009408(void *, s32, s32, s32 *, s32);
extern void func_02028184(void *);
extern void func_02027ee0(void *, s32, s32);
extern void func_0202802c(void *, s32, s32);
extern void func_02027b38(void *, s32);

void func_ov003_0216f260(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;
    s32 flag;

    *(u16 *)(param_1 + 0x152) = 0;
    *(u16 *)(param_1 + 0x156) = 13;
    func_02026bac(param_1);
    func_02025918(param_1);
    flag = 1;
    iVar1 = func_02027f78(param_1, 3);
    if (iVar1 > 2000) {
        func_02027f40(param_1, 3, 2000);
        flag = 0;
    }
    iVar2 = func_020274d8(param_1);
    if (iVar2 == 0x3a) goto LA;
    if (iVar2 == 0x3b) goto LB;
    return;
LA:
    func_02009408(param_1, 0x6a, 3, (s32 *)0, 1);
    func_02028184(param_1);
    iVar2 = -3000;
    *(u16 *)(*(s32 *)(param_1 + 0x9e8) + 0x70) = 0x3a;
    func_02027ee0(param_1, 5, iVar2);
    if (flag) {
        func_02027ee0(param_1, 3, -200);
    }
    func_0202802c(param_1, 0, 5);
    func_0202802c(param_1, 1, -5);
    func_0202802c(param_1, 2, 5);
    func_0202802c(param_1, 3, 5);
    func_0202802c(param_1, 4, -5);
    func_02027b38(param_1, -300);
    return;
LB:
    func_02009408(param_1, 0x6b, 3, (s32 *)0, 1);
    func_02028184(param_1);
    *(u16 *)(*(s32 *)(param_1 + 0x9e8) + 0x70) = 0x3b;
    func_02027f40(param_1, 5, 0);
    if (flag) {
        func_02027ee0(param_1, 3, -400);
    }
    func_0202802c(param_1, 0, 10);
    func_0202802c(param_1, 1, -10);
    func_0202802c(param_1, 2, 10);
    func_0202802c(param_1, 3, 10);
    func_0202802c(param_1, 4, -10);
    func_02027b38(param_1, -600);
    return;
}
