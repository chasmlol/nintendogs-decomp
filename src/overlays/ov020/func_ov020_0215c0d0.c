#include "ctx.h"

extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_02006700(s32 a, void *b);
extern void func_02005e18(u16 *p);
extern u8 *func_0200563c(u8 *a, u16 *b);
extern void func_0200560c(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern u8 *func_020038b8(u8 *a, s32 b);
extern u32 *data_ov020_0215c560;
extern void func_020042e8(u8 *a);
extern u8 *func_ov020_0215c21c(u8 *a);
extern void func_02005900(u8 *a, u32 *b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov020_0215c51c(void);

void func_ov020_0215c0d0(void)
{
    u16 local[2];
    u16 buf[20];
    u8 *piVar2;
    u8 *puVar3;
    u32 *puVar4;
    u8 *puVar5;
    s32 iVar1;

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    local[0] = 0xff;
    local[1] = 0;
    func_020068c4(piVar2, local);
    func_020068c0(piVar2, 4);
    func_02006700(0, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(3, (void *)func_ov020_0215c51c);
    func_02005e18(buf);
    buf[1] = 1;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 0;
    buf[7] = 32;
    buf[11] = 15;
    buf[12] = 16;
    buf[8] = 64;
    puVar3 = func_0200563c(piVar2, buf);
    func_0200560c(puVar3 + 44, 1, 0, 0, 1, 5, 1, 0);
    puVar4 = (u32 *)func_020038b8(piVar2, 0x14);
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    data_ov020_0215c560 = puVar4;
    func_020042e8(puVar3);
    puVar5 = func_ov020_0215c21c(piVar2);
    puVar4 = data_ov020_0215c560;
    *puVar4 = (u32)puVar5;
    func_02005900(puVar5, puVar4);
}
