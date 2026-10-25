#include "ctx.h"

void func_ov003_0218a3cc(int p, int a, int b);
void func_0203e8cc(int p, int a, int b);

void func_ov003_0218a1b8(int param_1)
{
    u8 *base;
    u16 *q;
    s16 *s;

    func_ov003_0218a3cc(param_1, 8, 0x7f);
    base = (u8 *)param_1;
    q = (u16 *)(base + 0x100);
    if (q[15] > 30) {
        func_0203e8cc(param_1, 0, 0x18e);
        return;
    }
    s = (s16 *)(base + 0xee);
    if (*s == 0x10f) {
        func_0203e8cc(param_1, 0, 400);
        return;
    }
}
