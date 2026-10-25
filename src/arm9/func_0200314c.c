#include "ctx.h"

extern u8 data_02155cf8[];
extern u8 data_0214e73c[];
extern u32 data_0213e4dc;
extern void func_02080164(void);
extern u64 func_02080858(void);
extern void func_0207f384(int a, int b);
extern void func_02080790(void *a, int b);
extern void func_02003260(void);
extern void func_020800a0(void);
extern void func_02080990(void);
extern void func_02080a2c(void);
extern void func_02068338(void);
extern void func_020684ec(void);
extern void func_02068444(void);
extern void func_0207eda4(int a, int b);
extern void func_02003408(void);
extern void func_0200348c(void);
extern void func_0207ec14(int a);
extern u64 func_02080af4(void);
extern void func_0206848c(int a);
extern void func_020684bc(int a);
extern void func_02002cc8(void);
extern void func_02002764(int a);
extern void func_0200274c(int a);
extern void func_0206d71c(void);
extern void func_0208838c(int a);
extern void func_0208845c(int a);
extern u8 func_02006688(void);

u8 func_0200314c(void)
{
    u64 uVar7;
    int iVar4;
    vu16 *hp;

    func_02080164();
    uVar7 = func_02080858();
    *(u64 *)(data_0214e73c + 4) = uVar7;
    iVar4 = *(s32 *)(data_02155cf8 + 8);
    *(s32 *)data_0214e73c = iVar4;
    func_0207f384(iVar4, 0x100);
    func_02080790((void *)func_02003260, 0);
    func_020800a0();
    func_02080990();
    func_02080a2c();
    func_02068338();
    data_0213e4dc = 3;
    func_020684ec();
    func_02068444();
    *(vu32 *)0x04001000 = *(vu32 *)0x04001000 & 0xfffeffff;
    func_0207eda4(1, (int)func_0200348c);
    func_0207eda4(2, (int)func_02003408);
    func_0207ec14(1);
    func_0207ec14(2);
    hp = (vu16 *)0x04000208;
    (void)*hp;
    *hp = 1;
    uVar7 = func_02080af4();
    func_0206848c(1);
    func_020684bc(1);
    func_02002cc8();
    func_02002764(1);
    func_0200274c(2);
    func_0206d71c();
    func_0208838c(-1);
    func_0208845c(-1);
    return func_02006688();
}
