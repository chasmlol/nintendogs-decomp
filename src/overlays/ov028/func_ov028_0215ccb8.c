#include "ctx.h"

extern u32 data_ov028_0215df14;
extern void func_ov028_0215db7c(void);

void func_ov028_0215ccb8(void)
{
    if (data_ov028_0215df14 != 0) {
        func_ov028_0215db7c();
    }
}
