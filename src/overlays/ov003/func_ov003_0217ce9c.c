#include "ctx.h"

typedef struct {
    u32 w[3];
} Vec3;

extern u8 *data_02159444;

extern u32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern int func_0200f8e0(u8 *p);
extern int func_0203567c(u8 *p);
extern int func_0203541c(u8 *p);
extern int func_0202d108(u8 *p, int a, int b, int c);
extern void func_ov003_0218c3e0(u8 *p, int a, int b);
extern void func_ov003_02198420(u8 *p, int a, int b);

void func_ov003_0217ce9c(u8 *param_1)
{
    u32 uVar1;
    int iVar2;
    int iVar3;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 0x1e, 0x31,
                  -(s32)((((s64)(s32)uVar1 * 0x102) + 0x800) >> 12));
    iVar2 = *(int *)(data_02159444 + 0x1c);
    *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(iVar2 + 0x30);
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    iVar2 = func_0203541c(param_1);
    iVar3 = func_0202d108(param_1, 0, iVar2, 1);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != 0) {
        func_ov003_02198420(param_1, iVar2, 0);
        return;
    }
    func_ov003_0218c3e0(param_1, 0, 0);
}
