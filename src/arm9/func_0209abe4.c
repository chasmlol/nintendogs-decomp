#include "ctx.h"
extern u8 data_02159094[];
extern u8 data_02159198[];
extern u8 data_02159074[];
extern void func_0209f848(u32 a, u32 b);
extern void func_02072fe4(u8 *p, s32 a, s32 b);
extern void func_02070800(u8 *p, s32 a, s32 b);
void func_0209abe4(void)
{
    u8 *piVar1;
    piVar1 = data_02159094;
    if (*(s32 *)piVar1 == 0) {
        func_0209f848(0, 0);
        func_02072fe4(piVar1, (s32)*(s16 *)(data_02159198 + 0x20), 0x14);
        func_02070800(piVar1, 8, (s32)*(s16 *)(data_02159074 + 0x24));
        return;
    }
}
