#include "ctx.h"
extern u8 *data_0215be48;
extern void func_02003c58(s32 a);
void func_02120094(void)
{
    if (*(s32 *)(data_0215be48 + 0xb4) == 0x17) {
        func_02003c58(10);
    }
}
