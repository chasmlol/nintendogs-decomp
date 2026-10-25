#include "ctx.h"

extern u8 data_02142270[];
extern u8 data_02142278[];
extern u8 data_02142280[];
extern u8 data_02142288[];
extern u8 data_02142290[];
extern u8 data_02142298[];
extern u8 data_021422a0[];
extern u8 data_021422a8[];
extern u8 data_021422b0[];
extern u8 data_021422c8[];
extern void func_020a4770(void);
extern void func_020a474c(void);
extern void func_020a4714(void);
extern void func_020a4708(void);
extern void func_02099ffc(void);
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 v);
extern void func_02006994(u8 *p, int v);
extern void func_020066c8(int a, void *b, int c);
extern void func_0208e0d0(void);
extern void func_0208c3f4(u8 *p);
extern void func_0208c3e0(void);
extern void func_0208ddac(void);
extern void func_020070c0(u8 *p);
extern void func_020963b0(u8 *p);
extern void func_0209a4f0(u8 *p);
extern void func_0208b0e8(u8 *p);
extern void func_0209b564(u8 *p);
extern void func_02006084(u8 *p, void *a, void *b);
extern void func_0206557c(int v);
extern void func_0207789c(int v);
extern void func_020d72bc(void);
extern void func_02097ab0(u8 *p);
extern void func_02090e7c(u8 *p);
extern void func_020995d4(u8 *p);
extern void func_02066170(void *p);
extern void func_020039c8(int a, void *b);

void func_020a457c(void)
{
    s32 iVar1;
    u8 *piVar2;

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    func_02006994(piVar2, 0);
    func_020066c8(0, data_02142270, 1);
    func_020066c8(1, data_02142278, 2);
    func_020066c8(2, data_02142280, 3);
    func_020066c8(3, data_02142288, 4);
    func_020066c8(4, data_02142290, 5);
    func_020066c8(5, data_02142298, 6);
    func_020066c8(6, data_021422a0, 7);
    func_020066c8(7, data_021422a8, 8);
    func_0208e0d0();
    func_0208c3f4(piVar2);
    func_0208c3e0();
    func_0208ddac();
    func_020070c0(piVar2);
    func_020963b0(piVar2);
    func_0209a4f0(piVar2);
    func_0208b0e8(piVar2);
    func_0209b564(piVar2);
    func_02006084(piVar2, data_021422b0, data_021422c8);
    func_0206557c(20);
    func_0207789c(1);
    func_020d72bc();
    func_02097ab0(piVar2);
    func_02090e7c(piVar2);
    func_020995d4(piVar2);
    func_02066170((void *)func_020a4770);
    func_020039c8(0, (void *)func_020a474c);
    func_020039c8(1, (void *)func_020a4714);
    func_020039c8(2, (void *)func_020a4708);
    func_020039c8(3, (void *)func_02099ffc);
}
