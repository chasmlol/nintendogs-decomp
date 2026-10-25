#include "ctx.h"

extern u16 data_0213b49c[];

u32 func_0202f344(u8 *p, u32 a);
u32 func_0202f0fc(u8 *p, u32 a);

u32 func_0202f068(u8 *param_1, u32 param_2, u32 param_3)
{
    switch (*(s8 *)(param_1 + 0x8b)) {
    case 0:
        if (param_3 <= data_0213b49c[*(s8 *)(param_1 + 0x8e)]) {
            goto ret0;
        }
        return func_0202f344(param_1, param_2);
    case 1:
    case 2:
    case 3:
        break;
    case 4:
    case 5:
        if (param_3 > 100) {
            return func_0202f0fc(param_1, param_2);
        }
        goto ret0;
    default:
        goto ret0;
    }
    return 0;
ret0:
    return 0;
}
