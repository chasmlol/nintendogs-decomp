#include "ctx.h"

typedef struct Tri { u32 a; u32 b; u32 c; } Tri;
typedef struct { Tri t; s32 arr[4]; s32 gap[2]; s32 rest[4]; } Frm;

extern s32 data_02142c58;
extern s32 data_02142c54;
extern s32 data_02142c50;
extern s32 data_02142c4c;
extern s32 func_020e617c(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 v, s32 *a, s32 *b, s32 *c);

void func_020c99ac(s32 *param_1, u8 *param_2)
{
    s16 sVar1;
    Frm F;
    s32 bVar3;
    u32 e8;
    u32 e4;
    u32 e0;

    if (param_2 == NULL) {
        return;
    }
    sVar1 = *(s16 *)(param_2 + 0x94);
    if (sVar1 != 0x40 && sVar1 != 0x41 && sVar1 != 0x42) {
        return;
    }
    bVar3 = func_020e617c(param_2);
    if (bVar3 != 0) {
        *(Tri *)&F.arr[3] = *(Tri *)(param_2 + 0xbc);
        func_02067e34(&F.arr[3], param_1 + 3, F.rest);
        func_02067e68(param_1, F.rest, param_1);
        *(Tri *)(param_1 + 3) = *(Tri *)&F.arr[3];
    } else {
        *(Tri *)&F.arr[3] = *(Tri *)(param_2 + 0xbc);
        e8 = *(u32 *)(param_2 + 0xe8);
        e4 = *(u32 *)(param_2 + 0xe4);
        e0 = *(u32 *)(param_2 + 0xe0);
        F.t.a = e0;
        F.t.b = e4;
        F.t.c = e8;
        F.arr[0] = 0;
        F.arr[1] = 0x1000;
        F.arr[2] = 0;
        func_01ff832c(data_02142c58, (s32 *)&F.t, &F.arr[3], param_1);
        func_01ff832c(data_02142c54, F.arr, param_1, param_1);
        func_01ff832c(data_02142c50, (s32 *)&F.t, &F.arr[3], param_1 + 3);
    }
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142c4c;
}
