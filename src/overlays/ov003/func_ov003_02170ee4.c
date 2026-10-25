#include "ctx.h"

extern int func_ov003_02174844(int p, int a, int b, int c, s16 d, s16 e, int f);
extern void func_0203e908(int p, s16 v);
extern void func_ov003_0218e360(int p, int a);

void func_ov003_02170ee4(int param_1)
{
    int iVar1;

    iVar1 = func_ov003_02174844(param_1, 0, 0x1f2, 0x1f3, (s16)0x1fe, (s16)0x1ff, 100);
    if (iVar1 == 0) {
        return;
    }
    if ((*(u16 *)(param_1 + 0xf4) >= 0x4f) && (*(u16 *)(param_1 + 0xf4) < 99)) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 5);
}
