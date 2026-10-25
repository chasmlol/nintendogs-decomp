#include "ctx.h"
extern u16 data_02155c4c;
extern u32 data_0213e770;
extern u32 data_0213e774;
extern void func_0207c6e8(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_0207c5c0(void);
extern void func_0207c42c(void);
extern void func_0207c424(void);
void func_0207c640(u32 param_1, s32 param_2)
{
    if (param_1 <= 2) {
        func_0207c6e8(4, 3, 2, 0, 1);
    } else {
        func_0207c6e8(4, 3, 0, 2, 1);
    }
    data_02155c4c = (u16)param_1;
    func_0207c5c0();
    if (param_2 != 0) {
        data_0213e770 = (u32)func_0207c42c;
        data_0213e774 = (u32)func_0207c424;
    }
}
