#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 v);

void func_ov003_02169c20(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x19;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 1);
}
