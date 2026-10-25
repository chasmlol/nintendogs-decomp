#include "ctx.h"

extern s32 func_ov003_02174904(int p, int a, int b, int c);
extern s32 func_02039cc4(int p);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, s16 b);
extern void func_0203e908(int p, s16 v);

void func_ov003_02173c20(int param_1)
{
    int iVar1;

    iVar1 = func_ov003_02174904(param_1, 0x10, -1, 0);
    if ((*(s16 *)(param_1 + 0xea) >= 0x10) && (*(s16 *)(param_1 + 0xea) <= 0x1e)) {
        return;
    }
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
    func_0203e908(param_1, 0);
}
