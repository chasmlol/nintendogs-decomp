#include "ctx.h"

extern u32 data_0215902c;
extern u32 data_02159024;
extern void func_01ffe28c(u32);
extern void func_020778d0(void);

void func_0208f6ac(u8 *param_1)
{
    data_0215902c = (u32)param_1;
    data_02159024 = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    func_01ffe28c((u32)param_1);
    func_020778d0();
    data_02159024 = 0;
    *(s32 *)(param_1 + 0x1c) = *(s32 *)(param_1 + 0x1c) + 1;
    data_0215902c = 0;
}
