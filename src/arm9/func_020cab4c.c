#include "ctx.h"

extern int data_02142e44;
extern int data_02142cc8;
extern void func_02006a30(int *a, int *b);
extern void func_01ff832c(int a, int *b, int *c, int *d);

typedef struct {
    int w0;
    int w1;
    int w2;
} Vec3;

void func_020cab4c(int *param_1, int *param_2)
{
    int iVar2;
    int local_28[3];
    int local_1c[4];

    *(Vec3 *)param_1 = *(Vec3 *)param_2;
    local_28[0] = -*param_1;
    local_28[1] = 0;
    local_28[2] = -param_1[2];
    iVar2 = data_02142e44;
    func_02006a30(local_28, local_28);
    local_1c[0] = *param_1;
    local_1c[1] = 0;
    local_1c[2] = param_1[2];
    func_01ff832c(iVar2, local_28, local_1c, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142cc8;
}
