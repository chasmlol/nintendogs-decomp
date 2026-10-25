#include "ctx.h"

extern u8 data_0215ae10;
extern u32 data_0215ae34;
extern u32 data_02144a4c;

u32 func_020df0d4(void)
{
    if (data_0215ae10 == 5) {
        goto fail;
    }
    if (data_0215ae10 == 6) {
        goto fail;
    }
    if (data_0215ae34 == 0) {
        goto ok;
    }
fail:
    return 0xfffffff5;
ok:
    return data_02144a4c;
}
