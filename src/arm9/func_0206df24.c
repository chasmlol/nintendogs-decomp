#include "ctx.h"
extern s32 func_0206fad4(void);
extern u32 func_0206fd3c(void);
extern u32 func_0206fd4c(void);
extern u32 func_0206eff8(u16 *p, u32 a, u32 b, s32 c, u32 d, u32 e);
u32 func_0206df24(u8 *param_1, u32 param_2, u16 *param_3)
{
    s32 iVar1;
    u32 uVar2;
    u8 *puVar3;
    u32 sh;
    u16 bit;
    u32 r6;
    u32 r0;
    u8 *base = param_1 + 0x1d4;
    uVar2 = 0;
    puVar3 = base + param_2 * 0x68;
    sh = 1 << param_2;
    sh = sh << 16;
    bit = (u16)(sh >> 16);
    if (*puVar3 == 2) {
        if (puVar3[1] == 2) {
            iVar1 = func_0206fad4();
            r6 = func_0206fd3c();
            r0 = func_0206fd4c();
            uVar2 = func_0206eff8(param_3, bit, (u32)puVar3[2], (s32)(s16)iVar1, r6, r0);
            *puVar3 = 1;
        }
    }
    return uVar2;
}
