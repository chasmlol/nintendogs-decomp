#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_02159444;
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern s32 func_0202d108(u8 *p, u32 a, u8 *b, u32 c);
extern void func_ov003_02198420(u8 *p, u8 *q, u32 r);
extern void func_ov003_0218c3e0(u8 *p, u32 a, u32 b);

void func_ov003_0217d3ac(u8 *param_1)
{
    u8 *iVar1;
    s32 iVar2;
    iVar1 = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
    *(T12 *)(param_1 + 0x3b4) = *(T12 *)(iVar1 + 0x30);
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
