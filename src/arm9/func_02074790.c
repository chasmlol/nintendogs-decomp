#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;
typedef struct {
    u8 pad[0xe0];
    VecFx32 trans;
    u8 pad2[0x10];
    u32 flag;
} Glb;

extern Glb data_02152cd8;

void func_02074790(const VecFx32 *p)
{
    data_02152cd8.trans = *p;
    data_02152cd8.flag &= ~0xa4;
}
