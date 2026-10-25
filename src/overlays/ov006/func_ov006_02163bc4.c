#include "ctx.h"

extern void func_ov006_02163e7c(u8 *p);
extern void func_ov006_02163bf0(u8 *p);

void func_ov006_02163bc4(u8 *p)
{
    u32 *q = *(u32 **)(p + 0x2c);
    *q = *q + 1;
    func_ov006_02163e7c(p);
    func_ov006_02163bf0(p);
}
