#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02164fa8(u8 *param_1)
{
    vu8 *t = (vu8 *)(param_1 + 151);
    u32 v;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x1e4;
    v = 1;
    *(u8 *)(t) = (u8)(v);
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
