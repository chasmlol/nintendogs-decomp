#include "ctx.h"
extern u8 *data_0215be48;
extern u8 *data_0215bf9c;
extern void func_0210a854(u32 a);
void func_021088ac(void)
{
    if (*(s32 *)(data_0215be48 + 0xa8) != 6) {
        return;
    }
    if (*(s32 *)data_0215bf9c != 9) {
        func_0210a854(9);
    }
}
