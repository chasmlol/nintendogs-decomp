#include "ctx.h"

typedef struct { u32 value : 24; u32 top : 8; } P24;

u8 *func_02071914(u32 a);
u32 func_02071778(u32 a);
u32 func_020725e8(u32 a, s32 *b, s32 c);
u32 func_020724b4(u32 a, s32 *b, s32 c);

u32 func_0207288c(u32 param_1, u32 param_2, s32 *param_3, s32 param_4, u32 *param_5)
{
    u8 *puVar1;
    u32 uVar2;

    puVar1 = func_02071914(param_1);
    if (puVar1 == 0) {
        return 5;
    }
    if ((param_2 & 4) == 0) goto nobit;
    if (puVar1[3] & 1) {
        uVar2 = func_020724b4(((P24 *)puVar1)->value, param_3, param_4);
    } else {
        uVar2 = func_020725e8(((P24 *)puVar1)->value, param_3, param_4);
    }
    if (uVar2 != 0) goto tail;
    return 9;
nobit:
    uVar2 = func_02071778(((P24 *)puVar1)->value);
tail:
    if (param_5 != 0) {
        *param_5 = uVar2;
    }
    return 0;
}
