#include "ctx.h"

typedef struct {
    u8 pad[0x398];
    u32 *q;
} Outer;

extern Outer *data_ov014_0215c7c0;
void func_0208010c(u32 a, u32 b);
void func_02007354(u32 *a, u32 b, u32 c);

void func_ov014_0215c0d0(void)
{
    u32 *q = data_ov014_0215c7c0->q;
    func_0208010c(q[0], q[4]);
    func_02007354(data_ov014_0215c7c0->q, 0, 0);
}
