#include "ctx.h"
extern u8 data_ov021_0215c6a0[];
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *p, u16 *q);
extern void func_020068c0(u8 *p, s32 a);
extern void func_02006700(s32 a, void *b);
extern void func_0208c604(u8 *p, s32 a);
extern void func_02005e18(u16 *a);
extern u8 *func_0200563c(u8 *p, u16 *q);
extern void func_020054dc(u8 *p, s32 a);
extern void func_0200560c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern u8 *func_ov021_0215c584(u8 *p);
extern void func_020042e8(u8 *p);
extern void func_0206b64c(u8 *p, s32 a, s32 b);
extern void func_0206b7d8(u8 *p, s32 a, s32 b);
extern void func_02005900(u32 a, u32 b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov021_0215c64c(void);

void func_ov021_0215c414(void)
{
    s32 iVar3;
    u8 *p;
    u16 la[2];
    u16 arr[20];
    u8 *puVar5;
    u8 *puVar6;
    u16 *puVar2;
    u32 uVar1;

    iVar3 = func_02002e60();
    p = func_02002e58(iVar3);
    la[0] = 0xff;
    la[1] = 0;
    func_020068c4(p, la);
    func_020068c0(p, 4);
    func_02006700(0, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(3, (void *)func_ov021_0215c64c);
    func_0208c604(p, 6);
    func_02005e18(arr);
    arr[1] = 1;
    arr[3] = 1;
    arr[4] = 0;
    arr[5] = 0;
    arr[7] = 15;
    arr[8] = 112;
    puVar5 = func_0200563c(p, arr);
    func_020054dc(puVar5, 0x200010);
    func_0200560c(puVar5 + 44, 1, 0, 0, 1, 5, 1, 0);
    puVar6 = func_ov021_0215c584(p);
    *(u8 **)data_ov021_0215c6a0 = puVar6;
    func_020042e8(puVar5);
    func_0206b64c(*(u8 **)(*(u8 **)(*(u8 **)data_ov021_0215c6a0 + 0x10) + 0x14), 0, 0x4000);
    func_0206b7d8(*(u8 **)(*(u8 **)(*(u8 **)data_ov021_0215c6a0 + 0x14) + 0xc), 0, 0x100);
    puVar2 = (u16 *)0x04000304;
    uVar1 = *puVar2;
    *puVar2 = uVar1 & ~0x8000;
    func_02005900((u32)(uVar1 & ~0x8000), (u32)puVar2);
}
