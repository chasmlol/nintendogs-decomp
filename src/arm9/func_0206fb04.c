#include "ctx.h"

void *func_0206fd10(void);

u32 func_0206fb04(u32 param_1, u32 param_2, u32 *param_3, u32 *param_4)
{
    u8 *b = (u8 *)func_0206fd10();
    u8 *e = b + 504 + param_2 * 104;
    if (*(u32 *)b == 4 && *(u32 *)(b + 0x14) == param_1) {
        *param_4 = *(u32 *)(e + 4);
        *param_3 = *(u32 *)(e + 0x10);
        return 1;
    }
    return 0;
}
