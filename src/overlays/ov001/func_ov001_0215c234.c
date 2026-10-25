#include "ctx.h"

extern void func_02005e18(u16 *p);
extern u16 *func_0200563c(u8 *p, u16 *cfg);
extern void func_02005564(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_0200553c(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020055dc(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_020055b4(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_020054dc(u16 *p, s32 a);
extern void func_020054d4(u16 *p, s32 a);
extern void func_020075c8(u8 *p);

u16 *func_ov001_0215c234(u8 *param_1)
{
    u16 buf[20];
    u16 *puVar2;
    u16 zero;

    func_02005e18(buf);
    zero = 0;
    buf[5] = zero;
    buf[6] = zero;
    buf[1] = 28;
    buf[3] = 1;
    buf[4] = 5;
    buf[2] = 22;
    buf[7] = 3;
    buf[14] = 4;
    buf[15] = 8;
    buf[8] = 96;
    puVar2 = func_0200563c(param_1, buf);
    func_02005564(puVar2 + 0x16, 2, zero, 1, zero, 4);
    func_0200553c(puVar2 + 0x16, 1, zero, 1, zero, 8);
    func_020055dc(puVar2 + 0x3c, 3, zero, zero, zero, 8, 2, zero);
    func_020055b4(puVar2 + 0x3c, 2, zero, zero, zero, 12, 4);
    func_020054dc(puVar2, 0x00200010);
    func_020054d4(puVar2, 0x00200010);
    *(vu16 *)0x04001050 = 0;
    *(vu32 *)0x04001000 &= 0xffff1fff;
    func_020075c8(param_1);
    return puVar2;
}
