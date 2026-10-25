#include "ctx.h"

typedef struct {
    u32 w[11];
} Ent;

u32 func_020d1244(s32 *param_1, s32 param_2)
{
    s32 iVar1;
    Ent *piVar2;
    u8 *base;
    base = (u8 *)param_1 + 32;
    iVar1 = param_1[0];
    if (iVar1 <= 1) {
        return 0;
    }
    if (param_2 < 0 && iVar1 - 1 < param_2) {
        return 0;
    }
    if (param_2 <= iVar1 - 2) {
        piVar2 = (Ent *)(base + param_2 * 44);
        do {
            *piVar2 = *(Ent *)((u8 *)piVar2 + 44);
            param_2 = param_2 + 1;
            piVar2 = (Ent *)((u8 *)piVar2 + 44);
        } while (param_2 <= param_1[0] - 2);
    }
    param_1[0] = param_1[0] - 1;
    return 1;
}
