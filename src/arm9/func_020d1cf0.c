#include "ctx.h"

extern void func_020be1d8(u32 a);
extern void func_020cf9c8(u8 *p, s32 a, s32 b, s32 c);
extern void func_020cf9bc(u8 *p);
extern u16 data_0214efdc;

void func_020d1cf0(u8 *p)
{
    func_020be1d8(1);
    if (*(s32 *)(p + 0x34) == 2) {
        func_020cf9c8(p, 0x15, -1, 0);
    }
    if ((u16)(data_0214efdc & 0x200) == 0) {
        return;
    }
    if (*(s32 *)(p + 0x34) == 0x15) {
        func_020cf9c8(p, 0x1c, -1, 0);
        func_020cf9bc(p);
        return;
    }
    if (*(s32 *)(p + 0x34) == 0x1c) {
        func_020cf9c8(p, 0x15, -1, 0);
        func_020cf9bc(p);
        return;
    }
}
