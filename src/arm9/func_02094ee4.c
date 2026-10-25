#include "ctx.h"

extern s32 func_020927e0(u8 *p);
extern s64 func_02092140(u8 *p, u32 *a, s32 *b);

BOOL func_02094ee4(u8 *param_1, u32 *param_2, s32 *param_3)
{
    BOOL bVar2;
    s64 v;

    bVar2 = FALSE;
    if (func_020927e0(param_1 + 0x834) == 0) {
        goto eq;
    }
    v = func_02092140(param_1 + 0x834, param_2, param_3);
    if (v >= 0x708) {
        bVar2 = TRUE;
    }
    goto end;
eq:
    bVar2 = TRUE;
end:
    return bVar2;
}
