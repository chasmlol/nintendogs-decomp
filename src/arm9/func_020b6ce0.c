#include "ctx.h"

extern void func_02005e18(u16 *b);
extern void func_020995b8(u16 *b);
extern u8 *func_0200563c(u8 *p, u16 *b);
extern void func_020055b4(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_02099554(u8 *p);

u16 *func_020b6ce0(u8 *param_1)
{
    u32 pad[3];
    u16 b[20];
    u8 *puVar1;

    func_02005e18(b);
    b[1] = 4;
    b[2] = 4;
    b[3] = 1;
    b[4] = 0;
    b[5] = 0;
    b[6] = 0;
    func_020995b8(b);
    b[7] = 3;
    b[14] = 4;
    b[8] = 64;
    puVar1 = func_0200563c(param_1, b);
    func_020055b4(puVar1 + 44, 3, 0, 0, 0, 6, 1);
    func_020055b4(puVar1 + 120, 3, 0, 0, 0, 6, 1);
    func_02099554(puVar1);
    return (u16 *)puVar1;
}
