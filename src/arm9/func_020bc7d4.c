#include "ctx.h"
#pragma opt_propagation off

extern u8 *data_02159468;

void func_020bc7d4(void)
{
    s16 i;
    u32 zero;
    u8 **gp;
    u32 v;
    u8 *o;

    i = 0;
    gp = &data_02159468;
    zero = (u32)i;
    do {
        if (i < 0) {
            goto zero_l;
        }
        o = *gp;
        if (*(s16 *)(o + 0x20) > i) {
            goto load;
        }
zero_l:
        v = zero;
        goto have;
load:
        v = *(u32 *)(o + i * 4 + 4);
have:
        if (v != 0) {
            void (*fp)(u32) = *(void (**)(u32))(v + 0x208);
            if (fp != 0) {
                fp(v);
            }
        }
        i = (s16)(i + 1);
    } while (i < 7);
}
