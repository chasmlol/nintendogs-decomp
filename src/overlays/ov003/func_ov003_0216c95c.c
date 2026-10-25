#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 v);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_0216c95c(u8 *p)
{
    u8 uVar1;
    s32 x;
    ((Obj *)p)->s0 = 0x18c;
    x = *(s16 *)(p + 0xee);
    if (x == 0x1ce) goto zero;
    if (x != 0x1cf) goto nine;
zero:
    uVar1 = 0;
    goto store;
nine:
    uVar1 = 9;
store:
    *(u8 *)(p + 147) = uVar1;
    *(u8 *)(p + 152) = 9;
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 8, 1);
    func_0202db24(p, 8);
}
