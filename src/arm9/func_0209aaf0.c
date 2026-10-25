#include "ctx.h"

extern u8 data_02159074[];
extern u32 data_02159070;

u32 func_0209aaf0(void)
{
    if (*(u32 *)(data_02159074 + 0x28) != 0) {
        goto body;
    }
    if (*(u32 *)(data_02159074 + 0x34) == 0) {
        goto ret0;
    }
body:
    return data_02159070;
ret0:
    return 0;
}
