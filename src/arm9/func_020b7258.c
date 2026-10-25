#include "ctx.h"

extern u32 data_02159444;

u32 func_02003a10(void);
void func_020942c0(u8 *p, s32 v);

#define PTR (*(u8 **)&data_02159444)

void func_020b7258(u8 *param_1)
{
    s32 iVar4;

    if (*(u16 *)(param_1 + 4) == 0) {
        goto zero_case;
    }
    if (*(u16 *)(4 + param_1) == 0xa00) {
        goto main_case;
    }
    return;
zero_case:
    iVar4 = func_02003a10();
    if (iVar4 != 0) {
        *(u16 *)(param_1 + 4) = 0xa00;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
main_case:
    if (*(s16 *)(PTR + 0x100) != 2) {
        return;
    }
    *(u16 *)(4 + param_1) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    iVar4 = *(u32 *)(param_1 + 0x1c);
    if (iVar4 != 0) {
        u8 *pp = PTR;
        u8 *qb = pp + 0x104;
        u16 a;
        u16 b;
        pp = pp + 0x100;
        a = *(vu16 *)(pp + 4);
        b = *(u16 *)(qb + 2);
        *(u16 *)(iVar4 + 8) = a;
        *(u16 *)(iVar4 + 10) = b;
        if (*(s16 *)(pp + 4) != -1) {
            func_020942c0(qb, -1);
            return;
        }
        return;
    }
    return;
}
