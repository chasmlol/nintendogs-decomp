#include "ctx.h"

extern u8 *data_02159464;
extern s32 func_020c8db4(s32 v);

s32 func_020bc14c(void)
{
    u8 *iVar1;

    iVar1 = data_02159464;
    if (iVar1 != NULL) {
        switch (*(s16 *)(iVar1 + 0x84)) {
        case 1:
            return (s32)*(s16 *)(iVar1 + 0xc6);
        case 8:
            return func_020c8db4(-1);
        default:
            return -1;
        }
    }
    return -1;
}
