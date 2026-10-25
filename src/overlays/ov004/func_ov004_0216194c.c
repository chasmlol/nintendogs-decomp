#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u32 data_ov004_02170320;
extern void func_ov004_02161a7c(void);
extern void func_ov004_02161cb4(u32 a, u32 b);

void func_ov004_0216194c(u32 param_1, u32 param_2)
{
    u8 *P;
    u8 *X;
    s32 iVar5;
    u32 uVar6;
    u32 uVar8;
    u8 *q;
    u8 *pb;

    P = *(u8 **)((u8 *)data_ov004_02170320 + 0x36c4);
    iVar5 = *(s32 *)(P + 8);
    q = P + iVar5 * 2;
    uVar6 = q[8];
    uVar8 = q[9];
    if (iVar5 > 1) {
        if (param_1 == uVar6 - 1 || param_1 == uVar6 + 1) {
            if (param_2 == uVar8 - 1 || param_2 == uVar8 + 1) {
                func_ov004_02161a7c();
            }
        }
    }
    func_ov004_02161cb4(param_1, param_2);
    X = (u8 *)data_ov004_02170320;
    *(X + *(X + 0x33ba) + 0x3000 + 0x3bb) = 0x30;
    *((u8 *)data_ov004_02170320 + (u32)*((u8 *)data_ov004_02170320 + 0x33ba) * 2 + 0x3000 + 0x3c1) = (u8)param_1;
    *((u8 *)data_ov004_02170320 + (u32)*((u8 *)data_ov004_02170320 + 0x33ba) * 2 + 0x3000 + 0x3c2) = (u8)param_2;
    *((u8 *)data_ov004_02170320 + 0x3000 + 0x3ba) = *((u8 *)data_ov004_02170320 + 0x33ba) + 1;
    if (*((u8 *)data_ov004_02170320 + 0x33ba) >= 6) {
        *((u8 *)data_ov004_02170320 + 0x33ba) = 0;
    }
}
