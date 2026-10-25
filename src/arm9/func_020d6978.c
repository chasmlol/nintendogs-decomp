#include "ctx.h"

extern u8 data_02144968[];
extern void func_020650a0(void);
extern void func_020d6a60(u32 a, u32 b, u32 c, u32 d);

void func_020d6978(u32 param_1, u32 param_2)
{
    ((void (*)(u32, u32, u32, u32))func_020d6a60)((u32)data_02144968, (u32)func_020650a0, param_1, param_2);
}
