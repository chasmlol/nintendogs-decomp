#pragma avoid_byte strb
#include "ctx.h"

extern void func_ov004_0215c2ec(s32 v);
extern void func_ov004_0215c324(u32 v);
extern void func_ov004_0215c2b4(s32 v);

void func_ov004_0216cda4(u8 *param_1, u32 param_2)
{
    s8 cVar1;
    cVar1 = *(s8 *)(param_1 + 183);
    switch (cVar1) {
    case 1:
        func_ov004_0215c2ec(cVar1);
        break;
    case 2:
        func_ov004_0215c324(param_2);
        break;
    case 3:
        func_ov004_0215c2b4(cVar1);
        break;
    }
    *(s8 *)(param_1 + 183) = 0;
}
