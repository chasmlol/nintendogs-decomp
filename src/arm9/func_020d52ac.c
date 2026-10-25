#include "ctx.h"
extern u8 *data_021594d0;
extern s16 func_020d6c84(void);
u32 func_020d52ac(void)
{
    s32 v = *(s32 *)(data_021594d0 + 0x20);
    if (v == 2) {
        if (func_020d6c84() != 0) {
            return 1;
        }
    } else if (v == 3) {
        return 1;
    }
    return 0;
}
