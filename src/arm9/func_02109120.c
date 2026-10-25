#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_0215bf9c;
extern void func_0210a818(void);

void func_02109120(void)
{
    u32 v;
    u32 w;
    v = *(u32 *)(data_0215be48 + 0xa8);
    if (v != 0 && v != 4 && v != 14) {
        return;
    }
    w = *(u32 *)data_0215bf9c;
    if (w != 6 && w != 7) {
        return;
    }
    func_0210a818();
}
