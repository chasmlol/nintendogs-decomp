#include "ctx.h"

extern u32 *data_ov024_0215c364;
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_02006700(s32 a, void *b);
extern void func_020d72bc(void);
extern void func_02005e18(u16 *p);
extern u8 *func_0200563c(u8 *a, u16 *b);
extern void func_0200560c(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern u8 *func_020038b8(u8 *a, s32 b);
extern void func_020042e8(u8 *a);
extern void func_0208e398(u8 *a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *a, u16 *b);
extern u8 *func_0208f698(u8 *a);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern u64 func_02006a30(s32 *a, s32 *b);
extern void func_02005900(u32 *a, s32 b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_020d72bc(void);

void func_ov024_0215c1b8(void)
{
    u16 local_48[2];
    u16 buf[20];
    u16 auStack_1c[8];
    u8 *piVar2;
    u8 *puVar3;
    u32 *puVar4;
    u8 *puVar5;
    u8 *iVar1;
    u64 hi;

    iVar1 = (u8 *)(s32)func_02002e60();
    piVar2 = func_02002e58((s32)iVar1);
    local_48[0] = 0xff;
    local_48[1] = 0;
    func_020068c4(piVar2, local_48);
    func_020068c0(piVar2, 4);
    func_02006700(1, (void *)func_020068a0);
    func_02006700(2, (void *)func_020067d8);
    func_02006700(3, (void *)func_02006734);
    func_020d72bc();
    func_02005e18(buf);
    buf[1] = 1;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 0;
    buf[7] = 8;
    buf[11] = 7;
    buf[12] = 16;
    buf[8] = 64;
    puVar3 = func_0200563c(piVar2, buf);
    func_0200560c(puVar3 + 44, 1, 0, 0, 1, 5, 1, 0);
    puVar4 = (u32 *)func_020038b8(piVar2, 4);
    *puVar4 = 0;
    data_ov024_0215c364 = puVar4;
    func_020042e8(puVar3);
    func_0208e398(piVar2);
    func_0208f380();
    func_0208e1e8(auStack_1c);
    puVar5 = func_0208e150(piVar2, auStack_1c);
    func_0208f698(puVar5);
    asm { mov iVar1, r0 }
    {
        u32 *pa = (u32 *)(iVar1 + 0x3c);
        u32 *pb;
        *pa = 0;
        pa[1] = 0x400;
        pa[2] = 0;
        *(u32 *)(iVar1 + 0x30) = 0;
        pb = (u32 *)(iVar1 + 0x30);
        pb[1] = 0x3000;
        pb[2] = 0x7000;
        func_02067e34((s32 *)pa, (s32 *)pb, (s32 *)(iVar1 + 0x48));
    }
    hi = func_02006a30((s32 *)(iVar1 + 0x48), (s32 *)(iVar1 + 0x48));

    {
        u32 *pp = data_ov024_0215c364;
        *pp = (u32)puVar5;
        func_02005900(pp, (s32)(hi >> 32));
    }
}
