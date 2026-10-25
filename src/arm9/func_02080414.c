#include "ctx.h"

extern int data_02155f40;
extern u32 func_020802c0(int a);
extern void func_020801c4(int a, u32 b);
extern u32 func_020801d8(int a);
extern void func_020801b0(int a, u32 b);
extern u32 func_0207fb7c(void);
extern void func_020805f4(u32 a);
extern void func_020805fc(u32 a);

void func_02080414(void)
{
    u32 uVar1;
    u32 uVar2;

    uVar1 = func_020802c0(2);
    func_020801c4(2, uVar1);
    uVar2 = func_020801d8(2);
    func_020801b0(2, uVar2);
    if (((data_02155f40 != 0) && (*(u16 *)0x027ffc40 != 2)) &&
        (uVar1 = func_0207fb7c(), (uVar1 & 3) != 1)) {
        return;
    }
    func_020805f4(0x0200002b);
    func_020805fc(0x023e0021);
}
