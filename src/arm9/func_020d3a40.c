#include "ctx.h"

extern s32 func_020c8db4(s32 a);
extern void func_020c98c0(u8 *p, s32 a);

void func_020d3a40(s32 *p, s32 v)
{
    s32 t;

    *p = v;
    t = *p;
    switch (t) {
    case 0:
        *(u16 *)((u8 *)p + 4) = 0;
        break;
    case 1:
        *(s16 *)((u8 *)p + 0x5c) = (s16)func_020c8db4(-1);
        break;
    case 2:
        *(s16 *)((u8 *)p + 0x5c) = (s16)func_020c8db4(-1);
        func_020c98c0((u8 *)p + 8, *(s16 *)((u8 *)p + 0x5c));
        *(s32 *)((u8 *)p + 0x58) = 0;
        break;
    }
}
