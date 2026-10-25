#include "ctx.h"

extern void func_020393d8(u8 *p, u32 v);
extern void func_02022b7c(u8 *p);
extern s32 func_0202c87c(u8 *p, s32 v);
extern void func_0203e908(u8 *p, s16 v);

void func_ov003_02185898(u8 *p)
{
    s32 r;
    func_020393d8(p, 0xfe88);
    func_02022b7c(p);
    r = func_0202c87c(p, 1);
    if (r != 0) {
        return;
    }
    if (*(u16 *)(p + 252) > 200) {
        func_0203e908(p, 0x231);
    }
}
