#include "ctx.h"

extern u32 data_02152cd8;
extern u32 data_02159444;

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void *func_020bc3c4(void);
s32 func_02067898(s32 a, s32 b);
void func_01ff832c(s32 a, u32 *b, u8 *c, u8 *d);

void func_02022910(u8 *param_1, s32 *param_2)
{
    u32 arr[9];
    u32 t0, t1, t2, t3, t4, t5, t6, t7, t8;
    s32 scale;
    s32 uVar5;
    s32 uVar6;
    u8 *g;
    u8 *o;
    u8 *iVar2;
    u8 *iVar3;
    // no tb


    t0 = ((vu32 *)&data_02152cd8)[0x4c / 4];
    t1 = ((vu32 *)&data_02152cd8)[0x58 / 4];
    t2 = ((vu32 *)&data_02152cd8)[0x64 / 4];
    t3 = ((vu32 *)&data_02152cd8)[0x50 / 4];
    t4 = ((vu32 *)&data_02152cd8)[0x5c / 4];
    t5 = ((vu32 *)&data_02152cd8)[0x68 / 4];
    t6 = ((vu32 *)&data_02152cd8)[0x54 / 4];
    t7 = ((vu32 *)&data_02152cd8)[0x60 / 4];
    t8 = ((vu32 *)&data_02152cd8)[0x6c / 4];
    arr[0] = t0;
    arr[1] = t1;
    arr[2] = t2;
    arr[3] = t3;
    arr[4] = t4;
    arr[5] = t5;
    arr[6] = t6;
    arr[7] = t7;
    arr[8] = t8;
    iVar2 = (u8 *)func_020bc3c4();
    iVar3 = (u8 *)func_020bc3c4();
    scale = func_02067898(*(s16 *)(iVar2 + 0x6c), *(s16 *)(iVar3 + 0x6e));
    uVar5 = FX_Mul(-param_2[2], scale);
    uVar6 = FX_Mul(uVar5, 43);
    g = (u8 *)data_02159444;
    o = *(u8 **)(g + 0x1c);
    *(T3 *)param_1 = *(T3 *)(o + 0x30);
    func_01ff832c((s32)(uVar6 * param_2[0]) >> 12, arr, param_1, param_1);
    func_01ff832c((s32)(uVar6 * param_2[1]) >> 12, &arr[3], param_1, param_1);
    func_01ff832c(param_2[2], &arr[6], param_1, param_1);
}
