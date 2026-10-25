#include "ctx.h"

extern u32 data_0215ae4c;
extern void func_020dfc38(void);

void func_020df11c(void)
{
    if (data_0215ae4c == 1) {
        func_020dfc38();
        data_0215ae4c = 0;
    }
}
