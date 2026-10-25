#include "ctx.h"

extern void func_02070b64(s32 a);
extern u64 func_02073534(s32 a);
extern void func_020710e8(u64 v);
extern void func_02089600(s32 a);
extern void func_020898f4(s32 a, s32 b, s32 c, s32 d);
extern u32 func_02089ecc(void);
extern void func_02089f9c(s32 a);
extern void func_02089f0c(u32 a);

void func_0206fdf0(void)
{
    u32 uVar1;
    u64 uVar2;

    func_02070b64(0);
    uVar2 = func_02073534(0);
    func_020710e8(uVar2);
    func_02089600(0);
    func_020898f4(0xffff, 0xffff, 0xffff, 0);
    uVar1 = func_02089ecc();
    func_02089f9c(1);
    func_02089f0c(uVar1);
}
