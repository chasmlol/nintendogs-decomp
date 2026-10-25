#include "ctx.h"

extern u32 data_0213e85c;
extern u32 data_0213e860;
extern void func_0206c924(u32 *p, u32 v, u32 n);
extern void func_0206c9b8(u16 *a, u16 *b, u32 c);
extern void func_0207e210(u32 *a, u8 *b, u32 c, u16 *d, u32 e);

u32 func_02088a28(u32 *param_1, u8 *param_2, u32 param_3)
{
    u32 pad;
    u32 loc1[5];
    u16 loc2[32];
    u32 idx;
    u32 *p;
    u32 base;

    base = (u32)param_1;
    func_0206c924(loc1, 0, 20);
    func_0206c9b8((u16 *)data_0213e85c, loc2, data_0213e860);
    func_0207e210(loc1, param_2, param_3, loc2, data_0213e860);
    idx = 0;
    p = loc1;
    do {
        if (*p != *(u32 *)(base + idx)) {
            break;
        }
        idx = idx + 4;
        p = p + 1;
    } while (idx < 20);
    return idx == 20;
}
