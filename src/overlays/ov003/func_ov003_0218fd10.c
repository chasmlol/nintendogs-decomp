#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern s32 *data_0214f464;
extern s32 func_020364cc(u8 *p);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_02028124(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0218fd10(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_020364cc(param_1);
    if (iVar1 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar1 + 0xbc);
        *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
        func_02037450(param_1, 0x300);
    }
    iVar1 = func_02028124(param_1);
    if ((s32)*(u16 *)(param_1 + 0xfc) <= (0x1000 - iVar1 >> 8) + 0x19) {
        return;
    }
    iVar1 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar1;
    switch ((u16)((u32)(iVar1 << 16) >> 30)) {
    case 0:
        func_0203e908(param_1, 95);
        return;
    case 1:
        func_0203e908(param_1, 94);
        return;
    case 2:
        func_0203e908(param_1, 0x424);
        return;
    case 3:
        func_0203e908(param_1, 0x425);
    }
}
