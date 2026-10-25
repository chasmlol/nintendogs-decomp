#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02152cd8;
extern u32 data_02159444;
extern u32 data_02126728;

void func_02044ca0(s32 a);
void func_02067e68(s32 *a, s32 *b, s32 *c);
void func_02067e34(s32 *a, s32 *b, s32 *c);
void func_02067d04(s32 *a, s32 *b, s32 *c);
void func_02006a30(s32 *a, s32 *b);

void func_020eed7c(u8 *param_1, u32 *param_2)
{
    s32 st[12];
    u8 *o;
    s64 sum;
    s64 lim;
    s32 i;

    func_02044ca0((s16)*(s16 *)(param_1 + 0x9c));
    st[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x4c);
    st[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x58);
    st[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x64);
    st[0] = st[0] >> 2;
    st[1] = st[1] >> 2;
    st[2] = st[2] >> 2;
    o = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
    *(T3 *)&st[6] = *(T3 *)(o + 0x48);
    st[9] = st[6] >> 2;
    st[10] = st[7] >> 2;
    st[11] = st[8] >> 1;
    func_02067e68(&st[6], &st[0], &st[6]);
    lim = *(s64 *)&data_02126728;
    sum = (s64)st[6] * st[6] + (s64)st[7] * st[7] + (s64)st[8] * st[8];
    if (sum >= lim) {
        func_02006a30(&st[6], &st[6]);
    }
    st[3] = 0;
    st[5] = 0;
    st[4] = 0x1000;
    func_02067e34(&st[3], &st[9], &st[3]);
    sum = (s64)st[3] * st[3] + (s64)st[4] * st[4] + (s64)st[5] * st[5];
    if (sum >= lim) {
        func_02006a30(&st[3], &st[3]);
    }
    func_02067d04(&st[3], &st[6], &st[0]);
    func_02067d04(&st[0], &st[3], &st[6]);
    param_2[0] = st[0];
    param_2[1] = st[1];
    param_2[2] = st[2];
    param_2[3] = st[3];
    param_2[4] = st[4];
    param_2[5] = st[5];
    param_2[6] = st[6];
    param_2[7] = st[7];
    param_2[8] = st[8];
}
