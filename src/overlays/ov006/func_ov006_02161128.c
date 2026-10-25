#include "ctx.h"

u32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, u32 a, u32 b);
void func_020398e4(u8 *p);

void func_ov006_02161128(u8 *param_1)
{
    s16 h;
    u32 r;
    h = *(s16 *)(param_1 + 0x152);
    if (h == 0x209) {
        r = func_0203567c(param_1);
        if (r != 0) {
            func_0203e8cc(param_1, 0, 40);
        }
    }
    func_020398e4(param_1);
}
