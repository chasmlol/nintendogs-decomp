#include "ctx.h"

extern u8 data_0215b20c;

u32 func_020df9bc(void);
s16 *func_020dfa10(void);
void func_020df6ec(s16 *p, s32 v, u8 *d);

u8 *func_020df960(void)
{
    *(u32 *)&data_0215b20c = 0;
    *(u32 *)((u8 *)&data_0215b20c + 4) = 0;
    *(u16 *)((u8 *)&data_0215b20c + 8) = 0;
    if (func_020df9bc() == 0) {
        return &data_0215b20c;
    }
    {
        s16 *psVar3 = func_020dfa10();
        func_020df6ec(psVar3 + 3, *psVar3, &data_0215b20c);
    }
    return &data_0215b20c;
}
