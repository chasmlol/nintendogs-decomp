#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];

s32 func_02003a7c(void)
{
    if (*(u16 *)(data_0214e858 + 4) == 0) {
        if (*(u16 *)(data_0214e77c + 4) == 0) {
            return 1;
        }
    }
    return 0;
}
