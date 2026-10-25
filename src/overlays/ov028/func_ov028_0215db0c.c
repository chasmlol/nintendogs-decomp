#include "ctx.h"
extern u32 data_ov028_0215df90;
extern void func_ov028_0215d5e4(void);
extern int func_020d67cc(void *a, int b, short *c);

#define GP (*(int **)&data_ov028_0215df90)

u32 func_ov028_0215db0c(void)
{
    int *piVar1;
    short asStack_8[2];
    piVar1 = GP;
    if (piVar1[7] == 0) {
        piVar1[8] = 1;
        GP[10] = 0;
        *(u16 *)((char *)GP + 36) = 0;
        *(u16 *)((char *)GP + 38) = 0;
        return func_020d67cc((void *)func_ov028_0215d5e4, 2, asStack_8);
    }
    return 0;
}
