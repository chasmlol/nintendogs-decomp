#include "ctx.h"

extern void func_02005e18(u16 *b);
extern void func_020995b8(u16 *b);
extern u8 *func_0200563c(s32 *p, u16 *b);
extern void func_020075c8(s32 *p);
extern void func_020054dc(u8 *p, u32 a);
extern void func_0200560c(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
extern void func_020055b4(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_02099554(u8 *p);

u16 *func_ov029_0215c3a4(s32 *param_1)
{
    u32 pad[4];
    u16 b[20];
    u8 *puVar1;

    func_02005e18(b);
    b[1] = 23;
    b[4] = 0;
    b[3] = 1;
    b[5] = 1;
    b[7] = 4;
    b[11] = 3;
    b[12] = 16;
    b[8] = 96;
    b[14] = 384;
    b[15] = 8;
    func_020995b8(b);
    puVar1 = func_0200563c(param_1, b);
    func_020075c8(param_1);
    func_020054dc(puVar1, 0x00200010);
    func_0200560c(puVar1 + 44, 1, 0, 0, 0, 0, 1, 0);
    func_020055b4(puVar1 + 120, 2, 0, 0, 0, 2, 1);
    func_02099554(puVar1);
    return (u16 *)puVar1;
}
