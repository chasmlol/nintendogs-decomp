#pragma avoid_byte strb
#include "ctx.h"

extern u16 data_0214efdc;
extern u32 data_ov008_0215c6e0;
extern void func_ov008_0215c0d0(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(u32 a);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(u32 a);
extern u64 func_02003ab0(void *a, void *b);
extern void func_0208b9b0(u32 a, u32 b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov008_0215c0b4(void);
extern void func_ov008_0215c0b0(void);

u32 func_ov008_0215c000(void)
{
    s32 bVar1;
    s32 iVar4;
    u64 uVar5;

    bVar1 = 1;
    func_ov008_0215c0d0();
    func_02003df8(30);
    do {
        func_0200413c();
        func_0208f6ac(*(u32 *)data_ov008_0215c6e0);
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    uVar5 = func_02003ab0((void *)func_ov008_0215c0b4, (void *)func_ov008_0215c0b0);
    func_0208b9b0((u32)uVar5, (u32)(uVar5 >> 32));
    func_0208e36c();
    func_02004280();
    func_020068a4();
    {
        u32 g = (u32)&data_ov008_0215c6e0;
        *(u32 *)g = 0;
    }
    return 0;
}
