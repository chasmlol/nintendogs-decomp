#include "ctx.h"

u32 func_0208fc14(u16 *param_1)
{
    u32 uVar2 = 0;
    u16 sVar1;
    sVar1 = *param_1;
    if (sVar1 == 0x20 || sVar1 == 0x3000) {
        uVar2 = 1;
        while (sVar1 != 0) {
            if (sVar1 != 0x20 && sVar1 != 0x3000) {
                uVar2 = 0;
                break;
            }
            param_1 = param_1 + 1;
            sVar1 = *param_1;
        }
    }
    return uVar2;
}
