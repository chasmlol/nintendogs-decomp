#include "ctx.h"

extern u32 data_ov011_0215d324;

extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *p, u16 *b);
extern void func_020068c0(u8 *p, u32 a);
extern void func_02006700(u32 a, u32 b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov011_0215d284(void);
extern void func_02005e18(u16 *b);
extern u16 *func_0200563c(u8 *p, u16 *b);
extern void func_02005508(u16 *p, u32 a);
extern void func_0200560c(u16 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern void func_0208ba24(u8 *p);
extern void func_0208d1a0(u8 *p, u32 a);
extern u32 func_ov011_0215caa8(u8 *p);
extern void func_020042e8(u16 *p);
extern u32 func_ov011_0215c82c(u8 *p);
extern void func_02005900(void);
extern void func_02006348(u32 a, u32 b, u32 c);

void func_ov011_0215c6cc(void)
{
    s32 iVar1;
    u8 *piVar2;
    u16 *puVar3;
    u16 pal[2];
    u16 blk[17];

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    pal[0] = 255;
    pal[1] = 0;
    func_020068c4(piVar2, pal);
    func_020068c0(piVar2, 4);
    func_02006700(0, (u32)func_020068a0);
    func_02006700(1, (u32)func_020067d8);
    func_02006700(2, (u32)func_02006734);
    func_02006700(3, (u32)func_ov011_0215d284);
    func_02005e18(blk);
    blk[1] = 1;
    blk[3] = 1;
    blk[5] = 1;
    blk[4] = 0;
    blk[11] = 7;
    blk[12] = 0x30;
    blk[7] = 8;
    blk[8] = 0x40;
    puVar3 = func_0200563c(piVar2, blk);
    func_02005508(puVar3, 0xfc00);
    func_0200560c(puVar3 + 0x16, 1, 0, 0, 1, 5, 1, 0);
    func_0208ba24(piVar2);
    func_0208d1a0(piVar2, 1);
    data_ov011_0215d324 = func_ov011_0215caa8(piVar2);
    func_020042e8(puVar3);
    *(u32 *)data_ov011_0215d324 = func_ov011_0215c82c(piVar2);
    func_02005900();
    func_02006348(0xf03, 30, 2);
}
