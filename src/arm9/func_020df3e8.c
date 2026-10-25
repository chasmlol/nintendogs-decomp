#include "ctx.h"

extern u32 data_0215ae88;
extern u32 data_0215ae4c;
extern u32 data_0215ae5c;
extern void func_020dfc38(void);

void func_020df3e8(void)
{
    if (data_0215ae88 == 0) {
        func_020dfc38();
        data_0215ae5c = data_0215ae4c;
        data_0215ae88 = 1;
    }
}
