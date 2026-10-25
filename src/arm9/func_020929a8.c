#include "ctx.h"

s32 func_020929a8(u16 *param_1, s32 param_2, s32 param_3, s32 param_4, s16 param_5)
{
    s32 bVar2 = 0;
    if (param_1[0] == 0xffff || param_3 < (s16)param_1[10]) {
        bVar2 = 1;
    } else if (param_3 == (s16)param_1[10]) {
        switch (param_2) {
        case 0:
            if (param_4 > (s16)param_1[11]) {
                bVar2 = 1;
            }
            break;
        case 1:
            if (param_4 > (s16)param_1[11]) {
                bVar2 = 1;
            } else if (param_4 == (s16)param_1[11]) {
                if (param_5 < (s16)param_1[12]) {
                    bVar2 = 1;
                }
            }
            break;
        case 2:
            if (param_4 > (s16)param_1[11]) {
                bVar2 = 1;
            }
            break;
        }
    }
    return bVar2;
}
