#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];

u32 func_02003a10(void)
{
    if (*(u16 *)(data_0214e858 + 4) == 2) {
        if (*(u16 *)(data_0214e77c + 4) == 2) {
            return 1;
        }
    }
    return 0;
}
