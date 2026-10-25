#include "ctx.h"

extern int func_ov003_02174904(int a, int b, int c, int d);
extern void func_0203e908(int a, int b);
extern void func_ov003_0218e360(int a, int b);

void func_ov003_02171490(int param_1)
{
    int iVar1;

    iVar1 = func_ov003_02174904(param_1, 0x11d, -1, 0);
    if ((*(s16 *)(param_1 + 0xea) >= 0x119) && (*(s16 *)(param_1 + 0xea) <= 0x121)) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    if ((*(u16 *)(param_1 + 0xf4) >= 0x4f) && (*(u16 *)(param_1 + 0xf4) < 99)) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 4);
}
