#include "ctx.h"

extern int func_0202fcd4(int);
extern void func_02027654(int, void *);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

typedef struct { u32 a, b, c; } Triple;

void func_ov004_0216b8e4(int param_1)
{
    u16 uVar1;
    int iVar2;
    int flag;

    uVar1 = *(u16 *)((u8 *)param_1 + 0xfc);
    flag = uVar1 > 60;
    iVar2 = func_0202fcd4(param_1);
    if (iVar2 != 0) {
        func_02027654(iVar2, (u8 *)param_1 + 0x26c);
        *(Triple *)((u8 *)param_1 + 0x3b4) = *(Triple *)((u8 *)param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
    }
    iVar2 = func_ov004_0216be28(param_1, iVar2);
    if (iVar2 == 0) {
        if (flag) {
            func_0203e908(param_1, 0x4a4);
        }
    }
}
