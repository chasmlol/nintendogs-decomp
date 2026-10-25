#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025a84(u8 *p);
extern void func_02020768(u8 *p);
void func_ov003_0216728c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x221;
    func_02026bac(p);
    func_02025a84(p);
    func_02020768(p);
}
