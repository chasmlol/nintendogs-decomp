#include "ctx.h"

extern u8 *data_0215be48;
extern u16 data_021483d8;
extern void func_02101328(s32 a, s32 b, s32 c);
extern void func_0210d080(u8 *p);

void func_0210e280(void)
{
    u8 *iVar3;
    u8 *r4;

    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xb8) != 0x26) {
        return;
    }
    *(s32 *)(*(u8 **)&data_0215be48 + 0xc4) = 1;
    iVar3 = *(u8 **)&data_0215be48;
    if (*(s32 *)(iVar3 + 0xb8) == 0x26) {
        r4 = iVar3 + 0xc4;
        *(u16 *)(r4 + 48) = 0;
        data_021483d8 = 0;
        func_02101328(0, *(s32 *)(r4 + 0x10), 0);
        func_0210d080(r4);
    }
}
