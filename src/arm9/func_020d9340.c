#include "ctx.h"

extern u8 *data_02159428;
extern void func_020c9124(u8 *p, u32 a, u32 b, u32 c);
extern void func_020d9484(u8 *p, u32 a);

void func_020d9340(u8 *p)
{
    s32 v;
    s32 r4;
    u8 c;

    v = (*(u16 *)(data_02159428 + 6) != 0x12) ? 0x19a : 0xcd;
    c = *(u8 *)(p + 0x2c);
    switch (c) {
    case 1:
        *(u16 *)(p + 0x38) = *(u16 *)(p + 0x38) + 8;
        func_020c9124(p + 4, *(u32 *)(p + 0x34), *(u16 *)(p + 0x38), *(u32 *)(p + 0x3c));
        break;
    case 0:
        *(u16 *)(p + 0x38) = *(u16 *)(p + 0x38) - 8;
        func_020c9124(p + 4, *(u32 *)(p + 0x34), *(u16 *)(p + 0x38), *(u32 *)(p + 0x3c));
        break;
    case 2:
        *(u32 *)(p + 0x34) = *(u32 *)(p + 0x34) + v;
        func_020c9124(p + 4, *(u32 *)(p + 0x34), *(u16 *)(p + 0x38), *(u32 *)(p + 0x3c));
        *(u32 *)(p + 0x18) = *(u32 *)(p + 0x18) + 0x14000;
        break;
    }
    *(s16 *)(p + 0x40) = *(s16 *)(p + 0x40) - 1;
    if (*(s16 *)(p + 0x40) >= 0) {
        return;
    }
    c = *(u8 *)(p + 0x2c);
    switch (c) {
    case 2:
        r4 = *(u32 *)(p + 0x30) != 0;
        break;
    case 1:
        *(u32 *)(p + 0x30) = 0;
        r4 = 2;
        break;
    case 0:
        *(u32 *)(p + 0x30) = 1;
        r4 = 2;
        break;
    }
    func_020d9484(p, r4);
}
