#include "ctx.h"

extern u8 data_0213c432[];

s32 func_02044aa8(s16 a, s16 b, s32 c)
{
    return (s32)*(s16 *)(data_0213c432 + a * 100 + b * 6 + c * 2);
}
