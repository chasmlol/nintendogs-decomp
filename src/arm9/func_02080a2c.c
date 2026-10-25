#include "ctx.h"

extern u16 data_02155fe4;
extern u32 data_02155fe8[];
extern void func_0208083c(u32 v);
extern void func_0207ebcc(u32 v);

void func_02080a2c(void)
{
    if (data_02155fe4 == 0) {
        data_02155fe4 = 1;
        func_0208083c(1);
        data_02155fe8[0] = 0;
        data_02155fe8[1] = 0;
        func_0207ebcc(16);
    }
}
