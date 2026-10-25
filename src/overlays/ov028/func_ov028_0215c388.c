#include "ctx.h"

extern u32 data_0214efdc;
extern u32 data_ov028_0215df0c;
extern void func_ov028_0215c488(void);
extern void func_02003df8(int a);
extern void func_0200413c(void);
extern void func_0208f6ac(u32 a);
extern void func_ov028_0215c000(void);
extern void func_ov028_0215ccb8(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(int a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_ov028_0215cda4(void);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov028_0215c458(void);
extern void func_ov028_0215c454(void);

u32 func_ov028_0215c388(void)
{
    u32 g;
    u16 *puVar2;
    s32 bVar1;
    s32 iVar4;
    u32 zz;

    bVar1 = 1;
    func_ov028_0215c488();
    func_02003df8(30);
    puVar2 = (u16 *)&data_0214efdc;
    g = (u32)&data_ov028_0215df0c;
    do {
        func_0200413c();
        func_0208f6ac(*(u32 *)*(u32 *)g);
        func_ov028_0215c000();
        func_ov028_0215ccb8();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(puVar2[0] & 8) != 0 && (u16)(puVar2[1] & 4) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1 != 0);
    func_02003d00(60);
    func_02003ab0((u32)func_ov028_0215c458, (u32)func_ov028_0215c454);
    func_ov028_0215cda4();
    func_0208e36c();
    func_02004280();
    func_020068a4();
    zz = 0;
    data_ov028_0215df0c = zz;
    return 0;
}
