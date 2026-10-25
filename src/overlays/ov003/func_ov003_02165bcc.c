#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(s32 a);
extern u8 func_02025804(s32 a);
extern void func_02034198(s32 a);

void func_ov003_02165bcc(s32 param_1)
{
    u32 v;
    u8 *r;
    *(s16 *)((u8 *)param_1 + 256 + 82) = 0x91;
    *(s16 *)((u8 *)param_1 + 256 + 86) = 10;
    r = (u8 *)param_1 + 147;
    v = 19;
    *(u8 *)(r) = (u8)(v);
    r = (u8 *)param_1 + 151;
    v = 2;
    *(u8 *)(r) = (u8)(v);
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
