#include "ctx.h"

extern u32 *data_02159430;
void *func_020038b8(int *p, int n);

void func_020a87a8(int *param_1)
{
    u32 *p;
    s16 i;

    p = (u32 *)func_020038b8(param_1, 0x10);
    data_02159430 = p;
    *p = -1;
    i = 0;
    do {
        *(s16 *)((char *)data_02159430 + 4 + i * 2) = -1;
        ((s32 *)((char *)data_02159430 + 8))[i] = 1;
        i = (s16)(i + 1);
    } while (i < 2);
}
