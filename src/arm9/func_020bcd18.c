#include "ctx.h"

extern u8 *data_02159468;
void func_020bd1f0(s16 v);

void func_020bcd18(u32 param_1, int param_2)
{
    if (param_2 == 0) {
        return;
    }
    switch (param_2) {
    case 1:
        func_020bd1f0(*(s16 *)(data_02159468 + 34));
        *(s16 *)(data_02159468 + 44) = 2;
        break;
    case 3:
        *(s16 *)(data_02159468 + 44) = 0;
        break;
    }
}
