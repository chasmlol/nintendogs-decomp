#include "ctx.h"

extern void func_02005e18(u16 *p);
extern void func_020995b8(u16 *p);
extern u16 *func_0200563c(u8 *p, u16 *cfg);
extern void func_020054ec(u16 *p, s32 a, s32 b);
extern void func_0200560c(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_020055b4(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_020055dc(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_020054dc(u16 *p, s32 a);
extern void func_020054d4(u16 *p, s32 a);
extern void func_02099554(u16 *p);

u16 *func_ov007_0215f630(u8 *param_1)
{
    u16 buf[20];
    u16 *puVar1;

    func_02005e18(buf);
    buf[1] = 21;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 1;
    func_020995b8(buf);
    buf[2] = 18;
    buf[6] = 0;
    buf[11] = 3;
    buf[12] = 16;
    buf[7] = 4;
    buf[8] = 96;
    buf[14] = 384;
    buf[15] = 8;
    puVar1 = func_0200563c(param_1, buf);
    func_020054ec(puVar1, 1, 1);
    func_0200560c(puVar1 + 0x16, 2, 0, 0, 1, 0, 0, 0);
    func_020055b4(puVar1 + 0x16, 2, 0, 0, 0, 5, 4);
    func_020055dc(puVar1 + 0x3c, 2, 0, 0, 0, 5, 1, 0);
    func_020054dc(puVar1, 0x10);
    func_020054d4(puVar1, 0x00200010);
    func_02099554(puVar1);
    return puVar1;
}
