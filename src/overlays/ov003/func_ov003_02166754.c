#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);

void func_ov003_02166754(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x25f;
    func_02026bac(p);
    func_02025548(p);
    func_02020768(p);
}
