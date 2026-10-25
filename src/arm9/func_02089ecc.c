#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern u32 data_02156184;
extern u32 data_02156180;
extern u32 data_0215619c;

u32 func_02089ecc(void)
{
    u32 uVar1;
    u32 x;
    x = func_02080b08();
    if (data_02156184 == 0) {
        uVar1 = data_02156180;
    } else {
        uVar1 = data_0215619c;
    }
    func_02080b1c(x);
    return uVar1;
}
