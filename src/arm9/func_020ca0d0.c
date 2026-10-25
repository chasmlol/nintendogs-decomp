#include "ctx.h"

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} V3;

extern u32 data_0215948c;
extern u32 data_02159428;
extern u32 data_02159494;
extern int func_01ffdb08(int a);
extern void func_020cdc04(int *a, int *b, int c, int d, u32 e);
extern void func_02027668(int a, u32 *b);
extern void func_020ca29c(int *a, u32 *b, u32 c, int *d, u32 e, int *f, u32 g, u32 h, u32 i);

void func_020ca0d0(int *param_1, int param_2, int param_3, u32 param_4)
{
    int iVar1;
    int iStack_44;
    vu32 uStack_40[2];
    u32 aiStack_38[3];
    V3 cp;
    V3 zero;

    iVar1 = func_01ffdb08(param_2);
    if (param_3 != 0) {
        zero.w0 = 0;
        zero.w1 = 0;
        zero.w2 = 0;
        func_020cdc04(&iStack_44, (int *)&zero, *(int *)(data_02159428 + 0xc), 0, *(u16 *)&data_0215948c);
        uStack_40[0] = data_02159494;
        func_02027668(iVar1, aiStack_38);
        cp = *(V3 *)(param_3 + 0xbc);
        func_020ca29c(param_1, aiStack_38, 0x1000, (int *)&cp, 0xa000, &iStack_44, param_4, 0xa000, 0x3c000);
    }
}
