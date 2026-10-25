#include "ctx.h"

extern u32 data_02151c44;
extern void func_020720a8(u8 *);
extern void func_0207cec8(u8 *, u8 *);

void func_020700e4(u8 *param_1)
{
    u8 *p8;
    if (*(u32 *)(param_1 + 8) == 0) {
        return;
    }
    func_020720a8(*(u8 **)(param_1 + 8));
    p8 = *(u8 **)(param_1 + 0xc);
    if (p8 == NULL) {
        func_0207cec8((u8 *)(*(s32 *)(param_1 + 0x10) * 36 + (u32)&data_02151c44 + 12), param_1);
        return;
    }
    *(u32 *)(p8 + 8) = 0;
}
