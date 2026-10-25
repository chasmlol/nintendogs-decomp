#include "ctx.h"
extern u16 *data_0215942c;
u32 func_0202e2d0(u8 *obj)
{
    u8 *q;
    if (*data_0215942c == 17) {
        q = *(u8 **)(obj + 0x9e8);
        if (*(u8 *)(q + 0x72) == 2) {
            return 1;
        }
    }
    return 0;
}
