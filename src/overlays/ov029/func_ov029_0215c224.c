#include "ctx.h"

extern u32 func_02002e60(void);
extern u32 func_02002e58(u32 a);
extern void func_020068c4(u32 a, u16 *b);
extern void func_020068c0(u32 a, u32 b);
extern void func_02006700(u32 a, u32 b);
extern u32 func_020068a0;
extern u32 func_020067d8;
extern u32 func_02006734;
extern u32 func_ov029_0215c494;
extern u32 *func_ov029_0215c3a4(u32 a);
extern void func_ov029_0215c2e8(u32 a, u32 b);
extern void func_020042e8(u32 a);
extern void func_0209944c(void);
extern u64 func_02108d9c(void);
extern void func_02005900(u32 a, u32 b);

void func_ov029_0215c224(void)
{
    u32 iVar1;
    u32 piVar2;
    u32 *puVar3;
    u64 uVar6;
    u16 loc[2];
    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    loc[0] = 0xff;
    loc[1] = 0;
    func_020068c4(piVar2, loc);
    func_020068c0(piVar2, 4);
    func_02006700(0, (u32)&func_020068a0);
    func_02006700(1, (u32)&func_020067d8);
    func_02006700(2, (u32)&func_02006734);
    func_02006700(3, (u32)&func_ov029_0215c494);
    puVar3 = func_ov029_0215c3a4(piVar2);
    func_ov029_0215c2e8(piVar2, 3);
    func_020042e8((u32)puVar3);
    func_0209944c();
    uVar6 = func_02108d9c();
    func_02005900((u32)uVar6, (u32)(uVar6 >> 32));
    *(vu16 *)0x04000304 = *(vu16 *)0x04000304 & ~0x8000;
}
