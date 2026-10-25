#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_020927e0(u8 *p);
extern BOOL func_02092048(u8 *p, u32 *a, s32 *b);
extern u64 func_02080858(void);
extern u64 func_02080cf4(void);
extern void func_02080d08(u8 *p);
extern void func_02080d84(u8 *p);

void func_02094cbc(u8 *param_1, u32 *param_2, s32 *param_3)
{
    u8 buf[80];
    u8 *puVar4;
    u64 uVar5;
    s32 iVar3;
    u32 bit;

    puVar4 = param_1 + 0x848;
    iVar3 = func_020927e0(puVar4);
    if (iVar3 != 0) {
        if (func_02092048(puVar4, param_2, param_3)) {
            uVar5 = func_02080858();
            iVar3 = (s32)uVar5 * 0x10dcd;
            bit = ((u32)(iVar3 + 1) << 16) >> 31;
            param_1[0x6e] = 1;
            param_1[0x6f] = (u8)(3 + (u16)bit);
        } else {
            param_1[0x6e] = (s8)param_1[0x6e] + 1;
            if ((s8)param_1[0x6e] >= (s8)param_1[0x6f]) {
                param_1[0x6e] = param_1[0x6f];
            }
        }
    } else {
        param_1[0x6e] = 1;
    }
    uVar5 = func_02080cf4();
    func_02080d08(buf);
    *(u32 *)puVar4 = (u32)(uVar5 & 0xffffffffULL);
    *(u32 *)(puVar4 + 4) = (u32)((uVar5 >> 32) & 0xffffffffULL);
    func_02080d84(puVar4 + 8);
    puVar4[14] = (u8)param_3[2];
    puVar4[15] = (u8)param_3[1];
    puVar4[16] = (u8)*param_3;
    puVar4[17] = (u8)param_2[2];
    puVar4[18] = (u8)param_2[1];
    puVar4[19] = (u8)*param_2;
}
