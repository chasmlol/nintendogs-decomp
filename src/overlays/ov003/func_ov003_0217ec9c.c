#pragma avoid_byte strb
#include "ctx.h"

extern void func_02039a28(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e);

void func_ov003_0217ec9c(u8 *param_1)
{
    switch (*(s8 *)(param_1 + 0x8b)) {
    case 5:
        *(param_1 + 151) = 5;
        func_02039a28(param_1, 2, 8, 10, 7, 100);
        return;
    case 4:
        *(param_1 + 151) = 2;
        func_02039a28(param_1, 2, 8, 12, 9, 100);
        return;
    case 3:
        *(param_1 + 151) = 2;
        func_02039a28(param_1, 2, 6, 7, 9, 100);
        return;
    case 2:
        *(param_1 + 151) = 1;
        func_02039a28(param_1, 2, 6, 7, 9, 100);
        return;
    case 1:
        *(param_1 + 151) = 0;
        func_02039a28(param_1, 2, 6, 7, 9, 100);
        return;
    case 0:
        *(param_1 + 151) = 0;
        func_02039a28(param_1, 2, 6, 7, 9, 100);
        break;
    }
}
