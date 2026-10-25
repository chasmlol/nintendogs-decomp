#include "ctx.h"

extern s32 func_020012ac(u16 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

s32 func_02001840(u16 *param_1)
{
    u8 *b;
    u16 a58;
    u16 a5a;
    u8 a5c;
    u16 a5e;
    u16 a60;
    u8 a5d;
    u8 a62;
    u8 a63;
    s32 iVar1;

    b = (u8 *)0x027ffc80;
    a58 = *(u16 *)(b + 0x58);
    a5a = *(u16 *)(b + 0x5a);
    a5c = *(u8 *)(b + 0x5c);
    a5d = *(u8 *)(b + 0x5d);
    a5e = *(u16 *)(b + 0x5e);
    a60 = *(u16 *)(b + 0x60);
    a62 = *(u8 *)(b + 0x62);
    a63 = *(u8 *)(b + 0x63);
    if (a58 != 0 || a5e != 0 || a5a != 0 || a60 != 0) {
        iVar1 = func_020012ac(param_1, a58, a5a, a5c, a5d, a5e, a60, a62, a63);
        if (iVar1 == 0) {
            goto ret1;
        }
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return 1;
ret1:
    return 1;
}
