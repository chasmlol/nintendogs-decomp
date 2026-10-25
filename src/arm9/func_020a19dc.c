#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_02159198[];

void func_0209f848(s32 a, s32 b);
void func_02070ba8(s32 a, u32 b, s32 c);

void func_020a19dc(u32 param_1, s32 param_2)
{
    if (param_1 == 0x43 && *(u16 *)(data_02159074 + 0x18) == 30) {
        func_0209f848(100, 60);
        *(u16 *)(data_02159198 + 0x10) = 100;
    }
    func_02070ba8(19, param_1, param_2);
}
