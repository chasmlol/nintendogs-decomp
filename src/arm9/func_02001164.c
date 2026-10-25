#include "ctx.h"

extern u8 data_0214e684[];

void func_02001164(u16 mask)
{
    do {
    } while ((*(vu16 *)(data_0214e684 + 0x36) & mask) != 0);
}
