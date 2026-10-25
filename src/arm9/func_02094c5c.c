#include "ctx.h"

extern BOOL func_020927e0(u8 *p);
extern BOOL func_02092048(u8 *p, u32 *a, u32 *b);

u32 func_02094c5c(u8 *param_1, u32 *param_2, u32 *param_3)
{
    u32 uVar4 = 0;
    u8 *puVar3;
    puVar3 = param_1 + 0x7f8;
    if (func_020927e0(puVar3) != 0) {
        if (!func_02092048(puVar3, param_2, param_3) && (s8)param_1[0x8a] >= 3) {
            uVar4 = 1;
        }
    }
    return uVar4;
}
