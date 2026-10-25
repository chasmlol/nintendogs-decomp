#include "ctx.h"

extern u8 *data_ov021_0215c6a0;
extern u16 data_0214efdc;
extern void func_ov021_0215c414(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_ov021_0215c110(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0206b714(u32 a, s32 b, u32 c);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern u64 func_02004280(void);
extern void func_0208c564(u64 a);
extern void func_020068a4(void);
extern void func_ov021_0215c0e4(void);

u32 func_ov021_0215c000(void)
{
    s32 bVar1;
    s32 iVar4;
    u32 puVar5;
    u8 *q;
    u64 uVar6;

    bVar1 = 1;
    func_ov021_0215c414();
    func_02003df8(0x1e);
    do {
        func_0200413c();
        func_ov021_0215c110();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        q = *(u8 **)(data_ov021_0215c6a0 + 8);
        puVar5 = (u32)(*(u16 *)q) << 3;
        func_0206b714(*(u32 *)(q + 4), 0, puVar5);
        func_02003efc();
    } while (bVar1 != 0);
    func_02003d00(0x3c);
    func_02003ab0(func_ov021_0215c110, func_ov021_0215c0e4);
    data_ov021_0215c6a0 = 0;
    uVar6 = func_02004280();
    func_0208c564(uVar6);
    func_020068a4();
    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) {
        *(vu16 *)0x04000304 |= 0x8000;
    }
    return 0;
}
