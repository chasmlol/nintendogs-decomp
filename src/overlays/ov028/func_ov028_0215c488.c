#include "ctx.h"

extern u8 data_ov028_0215df08[];
extern u8 data_ov028_0215df10[];
extern u8 data_ov028_0215df0c[];
extern void func_020068c4(s32 *p, void *q);
extern void func_020068c0(s32 *p, s32 a);
extern void func_02006700(int a, int b);
extern s32 func_02002e60(void);
extern s32 func_02002e58(s32 v);
extern u8 *func_020038b8(s32 *p, int n);
extern void func_ov028_0215cde8(s32 *p, s32 a, s32 b);
extern void func_020b4494(u8 *p, int v);
extern void func_02005e18(u16 *p);
extern u8 *func_0200563c(s32 *p, u16 *q);
extern void func_0200560c(u16 *p, int a, int b, int c, int d, int e, int f, int g);
extern void func_020042e8(u8 *p);
extern void func_0208e398(s32 *p);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *p);
extern u8 *func_0208e150(s32 *p, u16 *q);
extern s32 func_0208f698(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(u32 *a, s32 *b);
extern void func_02005900(u8 *p);

extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);

void func_ov028_0215c488(void)
{
    s32 iVar1;
    s32 *piVar2;
    u8 *uVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *puVar6;
    u32 *pa;
    u32 *pb;
    u16 local_48[2];
    u16 uStack_44[20];
    u16 auStack_1c[8];

    iVar1 = func_02002e60();
    piVar2 = (s32 *)func_02002e58(iVar1);
    local_48[0] = 0xff;
    local_48[1] = 0;
    func_020068c4(piVar2, local_48);
    func_020068c0(piVar2, 4);
    func_02006700(1, (s32)func_020068a0);
    func_02006700(2, (s32)func_020067d8);
    func_02006700(3, (s32)func_02006734);
    uVar3 = func_020038b8(piVar2, 0x74f8);
    *(u8 **)data_ov028_0215df10 = uVar3;
    uVar3 = func_020038b8(piVar2, 0x74f8);
    *(u8 **)data_ov028_0215df08 = uVar3;
    func_ov028_0215cde8(piVar2, (s32)uVar3, 0x74f8);
    func_020b4494(*(u8 **)data_ov028_0215df10, 0);
    func_02005e18(uStack_44);
    uStack_44[1] = 1;
    uStack_44[3] = 1;
    uStack_44[5] = 1;
    uStack_44[4] = 0;
    uStack_44[7] = 8;
    uStack_44[11] = 7;
    uStack_44[12] = 0x10;
    uStack_44[8] = 0x40;
    puVar4 = func_0200563c(piVar2, uStack_44);
    func_0200560c((u16 *)(puVar4 + 0x2c), 1, 0, 0, 1, 5, 1, 0);
    puVar5 = func_020038b8(piVar2, 4);
    *(s32 *)puVar5 = 0;
    *(u8 **)data_ov028_0215df0c = puVar5;
    func_020042e8(puVar4);
    func_0208e398(piVar2);
    func_0208f380();
    func_0208e1e8(auStack_1c);
    puVar6 = func_0208e150(piVar2, auStack_1c);
    func_0208f698(puVar6);
    asm { mov iVar1, r0 }
    pa = (u32 *)(iVar1 + 0x3c);
    *(s32 *)(iVar1 + 0x3c) = 0;
    pa[1] = 0x400;
    pa[2] = 0;
    *(s32 *)(iVar1 + 0x30) = 0;
    pb = (u32 *)(iVar1 + 0x30);
    pb[1] = 0x3000;
    pb[2] = 0x7000;
    piVar2 = (s32 *)(iVar1 + 0x48);
    func_02067e34((s32 *)(iVar1 + 0x3c), (s32 *)(iVar1 + 0x30), piVar2);
    func_02006a30((u32 *)(iVar1 + 0x48), (s32 *)(iVar1 + 0x48));
    puVar5 = *(u8 **)data_ov028_0215df0c;
    *(u8 **)puVar5 = puVar6;
    func_02005900(puVar5);
}
