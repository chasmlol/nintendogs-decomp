#include "ctx.h"

extern void func_0206c9b8(u16 *dst, u16 *src, u32 n);
extern void func_0206c924(u32 *dst, u32 v, u32 n);

s32 func_0206ed40(u16 *param_1, u16 param_2, u32 param_3, u32 param_4, u32 param_5,
                  u16 *param_6, u32 param_7, ...)
{
    u8 loc0[2];
    u16 loc2;
    u8 *q;

    loc0[0] = 7;
    loc2 = param_2;
    func_0206c9b8((u16 *)loc0, param_1, 1);
    q = (u8 *)param_1 + 1;
    func_0206c9b8(&loc2, (u16 *)q, 2);
    q = (u8 *)((u32)q + 2);
    func_0206c9b8((u16 *)&param_3, (u16 *)q, 1);
    q = (u8 *)((u32)q + 1);
    func_0206c9b8((u16 *)&param_4, (u16 *)q, 4);
    q = (u8 *)((u32)q + 4);
    func_0206c9b8((u16 *)&param_5, (u16 *)q, 4);
    q = (u8 *)((u32)q + 4);
    if (param_6 == 0) {
        func_0206c924((u32 *)q, 0, param_7);
    } else {
        func_0206c9b8(param_6, (u16 *)q, param_7);
    }
    return ((s32)q + (s32)param_7) - (s32)param_1;
}
