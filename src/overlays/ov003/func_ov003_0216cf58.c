#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_0202db24(u8 *p, s32 v);

void func_ov003_0216cf58(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x21a;
    func_02026bac(p);
    func_02025548(p);
    func_0202db24(p, 0);
}
