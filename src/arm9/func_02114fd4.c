#include "ctx.h"

extern u32 data_0215be48;
extern void func_02003d90(u32);
extern void func_ov006_02164990(u32);
extern void func_02109108(u32);

void func_02114fd4(void)
{
    func_02003d90(0x10);
    func_ov006_02164990(1);
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 7) {
        func_02109108(0);
        return;
    }
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 8) {
        func_02109108(1);
        return;
    }
}
