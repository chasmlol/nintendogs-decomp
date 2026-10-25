#pragma avoid_byte strb
#include "ctx.h"

extern u64 func_02080cf4(void);
extern void func_02080d08(u8 *p);
extern void func_02080d84(u8 *p);

void func_02092748(u8 *param_1, u32 *param_2, u32 *param_3)
{
    u8 buf[80];
    u64 v;

    v = func_02080cf4();
    func_02080d08(buf);
    *(u32 *)param_1 = (u32)(v & 0xffffffffULL);
    *(u32 *)(param_1 + 4) = (u32)((v >> 32) & 0xffffffffULL);
    func_02080d84(param_1 + 8);
    param_1[14] = (u8)param_3[2];
    param_1[15] = (u8)param_3[1];
    param_1[16] = (u8)param_3[0];
    param_1[17] = (u8)param_2[2];
    param_1[18] = (u8)param_2[1];
    param_1[19] = (u8)param_2[0];
}
