#include "ctx.h"
extern u32 *data_0215b670;
extern u32 data_0215b66c;
extern void func_020e184c(void);
void func_020e1808(void)
{
    if (data_0215b670 != NULL) {
        data_0215b66c = 1;
        func_020e184c();
    }
}
