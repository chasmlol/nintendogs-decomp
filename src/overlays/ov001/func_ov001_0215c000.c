#include "ctx.h"

extern void func_ov001_0215c0b4(void);
extern void func_ov001_0215c090(void);

void func_ov001_0215c0d0(u32 a);
void func_02003df8(u32 a);
void func_0200413c(void);
void func_ov001_0215c5c0(void);
void func_020fcf7c(void);
s32 func_ov001_0215c394(void);
void func_02003fb4(void);
void func_ov001_0215c3a8(void);
void func_020fcbb4(void);
void func_0207c990(void);
void func_020fcacc(void);
void func_02003efc(void);
void func_02003ab0(u32 a, u32 b);
void func_020075b4(void);
void func_02004280(void);
void func_020068a4(void);
void func_02090e30(void);
u64 func_02109238(void);
void func_020fcaa4(u64 a);

u32 func_ov001_0215c000(s16 param_1, u32 param_2, u8 *param_3, s32 param_4)
{
    s32 bVar1;
    s32 iVar2;

    bVar1 = 1;
    func_ov001_0215c0d0(param_1);
    func_02003df8(0x1e);
    do {
        func_0200413c();
        func_ov001_0215c5c0();
        func_020fcf7c();
        iVar2 = func_ov001_0215c394();
        if (iVar2 != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_ov001_0215c3a8();
        func_020fcbb4();
        func_0207c990();
        func_020fcacc();
        func_02003efc();
    } while (bVar1 != 0);
    func_02003ab0((u32)func_ov001_0215c0b4, (u32)func_ov001_0215c090);
    func_020075b4();
    func_02004280();
    func_020068a4();
    func_02090e30();
    func_020fcaa4(func_02109238());
    return 0;
}
