#include "ctx.h"

extern vu32 data_02159018[];

u32 func_0208dd28(u32 *param_1)
{
    u32 uVar2 = 0;
    u32 bVar1 = 1;
    u32 a = data_02159018[0];
    u32 b = data_02159018[0];
    if (a == 0) {
        if (data_02159018[1] == 0) {
            bVar1 = 0;
        }
    }
    if (bVar1 != 0) {
        if (b == param_1[0]) {
            if (data_02159018[1] == param_1[1]) {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}
