#include "ctx.h"

extern u32 data_02159428;
extern u32 data_0213b9fc[];

s32 func_0203852c(u8 *param_1)
{
    s32 c;

    c = *(s8 *)(param_1 + 139);
    if (c == 1) {
        goto sel;
    }
    if (c == 4) {
        goto one;
    }
    if (c != 5) {
        goto sw;
    }
one:
    return 1;
sel:
    if (data_0213b9fc[*(u16 *)(*(u8 **)&data_02159428 + 6)] == 0) {
        return 2;
    }
    return 3;
sw:
    switch (*(s8 *)(param_1 + 141)) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
        goto exit;
    case 3:
        goto ret2;
    case 4:
    case 7:
    case 8:
        goto ret1;
    }
exit:
    if (data_0213b9fc[*(u16 *)(*(u8 **)&data_02159428 + 6)] == 0) {
        return 2;
    }
    return 3;
ret2:
    return 2;
ret1:
    return 1;
}
