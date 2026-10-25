#include "ctx.h"

extern vu32 data_0214e6e4;
extern vu32 data_0214e6e0;
int func_02002e00(void);
void func_020026a4(u32 v);
void func_0200237c(u32 a, u32 b, u32 c, u32 d);

#define E0 data_0214e6e0

u32 func_02002b24(u32 param_1, u32 param_2)
{
    if (func_02002e00() != 0) goto body;
    return 1;
body:
    E0 = 0;
    func_020026a4(0x03006000);
    while (E0 == 0);
    E0 = 0;
    data_0214e6e4 = 0;
    func_0200237c(0, 2, 0, 0);
    func_020026a4((param_1 & 0xff) | 0x02006100);
    func_020026a4((param_2 & 0xffff) | 0x01010000);
    return 0;
}
