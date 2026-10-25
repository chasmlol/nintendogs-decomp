#include "ctx.h"

extern void *data_02159034;
void *func_020038b8(int *p, int n);
void func_02096434(void *p);

void func_020963f4(int *param_1)
{
    u32 *p;

    p = (u32 *)func_020038b8(param_1, 0x15d4);
    *p = 0;
    *(u16 *)(p + 1) = 0;
    *(u16 *)((char *)p + 6) = 0;
    *(u16 *)(p + 2) = 0;
    func_02096434(p);
    data_02159034 = p;
}
