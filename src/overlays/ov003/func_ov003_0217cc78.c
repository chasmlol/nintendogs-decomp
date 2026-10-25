#include "ctx.h"

typedef struct Three {
    u32 w[3];
} Three;

extern u8 *data_02159444;
extern s32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, int a, int b, s32 c);
extern int func_0200f8e0(u8 *p);
extern int func_0203567c(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern int func_0202d108(u8 *p, int a, u8 *b, int c);
extern void func_ov003_02198420(u8 *p, u8 *b, int c);
extern void func_ov003_0218c3e0(u8 *p, int a, int b);

void func_ov003_0217cc78(u8 *param_1)
{
    s32 uVar1;
    u8 *iVar2;
    int iVar3;
    s64 lv;

    uVar1 = func_02028124(param_1);
    lv = (s64)uVar1 * 0x102 + 0x800;
    func_02024d40(param_1, 0x1e, 0x31, -(s32)(lv >> 12));
    iVar2 = *(u8 **)(data_02159444 + 0x1c);
    *(Three *)(param_1 + 948) = *(Three *)(iVar2 + 48);
    iVar3 = func_0200f8e0(param_1);
    if (iVar3 != 0) {
        return;
    }
    iVar3 = func_0203567c(param_1);
    if (iVar3 == 0) {
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
