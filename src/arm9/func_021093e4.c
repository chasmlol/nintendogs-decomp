#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_0215bf9c;
extern void func_0210a854(s32 a);
extern void func_0210a818(void);

void func_021093e4(s32 param_1)
{
    if (*(s32 *)(data_0215be48 + 0xb8) != 2 && *(s32 *)(data_0215be48 + 0xb8) != 0x25) {
        return;
    }
    if (param_1 != 0) {
        if (*(s32 *)data_0215bf9c != 13) {
            func_0210a854(13);
            return;
        }
        return;
    }
    if (*(s32 *)data_0215bf9c == 13) {
        func_0210a818();
        return;
    }
    return;
}
