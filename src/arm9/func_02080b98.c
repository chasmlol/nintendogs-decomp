#include "ctx.h"

extern void func_02080b84(void);
extern u64 func_0207ee60(void);
extern void func_0206555c(u32 a, u32 b);
extern void func_0206bfe4(u32 a);
extern void func_0207ec4c(u32 a);
extern void func_0207eb98(u32 a);
extern void func_02080c18(u32 a);
extern void func_01ffe114(void);

void func_02080b98(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u64 r;
    u32 uVar1;
    u32 extraout_r1;

    if (*(vu16 *)0x027ffc40 == 2) {
        func_02080b84();
    }
    r = func_0207ee60();
    uVar1 = (u32)r;
    extraout_r1 = (u32)(r >> 32);
    func_0206555c((u16)uVar1, extraout_r1);
    func_0206bfe4(0);
    func_0206bfe4(1);
    func_0206bfe4(2);
    func_0206bfe4(3);
    func_0207ec4c(0x40000);
    func_0207eb98(0xffffffff);
    *(vu32 *)0x027ffc20 = param_1;
    func_02080c18(0x10);
    func_01ffe114();
}
