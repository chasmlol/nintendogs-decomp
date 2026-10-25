#include "ctx.h"

extern s32 data_ov022_0215c6a4;
extern void func_01ffe474(u8 *p);

void func_ov022_0215c4f8(u8 *param_1)
{
    s32 *q = (s32 *)(param_1 + 0x38);
    *q = *q + data_ov022_0215c6a4;
    if (*(volatile s32 *)q < -0xc8000) {
        *q = *q + 0x190000;
    }
    func_01ffe474(param_1);
}
