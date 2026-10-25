#pragma avoid_byte strb
#include "ctx.h"

void func_0202675c(u8 *p);
void func_02025974(u8 *p);

void func_ov003_0216f7bc(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x146;
    *(u8 *)(param_1 + 147) = 7;
    *(u8 *)(param_1 + 152) = 5;
    *(u8 *)(param_1 + 171) = 1;
    func_0202675c(param_1);
    func_02025974(param_1);
    *(u8 *)(param_1 + 178) = 2;
}
