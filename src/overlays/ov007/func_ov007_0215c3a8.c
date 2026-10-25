#include "ctx.h"

typedef void (*FnPtr)(u8 *);

extern u32 data_ov007_02160d80;

void func_ov007_0215c3a8(u8 *param_1)
{
    FnPtr fn;
    *(u32 *)((u8 *)data_ov007_02160d80 + 0x3c) = 1;
    fn = *(FnPtr *)((u8 *)data_ov007_02160d80 + 0x18);
    if (fn != 0) {
        fn(param_1);
    }
}
