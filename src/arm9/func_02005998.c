#pragma avoid_byte strb
#include "ctx.h"
extern void func_02005a78(void);
extern void func_02005df4(void);
extern void func_02005dd0(void);

void func_02005998(u8 *param_1)
{
    s32 i;
    int v;
    u8 *t;
    *(u16 *)(param_1 + 0) = 1;
    *(u16 *)(4 + param_1) = 3;
    *(u16 *)(6 + param_1) = 1;
    *(u16 *)(8 + param_1) = 0;
    *(u16 *)(param_1 + 10) = 0;
    *(u32 *)(param_1 + 0x10) = (u32)func_02005a78;
    if (*(u16 *)(12 + param_1) == 0) {
        *(u32 *)(param_1 + 0x14) = (u32)func_02005df4;
    } else {
        *(u32 *)(param_1 + 0x14) = (u32)func_02005dd0;
    }
    i = 0;
    v = i;
    do {
        t = param_1 + i + 26;
        *t = v;
        i = i + 1;
    } while (i < 192);
}
