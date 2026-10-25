#include "ctx.h"

extern void func_ov003_02189740(u8 *a, u32 b);

void func_ov003_021896b8(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x12e) = 0x2000;
    ((void (*)(u8 *, u32))func_ov003_02189740)(param_1, 6);
}
