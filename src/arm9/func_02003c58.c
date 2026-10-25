#include "ctx.h"

extern u8 data_0214e858[];
extern void func_02005c94(void);

void func_02003c58(u16 param_1)
{
    *(u16 *)(data_0214e858 + 0) = 0;
    *(u16 *)(data_0214e858 + 4) = 3;
    *(u16 *)(data_0214e858 + 6) = 1;
    *(u16 *)(data_0214e858 + 8) = 0;
    *(u16 *)(data_0214e858 + 10) = param_1;
    *(void (**)(void))(data_0214e858 + 0x10) = func_02005c94;
}
