#include "ctx.h"

extern void func_02117d8c(u32 *p);
extern void func_02003c10(s32 v);

void func_020fec6c(u32 *param_1)
{
    *param_1 = 0;
    switch (param_1[0x707]) {
    case 0:
        goto LAB_fecbc;
    case 1:
        break;
    case 2:
        goto LAB_fecac;
    case 3:
        goto LAB_fecac;
    case 4:
        break;
    case 5:
LAB_fecac:
        func_02003c10(0x10);
        return;
    case 6:
LAB_fecbc:
        func_02117d8c(param_1 + 0x4c);
        func_02117d8c(param_1 + 0x54);
        func_02117d8c(param_1 + 0x5c);
        func_02117d8c(param_1 + 100);
        func_02117d8c(param_1 + 0x6c);
        func_02003c10(0x10);
    }
    return;
}
