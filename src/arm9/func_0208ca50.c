#include "ctx.h"
void func_0208ca50(u8 *param_1, s16 param_2)
{
    s32 k = (s32)param_2 * 12;
    u8 *r2 = param_1 + 192;
    u32 idx = *(u16 *)(r2 + k);
    u8 *r1 = r2 + k;
    u8 *e = r1 + (idx << 2);
    u8 *it = *(u8 **)(e + 4);
    if (it == NULL) {
        return;
    }
    it = it + 0x5000;
    *(s16 *)(it + 70) = *(s16 *)(it + 70) - 1;
    if (*(s16 *)(it + 70) <= 0) {
        *(u16 *)(it + 68) = 0xffff;
    }
}
