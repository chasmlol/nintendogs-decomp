#include "ctx.h"

extern s32 func_0203567c(u32);
extern void func_0203e8cc(u32, u32, u32);
extern void func_ov003_0218b6f4(u32);

void func_ov003_0218b6a4(u8 *param_1)
{
    s32 iVar1;
    if (*(s16 *)(param_1 + 0x152) != 0x91) {
        iVar1 = func_0203567c((u32)param_1);
        if (iVar1 != 0) {
            func_0203e8cc((u32)param_1, 0, 0x91);
        }
    }
    func_ov003_0218b6f4((u32)param_1);
}
