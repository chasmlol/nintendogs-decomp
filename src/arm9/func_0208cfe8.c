#include "ctx.h"

extern u32 data_0213e770;
extern u32 data_0213e778;

typedef u32 (*Fn3)(u32, u32, u32);

void func_0208cfe8(u8 *param_1)
{
    u32 r;
    r = ((Fn3)(*(u32 *)&data_0213e770))(0x4a00, 1, 0);
    *(u32 *)(param_1 + 0xb0) = r;
    r = ((Fn3)(*(u32 *)&data_0213e778))(0x2c00, 0, 0);
    *(u32 *)(param_1 + 0xb8) = r;
}
