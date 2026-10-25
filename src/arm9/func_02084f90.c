#include "ctx.h"

extern u16 data_0213e84c[];

extern s32 func_0206799c(s16 *a, s16 *b);
extern s32 func_02067da0(s16 *a, s16 *b);

#define FX(x, y) ((u32)((((s64)(s32)(x)) * (s32)(y) + 0x800) >> 12))

void func_02084f90(u8 *param_1)
{
    s16 local_20[3];
    s16 local_1a[3];
    u32 uVar1;
    s32 r;

    local_20[0] = (s16)data_0213e84c[0];
    local_20[1] = (s16)data_0213e84c[1];
    local_20[2] = (s16)data_0213e84c[2];
    uVar1 = ((***(u32 ***)(param_1 + 0x18)) << 24) >> 30;
    if (uVar1 == 0) {
        goto C0;
    }
    if (uVar1 == 1) {
        goto C1;
    }
    if (uVar1 != 2) {
        goto D;
    }
    local_1a[0] = 0x1000;
    local_1a[1] = 0;
    local_1a[2] = 0;
    goto END;
C1:
    local_1a[0] = 0;
    local_1a[1] = 0x1000;
    local_1a[2] = 0;
    goto END;
C0:
    local_1a[0] = 0;
    local_1a[1] = 0;
    local_1a[2] = 0x1000;
    goto END;
D:
    func_0206799c((s16 *)(param_1 + 0x3c), local_1a);
END:
    r = func_02067da0(local_20, local_1a);
    if (r == 0x1000 || r == (s32)0xfffff000) {
        local_20[0] = 0x1000;
        local_20[1] = 0;
        local_20[2] = 0;
    }
    *(s16 *)(param_1 + 0x60) = (s16)(FX(local_1a[1], local_20[2]) - FX(local_1a[2], local_20[1]));
    *(s16 *)(param_1 + 0x62) = (s16)(FX(local_1a[2], local_20[0]) - FX(local_1a[0], local_20[2]));
    *(s16 *)(param_1 + 0x64) = (s16)(FX(local_1a[0], local_20[1]) - FX(local_1a[1], local_20[0]));
    *(s16 *)(param_1 + 0x66) = (s16)(FX(local_1a[1], *(s16 *)(param_1 + 0x64)) - FX(local_1a[2], *(s16 *)(param_1 + 0x62)));
    *(s16 *)(param_1 + 0x68) = (s16)(FX(local_1a[2], *(s16 *)(param_1 + 0x60)) - FX(local_1a[0], *(s16 *)(param_1 + 0x64)));
    *(s16 *)(param_1 + 0x6a) = (s16)(FX(local_1a[0], *(s16 *)(param_1 + 0x62)) - FX(local_1a[1], *(s16 *)(param_1 + 0x60)));
    func_0206799c((s16 *)(param_1 + 0x60), (s16 *)(param_1 + 0x60));
    func_0206799c((s16 *)(param_1 + 0x66), (s16 *)(param_1 + 0x66));
}
