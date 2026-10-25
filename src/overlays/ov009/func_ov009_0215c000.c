#include "ctx.h"

extern u16 data_0214efdc;
extern u32 data_ov009_0215cce0[];

extern void func_ov009_0215c3dc(void);
extern void func_02003d64(void);
extern void func_0200413c(void);
extern void func_ov009_0215c0ac(void);
extern void func_ov009_0215c0a8(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003be4(void);
extern void func_02003ab0(u32 a, u32 b);
extern u32 func_0208c564(u32 a);
extern void func_0208b9b0(u32 a);
extern void func_02004280(void);
extern void func_020068a4(void);

u32 func_ov009_0215c000(void)
{
    s32 bVar2 = 1;
    s32 iv;
    u32 uVar1;

    func_ov009_0215c3dc();
    func_02003d64();
    do {
        func_0200413c();
        func_ov009_0215c0ac();
        iv = func_02003a10();
        if (iv != 0 && (u16)(data_0214efdc & 8) != 0) {
            bVar2 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar2);
    func_02003be4();
    func_02003ab0((u32)func_ov009_0215c0ac, (u32)func_ov009_0215c0a8);
    uVar1 = *(vu16 *)0x04000304;
    *(vu16 *)0x04000304 = (u16)(uVar1 | 0x8000);
    func_0208b9b0(func_0208c564(uVar1 | 0x8000));
    func_02004280();
    func_020068a4();
    *(u32 *)(u32)data_ov009_0215cce0 = 0;
    return 0;
}
