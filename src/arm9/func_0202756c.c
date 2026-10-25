#include "ctx.h"
typedef struct { u32 w[12]; } Blk48;
void func_0202756c(u8 *src, u32 *dst)
{
    *(Blk48 *)dst = *(Blk48 *)(src + 60);
}
