#include "ctx.h"
extern u32 data_02159020;
extern u32 data_02159028;
extern u8 data_0213e690[];
void func_0208e36c(void)
{
    u32 v = data_02159020;
    data_02159028 = 0;
    *(u32 *)(data_0213e690 + 0x18) = v;
}
