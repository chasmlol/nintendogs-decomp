#include "ctx.h"

extern u16 data_0214efdc;
extern u32 data_ov019_02161618;
extern void func_ov019_02160d5c(void);
extern void func_ov019_02160d58(void);

extern void func_ov019_02160d78(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(u32 a);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(u32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);

s32 func_ov019_02160c98(void)
{
    s32 iVar4;
    s32 bVar1;

    bVar1 = 1;
    func_ov019_02160d78();
    func_02003df8(30);
    do {
        func_0200413c();
        func_0208f6ac(*(u32 *)data_ov019_02161618);
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((u32)func_ov019_02160d5c, (u32)func_ov019_02160d58);
    func_0208e36c();
    func_02004280();
    func_020068a4();
    *(u16 *)0x04000304 = *(u16 *)0x04000304 | 0x8000;
    data_ov019_02161618 = 0;
    return 0;
}
