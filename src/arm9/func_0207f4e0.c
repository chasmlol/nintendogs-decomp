#include "ctx.h"

extern u32 data_02155cf8[];

u64 func_02080b08(void);
void func_02080b1c(u32 a);
void func_0207f3a0(u32 a, u32 b, u32 c, u32 d);

void func_0207f4e0(u16 *param_1)
{
    u64 t;
    u32 hi;
    u32 lo;
    u32 uVar3;
    u32 *q;

    t = func_02080b08();
    lo = (u32)t;
    hi = (u32)(t >> 32);
    uVar3 = *param_1;
    if (uVar3 != 0) {
        q = (u32 *)data_02155cf8[3];
        if (q != 0) {
            hi = 1;
            do {
                if ((uVar3 & (1 << q[0x6c / 4])) != 0) {
                    q[0x64 / 4] = 1;
                }
                q = (u32 *)q[0x68 / 4];
            } while (q != 0);
        }
        *param_1 = 0;
        func_0207f3a0(0, hi, (u32)q, uVar3);
    }
    func_02080b1c(lo);
}
