#include "ctx.h"

extern u16 data_0214efdc;
extern u32 data_ov010_0215d9e0;
extern void func_ov010_0215d4f8(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_ov010_0215c0f0(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02080074(void);
extern void func_0206b0a4(u32 *a, u32 b, u32 c);
extern void func_02003efc(void);
extern void func_02003d00(u32 a);
extern u64 func_02003ab0(void *a, void *b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020959d0(void);
extern void func_020068a4(void);
extern void func_ov010_0215c0bc(void);

u32 func_ov010_0215c000(void)
{
    s32 bVar1;
    s32 iVar4;

    bVar1 = 1;
    func_ov010_0215d4f8();
    func_02003df8(30);
    do {
        func_0200413c();
        func_ov010_0215c0f0();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02080074();
        func_0206b0a4((u32 *)(data_ov010_0215d9e0 + 0x18), 0, 0x6000);
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((void *)func_ov010_0215c0f0, (void *)func_ov010_0215c0bc);
    func_0208e36c();
    func_02004280();
    func_020959d0();
    func_020068a4();
    *(vu32 *)&data_ov010_0215d9e0 = 0;
    return 0;
}
