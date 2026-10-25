#include "ctx.h"

extern u8 data_02150e30[];
extern void func_02068824(u32 a);

void func_020687dc(void)
{
    ((void (*)(u32))func_02068824)(*(vu16 *)(data_02150e30 + 0xe));
}
