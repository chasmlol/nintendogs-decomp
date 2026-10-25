#pragma avoid_byte strb
#include "ctx.h"

extern void func_02005a78(void);
extern void func_02005df4(void);
extern void func_02005dd0(void);

void func_02005a08(u16 *param_1)
{
    s32 i;
    u8 *t;
    u8 *pp;
    param_1[0] = 1;
    param_1[2] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    *(u32 *)(param_1 + 8) = (u32)func_02005a78;
    param_1[7] = 5;
    if (param_1[6] == 0) {
        *(u32 *)(param_1 + 10) = (u32)func_02005df4;
    } else {
        *(u32 *)(param_1 + 10) = (u32)func_02005dd0;
    }
    for (i = 0; i < 192; i++) {
        t = (u8 *)((u32)param_1 + (u32)i);
        pp = t + 26;
        *pp = 16;
    }
}
