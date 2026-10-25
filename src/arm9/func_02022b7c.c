#include "ctx.h"

void func_02022b7c(u8 *param_1)
{
    u8 b6;
    if (*(u8 *)(param_1 + 0xa3) == 0) {
        return;
    }
    b6 = *(u8 *)(param_1 + 0xa6);
    if (*(s16 *)(param_1 + 0xf0) != *(s16 *)(param_1 + 0xf2) + 0xc) {
        return;
    }
    if (*(u8 *)(param_1 + 0xa5) == b6) {
        *(u16 *)(param_1 + 0x122) = *(u16 *)(param_1 + 0x122) + 1;
    }
}
