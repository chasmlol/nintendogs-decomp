#include "ctx.h"

extern s16 data_ov024_0215c360;
extern u16 data_0214efdc;
extern u32 data_ov024_0215c364;

extern void func_ov024_0215c1b8(void);
extern void func_02003df8(int a);
extern void func_0200413c(void);
extern void func_0208f6ac(u32 a);
extern void func_020d6f98(void);
extern void func_020d6f84(void);
extern void func_020d6d30(void);
extern int func_020d72a0(void);
extern void func_020d6d34(void);
extern int func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(int a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov024_0215c124(void);
extern void func_ov024_0215c120(void);

int func_ov024_0215c000(void)
{
    int bVar1;
    int bVar5;
    int iVar6;


    bVar1 = 1;
    func_ov024_0215c1b8();
    func_02003df8(30);

    do {
        func_0200413c();
        func_0208f6ac(*(u32 *)data_ov024_0215c364);
        if ((u16)(data_0214efdc & 1) != 0) {
            func_020d6f98();
        } else if ((u16)(data_0214efdc & 2) != 0) {
            func_020d6f84();
        }
        func_020d6d30();
        bVar5 = func_020d72a0();
        if (bVar5 != 0) {
            data_ov024_0215c360 = 300;
        }
        iVar6 = data_ov024_0215c360;
        if (0 < iVar6) {
            iVar6 = iVar6 - 1;
            data_ov024_0215c360 = (s16)iVar6;
        }
        func_020d6d34();
        iVar6 = func_02003a10();
        if (iVar6 != 0 && (u16)(data_0214efdc & 8) != 0 && (u16)(((u16 *)&data_0214efdc)[1] & 4) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1 != 0);
    func_02003d00(60);
    func_02003ab0((u32)func_ov024_0215c124, (u32)func_ov024_0215c120);
    func_0208e36c();
    func_02004280();
    func_020068a4();
    data_ov024_0215c364 = 0;
    return 0;
}
