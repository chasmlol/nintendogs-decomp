#include "ctx.h"
extern u8 *data_0215942c;
u32 func_0202e29c(u8 *param_1)
{
    if (*(u16 *)data_0215942c == 0x11 && *(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 4) {
        return 1;
    }
    return 0;
}
