#include "ctx.h"

extern u32 data_0215be34;
extern void func_02003728(s32 a);

void func_020e9078(void)
{
    func_02003728(*(s32 *)(*(u8 **)&data_0215be34 + 8));
    *(u32 *)&data_0215be34 = 0;
}
