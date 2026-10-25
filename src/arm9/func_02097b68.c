#include "ctx.h"

extern u8 *volatile data_02159060;

void func_02097b68(void)
{
    u8 *p = data_02159060;
    if (*(s16 *)(p + 108) == 2) {
        *(u16 *)(p + 108) = 3;
        *(u16 *)(data_02159060 + 110) = 0;
    }
}
