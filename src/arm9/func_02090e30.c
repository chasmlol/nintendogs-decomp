#include "ctx.h"
extern u32 *data_02159030;
void func_02090e30(void)
{
    s16 i;
    for (i = 0; i < 14; i++) {
        u32 *p = data_02159030;
        if ((p[0] & (1u << i)) == 0) {
            u32 *q = p + i;
            q[1] = 0;
        }
    }
}
