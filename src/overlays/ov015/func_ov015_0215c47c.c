#include "ctx.h"

extern u32 *data_ov015_0215caec;

extern int func_02002e60(void);
extern int func_02002e58(int a);
extern void func_020068c4(int *a, u16 *b);
extern void func_020068c0(int *a, u32 b);
extern void func_02006700(u32 a, u32 b);
extern void func_02005e18(u16 *a);
extern u16 *func_0200563c(int *a, u16 *b);
extern void func_0200560c(u16 *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern u32 *func_020038b8(int *a, u32 b);
extern void func_020042e8(u16 *a);
extern int func_ov015_0215c5d8(int *a);
extern void func_020e90ac(int *a);
extern u64 func_020e8f8c(u32 a);
extern void func_02005900();
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov015_0215c99c(void);

void func_ov015_0215c47c(void)
{
    int iVar1;
    int *piVar2;
    u16 *puVar3;
    u32 *puVar4;
    u16 local_38[2];
    u16 aStack_34[20];

    iVar1 = func_02002e60();
    piVar2 = (int *)func_02002e58(iVar1);
    local_38[0] = 0xff;
    local_38[1] = 0;
    func_020068c4(piVar2, local_38);
    func_020068c0(piVar2, 4);
    func_02006700(0, (u32)func_020068a0);
    func_02006700(1, (u32)func_020067d8);
    func_02006700(2, (u32)func_02006734);
    func_02006700(3, (u32)func_ov015_0215c99c);
    func_02005e18(aStack_34);
    aStack_34[1] = 1;
    aStack_34[3] = 1;
    aStack_34[5] = 1;
    aStack_34[4] = 0;
    aStack_34[7] = 8;
    aStack_34[11] = 7;
    aStack_34[12] = 16;
    aStack_34[8] = 64;
    puVar3 = func_0200563c(piVar2, aStack_34);
    func_0200560c(puVar3 + 0x16, 1, 0, 0, 1, 5, 1, 0);
    puVar4 = func_020038b8(piVar2, 0x14);
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    data_ov015_0215caec = puVar4;
    func_020042e8(puVar3);
    iVar1 = func_ov015_0215c5d8(piVar2);
    *data_ov015_0215caec = iVar1;
    func_020e90ac(piVar2);
    func_020e8f8c(0);
    func_02005900();
}
