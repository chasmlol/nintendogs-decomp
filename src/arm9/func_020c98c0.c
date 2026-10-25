#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_02142c48;
extern u32 data_02142c44;
extern u32 data_02142c40;
extern s32 func_01ffdb08(s32 a);
extern void func_ov006_021620ec(u32 *a);
extern void func_020c8e4c(s32 a, u32 *b);
extern void func_02067e34(u32 *a, u32 *b, u32 *c);
extern void func_020d90d4(u32 *a, u32 b);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
extern u32 *func_0200c498(u32 a, u32 b);

void func_020c98c0(u32 *param_1, s32 param_2)
{
    u32 aiStack_30[3];
    u32 aiStack_24[3];
    u32 auStack_18[3];
    s32 iVar3;
    u32 *r;
    iVar3 = func_01ffdb08(param_2);
    if (iVar3 != 0) {
        func_ov006_021620ec(aiStack_30);
        func_020c8e4c(iVar3, aiStack_24);
        func_02067e34(aiStack_30, aiStack_24, auStack_18);
        func_020d90d4(auStack_18, 122880);
        func_01ff832c(2048, auStack_18, aiStack_24, param_1 + 3);
    } else {
        r = func_0200c498(0, 0);
        *(T12 *)(param_1 + 3) = *(T12 *)(r + 2);
    }
    *(T12 *)param_1 = *(T12 *)(param_1 + 3);
    param_1[1] = param_1[1] + data_02142c48;
    param_1[2] = param_1[2] + data_02142c44;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142c40;
}
