#include "ctx.h"
extern u32 data_ov007_02160d80;
extern void func_ov007_0215cdc8(void);
extern int func_020d5fe4(int a);
extern int func_020d6664(void *a, short *b);

void func_ov007_0215d060(int param_1)
{
    short asStack_8[2];
    if (func_020d5fe4(param_1) != 0) {
        *(s16 *)((char *)(*(int **)&data_ov007_02160d80) + 88) = 900;
        func_020d6664((void *)func_ov007_0215cdc8, asStack_8);
    }
}
