#include "ctx.h"
extern u8 *data_0215be48;
u8 *func_02124f00(u32 param_1)
{
    u8 *b = data_0215be48 + 196;
    u8 *r = 0;
    if (param_1 != 0x00030002) {
        return r;
    }
    switch (*(s32 *)(b + 0x1c)) {
    case 0:
        r = b + 236 + (*(s32 *)(b + 0xc) << 4);
        break;
    case 1:
        r = b + 284 + (*(s32 *)(b + 0x10) << 4);
        break;
    case 2:
        if (*(s32 *)(b + 0xc) >= 0) {
            r = b + 236 + (*(s32 *)(b + 0xc) << 4);
        } else if (*(s32 *)(b + 0x10) >= 0) {
            r = b + 284 + (*(s32 *)(b + 0x10) << 4);
        }
        break;
    }
    return r;
}
