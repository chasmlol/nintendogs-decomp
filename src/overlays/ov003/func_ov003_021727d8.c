#include "ctx.h"

extern int func_ov003_02174844(int p, int a, int b, int c, s16 d, s16 e, int f);
extern int func_02039cc4(int p);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, s16 b);
extern void func_0203e908(int p, s16 v);

void func_ov003_021727d8(int param_1)
{
    int iVar1;

    iVar1 = func_ov003_02174844(param_1, 0, 0x1f8, 0x1f9, (s16)0x204, (s16)0x205, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        iVar1 = func_020bc3c4() + 136;
        *(u32 *)(iVar1 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    if ((*(u16 *)(param_1 + 0xf4) >= 0x4f) && (*(u16 *)(param_1 + 0xf4) < 99)) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 0xe);
}
