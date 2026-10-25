#include "ctx.h"

extern u8 data_02155c50[];
extern u8 data_0213e778[];
extern u8 data_0213e77c[];
extern void func_0207c73c(void);
extern void func_0207c77c(void);
extern void func_0207c774(void);

void func_0207c8bc(u32 param_1, s32 param_2)
{
    *(u32 *)(data_02155c50 + 8) = param_1;
    func_0207c73c();
    if (param_2 != 0) {
        *(u32 *)data_0213e778 = (u32)func_0207c77c;
        *(u32 *)data_0213e77c = (u32)func_0207c774;
    }
}
