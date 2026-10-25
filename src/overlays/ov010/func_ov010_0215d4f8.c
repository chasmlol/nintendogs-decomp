#include "ctx.h"

extern u32 data_ov010_0215d9e0;
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_02006700(s32 a, void *b);
extern void func_02005e18(u16 *p);
extern u8 *func_0200563c(u8 *a, u16 *b);
extern void func_020054ec(u8 *a, s32 b, s32 c);
extern void func_0200560c(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_020055b4(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02096264(u8 *a, s32 b, s32 c);
extern u8 *func_ov010_0215d704(u8 *a);
extern void func_020042e8(u8 *a);
extern void func_02080074(void);
extern void func_0206b8a8(u8 *a, s32 b, s32 c);
extern void func_0206b0a4(u8 *a, s32 b, s32 c);
extern void func_0206b3e4(u8 *a, s32 b, s32 c);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov010_0215d9c0(void);
extern void func_02005900(u32 a, u32 b);

void func_ov010_0215d4f8(void)
{
    u16 local_40[2];
    u16 buf[20];
    u8 *piVar4;
    u8 *puVar5;
    u8 *puVar6;
    s16 i;
    u32 v;

    {
        s32 iVar3 = func_02002e60();
        piVar4 = func_02002e58(iVar3);
    }
    local_40[0] = 0xff;
    local_40[1] = 0;
    func_020068c4(piVar4, local_40);
    func_020068c0(piVar4, 4);
    func_02006700(3, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(0, (void *)func_ov010_0215d9c0);
    func_02005e18(buf);
    buf[1] = 4;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 3;
    buf[7] = 3;
    buf[8] = 64;
    puVar5 = func_0200563c(piVar4, buf);
    func_020054ec(puVar5, 0, 0);
    func_0200560c(puVar5 + 44, 1, 0, 0, 1, 0, 0, 0);
    func_020055b4(puVar5 + 44, 0, 0, 0, 0, 5, 1);
    i = 0;
    do {
        func_02096264(piVar4, 1, (u16)i);
        i = (s16)(i + 1);
    } while (i < 3);
    i = 0;
    do {
        func_02096264(piVar4, 2, (u16)i);
        i = (s16)(i + 1);
    } while (i < 3);
    puVar6 = func_ov010_0215d704(piVar4);
    data_ov010_0215d9e0 = (u32)puVar6;
    func_020042e8(puVar5);
    func_02080074();
    func_0206b8a8(*(u8 **)&data_ov010_0215d9e0 + 0x6018, 0, 0x20);
    func_0206b0a4(*(u8 **)&data_ov010_0215d9e0 + 0x18, 0, 0x6000);
    func_0206b3e4(*(u8 **)&data_ov010_0215d9e0 + 0x6038, 0, 0x600);
    v = *(vu16 *)0x04000304;
    v &= ~0x8000;
    *(vu16 *)0x04000304 = v;
    func_02005900(v, 0x04000304);
}
