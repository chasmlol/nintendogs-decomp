#include "ctx.h"

extern u8 *data_02159430;

#define GP (*(u8 * volatile *)&data_02159430)

void func_020a880c(void)
{
    s32 i = 0;
    *(s32 *)GP = -1;
    do {
        *(s16 *)(GP + i * 2 + 4) = -1;
        *(s32 *)(GP + i * 4 + 8) = 1;
        i = (s16)(i + 1);
    } while (i < 2);
}
