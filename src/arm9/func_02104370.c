#include "ctx.h"

extern u32 data_0215be48;
extern void func_020a0e04(s32 a);
extern void func_020a2284(s32 a, s32 b);

void func_02104370(void)
{
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 7) {
        func_020a0e04(8);
        return;
    }
    func_020a2284(0x37, 0);
}
