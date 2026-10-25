#include "ctx.h"

extern u8 data_0215be48[];

s32 func_0210e968(s32 a, s32 b);
s32 func_02073828(s32 v, s32 *out);
u32 *func_02006bac(s32 a);
u32 *func_02006b78(s32 a);

typedef struct {
    s32 flag;
    s32 f04;
    s32 f08;
    s32 f0c;
    s32 f10[4];
} Out;

void func_020fc76c(s32 p1, s32 p2, s32 p3, s32 p4, s32 p5)
{
    s32 tmp;
    s32 ids[4];
    s32 a;
    s32 b;
    u32 *res;
    s32 base;
    s32 i;
    Out *out;

    base = (s32)((u32)(*(u32 *)data_0215be48 + 0x1dec) + 0x528);
    out = (Out *)(base + 0x24);
    a = func_0210e968(p1, p2);
    b = func_0210e968(p1, p3);
    ids[0] = 0;
    ids[1] = func_0210e968(p1, p4);
    ids[2] = func_0210e968(p1, p5);
    ids[3] = 0;
    res = func_02006bac(b);
    out->f08 = res[5];
    out->f04 = res[4];
    res = func_02006b78(a);
    out->f0c = res[3];
    for (i = 0; i < 4; i++) {
        if (ids[i] != 0) {
            if (func_02073828(ids[i], &tmp) != 0) {
                out->f10[i] = tmp + 12;
            }
        } else {
            out->f10[i] = 0;
        }
    }
    out->flag = 1;
}
