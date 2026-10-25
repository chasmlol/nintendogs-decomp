#include "ctx.h"

extern u8 data_0214efdc[];
extern u8 *data_ov029_0215c4a0;

extern void func_ov029_0215c224(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_0206c7f0(u32 a, u32 b, u32 c);
extern void func_020fcf7c(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0206b714(u32 a, u32 b, u32 c);
extern void func_0206b6ac(u32 a, u32 b, u32 c);
extern void func_020fcbb4(void);
extern void func_0207c990(void);
extern void func_020fcacc(void);
extern void func_02003efc(void);
extern void func_02003d00(u32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_020075b4(void);
extern void func_020fcaa4(void);
extern void func_0208e36c(void);
extern void func_0208c564(void);
extern void func_02090e30(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov029_0215c1a8(void);
extern void func_ov029_0215c144(void);

u32 func_ov029_0215c000(void)
{
    s32 iVar4;
    s32 bVar1;
    u8 *Pa;
    vu32 t0;
    vu32 t1;

    bVar1 = 1;
    func_ov029_0215c224();
    func_02003df8(30);
    do {
        func_0200413c();
        Pa = *(u8 **)(data_ov029_0215c4a0 + 0x18);
        *(u16 *)(Pa + 2) = 0;
        t0 = 192;
        func_0206c7f0(t0, *(u32 *)(Pa + 4), (u32)*(u16 *)Pa << 3);
        Pa = *(u8 **)(data_ov029_0215c4a0 + 0x1c);
        *(u16 *)(Pa + 2) = 0;
        t1 = 192;
        func_0206c7f0(t1, *(u32 *)(Pa + 4), (u32)*(u16 *)Pa << 3);
        func_020fcf7c();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        Pa = *(u8 **)(data_ov029_0215c4a0 + 0x18);
        func_0206b714(*(u32 *)(Pa + 4), 0, (u32)*(u16 *)Pa << 3);
        Pa = *(u8 **)(data_ov029_0215c4a0 + 0x1c);
        func_0206b6ac(*(u32 *)(Pa + 4), 0, (u32)*(u16 *)Pa << 3);
        func_020fcbb4();
        func_0207c990();
        func_020fcacc();
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((u32)func_ov029_0215c1a8, (u32)func_ov029_0215c144);
    func_020075b4();
    func_020fcaa4();
    func_0208e36c();
    func_0208c564();
    func_02090e30();
    func_02004280();
    func_020068a4();
    *(vu32 *)&data_ov029_0215c4a0 = 0;
    return 0;
}
