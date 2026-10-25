#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_02003a44(void);

void func_02113dc4(u8 *p)
{
    if (*(u32 *)(p + 8) == 0) {
        goto setA;
    }
    if (func_02003a44() == 0) {
        return;
    }
    *(u32 *)(data_0215be48 + 0x4000 + 0x868) = 1;
    return;
setA:
    *(u32 *)(data_0215be48 + 0x4000 + 0x868) = 1;
}
