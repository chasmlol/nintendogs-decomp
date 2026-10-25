#include "ctx.h"

extern int func_ov003_02174844(int a, int b, int c, int d, int e, int f, int g);
extern int func_02039cc4(int a);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, int b);
extern void func_0203e908(int a, int b);

void func_ov003_02172c40(int param_1)
{
    int iVar1;

    iVar1 = func_ov003_02174844(param_1, 0, 500, 0x1f5, 0x200, 0x201, 100);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        iVar1 = func_020bc3c4() + 136;
        *(u32 *)(iVar1 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 136));
    }
    if (((*(u16 *)(param_1 + 244)) >= 79) && ((*(u16 *)(param_1 + 244)) < 99)) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 8);
}
