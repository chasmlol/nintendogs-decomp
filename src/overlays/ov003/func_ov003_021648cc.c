#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_02035164(u8 *p);
extern void func_02025db0(u8 *p);
extern u8 func_02025490(u8 *p);

u8 func_ov003_021648cc(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 288;
    *(u16 *)(param_1 + 256 + 88) = (u16)func_02035164(param_1);
    param_1[147] = 12;
    param_1[151] = 1;
    param_1[158] = 1;
    func_02025db0(param_1);
    return func_02025490(param_1);
}
