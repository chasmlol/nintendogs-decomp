#include "ctx.h"

BOOL func_0207e128(u8 *param_1)
{
    if (*(u32 *)param_1 != 0x4352414e) {
        return FALSE;
    }
    if (*(u16 *)(param_1 + 4) != 0xfffe) {
        return FALSE;
    }
    return *(u16 *)(param_1 + 6) == 0x100;
}
