#include "ctx.h"

extern u32 data_02159444;

typedef struct { u32 w[3]; } T3;

s32 func_0200f8e0(u8 *p);
s32 func_0203567c(u8 *p);
s32 func_0203541c(u8 *p);
s32 func_0202d108(u8 *p, s32 a, s32 b, s32 c);
void func_ov003_0218c3e0(u8 *p, s32 a, s32 b);
void func_ov003_02198420(u8 *p, s32 a, s32 b);

void func_ov003_0217d478(u8 *param_1)
{
    u8 *g;
    u8 *o;
    s32 iVar1;
    s32 iVar2;

    g = (u8 *)data_02159444;
    o = *(u8 **)(g + 0x1c);
    *(T3 *)(param_1 + 948) = *(T3 *)(o + 0x30);
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    iVar1 = func_0203541c(param_1);
    iVar2 = func_0202d108(param_1, 0, iVar1, 1);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        func_ov003_02198420(param_1, iVar1, 0);
        return;
    }
    func_ov003_0218c3e0(param_1, 0, 0);
}
