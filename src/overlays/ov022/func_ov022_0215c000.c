#include "ctx.h"

extern u16 data_0214efdc[];
extern int *data_ov022_0215c720;
extern void func_ov022_0215c0e0(void);
extern void func_ov022_0215c0c4(void);
extern void func_ov022_0215c0b8(void);
extern void func_02003df8(int a);
extern void func_0200413c(void);
extern void func_0208f6ac(int a);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0207c990(void);
extern void func_02003efc(void);
extern void func_02003d00(int a);
extern u64 func_02003ab0(int a, int b);
extern void func_0208b9b0(int a, int b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020075b4(void);
extern void func_020068a4(void);

int func_ov022_0215c000(void)
{
    int bVar1;
    u64 uVar5;
    int junk3;
    int junk4;

    bVar1 = 1;
    func_ov022_0215c0e0();
    func_02003df8(0x1e);
    do {
        func_0200413c();
        func_0208f6ac(*(int *)data_ov022_0215c720);
        if (func_02003a10() != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_0207c990();
        func_02003efc();
    } while (bVar1);
    func_02003d00(0x3c);
    uVar5 = func_02003ab0((int)func_ov022_0215c0c4, (int)func_ov022_0215c0b8);
    func_0208b9b0((int)uVar5, (int)(uVar5 >> 32));
    func_0208e36c();
    func_02004280();
    func_020075b4();
    func_020068a4();
    data_ov022_0215c720 = 0;
    return 0;
}
