#include "ctx.h"
extern u8 *data_02159468;
u32 func_020bc910(void)
{
    s16 i = 0;
    u8 *d = data_02159468;
    u32 v;
    u32 t;
    for (;;) {
        if (i < 0 || *(s16 *)(d + 0x20) <= i) {
            v = 0;
        } else {
            v = *(u32 *)(d + i * 4 + 4);
        }
        if (v != 0) {
            t = (u16)(s16)(*(s16 *)(v + 0x90) - 2);
            if (t <= 1) {
                return 1;
            }
        }
        i = i + 1;
        if (i >= 7) {
            return 0;
        }
    }
}
