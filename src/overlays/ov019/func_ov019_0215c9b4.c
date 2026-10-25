#include "ctx.h"

extern int func_0200b8a0(int *a, int *b, int *c);

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} Triple;

u32 func_ov019_0215c9b4(int param_1, int *param_2, int param_3)
{
    int iVar1;
    Triple local_18;

    if (param_1 != 0) {
        iVar1 = (param_1 != 0) ? *(int *)(param_1 + 0x2c) : 0;
        if (iVar1 != 0) {
            if (param_1 != 0) {
                local_18 = *(Triple *)(param_1 + 0x5c);
            }
            iVar1 = func_0200b8a0(param_2, (int *)(param_1 + 0x68), (int *)&local_18);
            if (iVar1 < param_3) {
                return 1;
            }
        }
    }
    return 0;
}
