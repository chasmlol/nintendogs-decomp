#include "ctx.h"

typedef struct {
    u8 pad[0xfc];
    u32 flags;
} Obj;

extern Obj data_02152cd8;
extern u8 data_02152d24[];
extern u8 data_02152dd8[];
void func_02066ef4(void *a, void *b);

void *func_020746a0(void)
{
    if ((data_02152cd8.flags & 8) == 0) {
        func_02066ef4(data_02152d24, data_02152dd8);
        data_02152cd8.flags |= 8;
    }
    return data_02152dd8;
}
