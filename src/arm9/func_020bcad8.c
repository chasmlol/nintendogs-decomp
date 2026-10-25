#include "ctx.h"

extern u8 *data_02159468;
extern s32 func_020c1f34(u8 *p);

u8 *func_020bcad8(s32 param_1)
{
    s16 i;
    u8 *r8;
    u8 *z;
    s32 skip;

    i = 0;
    z = NULL;
    do {
        if (i >= 0) {
            if (*(s16 *)(data_02159468 + 0x20) > i) {
                goto load;
            }
        }
        r8 = z;
        goto have;
    load:
        r8 = *(u8 **)(data_02159468 + i * 4 + 4);
    have:
        if (r8 != NULL) {
            if (*(s16 *)(r8 + 0x90) == 0 || *(s16 *)(r8 + 0x90) == 2) {
                skip = 1;
            } else if (*(s16 *)(r8 + 0x94) == 0x35 && func_020c1f34(r8) == 0) {
                skip = 1;
            } else {
                skip = 0;
            }
            if (!skip) {
                if (param_1 == *(s16 *)(r8 + 0x98)) {
                    return r8;
                }
                if (param_1 == *(s16 *)(r8 + 0x9a)) {
                    return r8;
                }
            }
        }
        i = (s16)(i + 1);
    } while (i < 7);
    return NULL;
}
