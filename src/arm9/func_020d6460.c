#include "ctx.h"

extern u8 data_02144938;
extern void func_02064c58(void);
extern void func_020d6a60(void);

void func_020d6460(u32 a, u32 b)
{
    ((void (*)(u32, u32, u32, u32))func_020d6a60)((u32)&data_02144938, (u32)func_02064c58, a, b);
}
