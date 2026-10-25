#include "ctx.h"

extern u32 data_02155cf8;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32);
extern void func_0207fe70(u32, u32 *);

u32 func_0207fe94(u32 *param_1)
{
    u32 s;
    u32 cur;
    u32 r6;
    s = func_02080b08();
    cur = *(u32 *)((u8 *)&data_02155cf8 + 8);
    if (param_1[1] == 0) {
        param_1[1] = cur;
        param_1[2] = param_1[2] + 1;
        func_0207fe70(cur, param_1);
        r6 = 1;
    } else if (param_1[1] == cur) {
        r6 = 1;
        param_1[2] = param_1[2] + 1;
    } else {
        r6 = 0;
    }
    func_02080b1c(s);
    return r6;
}
