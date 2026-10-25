#include "ctx.h"
extern u16 data_021594dc;
extern u32 data_021594ec;
extern u32 data_021594e8;
void func_020d5c80(u8 *obj)
{
    if (*(u16 *)(obj + 2) != 0) {
        return;
    }
    data_021594dc = 0;
    data_021594ec = 0;
    data_021594e8 = 0;
}
