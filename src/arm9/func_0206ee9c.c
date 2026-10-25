#include "ctx.h"

extern void func_0206c9b8(u8 *dst, u8 *src, u32 n);
extern void func_0206c924(u8 *dst, u32 v, u32 n);

u32 func_0206ee9c(u8 *param_1, u16 param_2, u32 param_3, u32 param_4, u32 param_5, u8 *param_6, u32 param_7)
{
    u8 local_20[2];
    u16 local_1e;
    u8 *q;

    local_20[0] = 5;
    local_1e = param_2;
    func_0206c9b8(local_20, param_1, 1);
    q = (u8 *)((u32)param_1 + 1);
    func_0206c9b8((u8 *)&local_1e, q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8((u8 *)&param_3, q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8((u8 *)&param_4, q, 4);
    q = (u8 *)((u32)q + 4);
    func_0206c9b8((u8 *)&param_5, q, 4);
    q = (u8 *)((u32)q + 4);
    if (param_6 == NULL) {
        func_0206c924(q, 0, param_7);
    } else {
        func_0206c9b8(param_6, q, param_7);
    }
    return ((u32)q + param_7) - (u32)param_1;
}
