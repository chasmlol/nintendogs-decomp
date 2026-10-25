#include "ctx.h"

extern u8 *data_02159438;
extern u8 *func_020bc3c4(void);

void func_020aa128(u16 p0)
{
    *(s16 *)(data_02159438 + 10) = 1;
    *(u16 *)(data_02159438 + 12) = p0;
    if (*(u16 *)(data_02159438 + 6) == 1) {
        *(u16 *)(data_02159438 + 8) = 0;
        {
            u8 *r = func_020bc3c4();
            *(u16 *)(r + 38) = *(u16 *)(r + 38) ^ 1;
        }
        return;
    }
    *(s16 *)(data_02159438 + 8) = 1;
}
