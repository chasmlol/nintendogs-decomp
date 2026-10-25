#include "ctx.h"

typedef struct {
    u16 a;
} Half;

typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;
typedef struct { u16 lo:12; u16 a:2; u16 b:2; } PH;

extern u32 data_0215be4c;
extern u8 *func_02085c78(u32 a, u32 b);
extern s32 func_02101764(u32 a, u32 b);
extern void func_021017d4(u32 a, s32 b, u32 c);
extern void func_02101fb0(u32 a, u8 *b, u32 c, Half d, Half e, s32 f, s32 g, u16 *h, u32 i, s32 j, u32 k, void *l);

void func_02100fac(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u16 *param_5, u32 param_6)
{
    HW rec[2];
    u8 *p;
    u8 *q;
    s32 iVar6;

    p = func_02085c78(param_2, param_4);
    rec[0].lo = 0;
    q = *(u8 **)&data_0215be4c;
    q = (u8 *)((u32)q + 4);
    rec[0].a = ((PH *)p)[0].a;
    rec[0].b = ((PH *)p)[0].b;
    rec[1].lo = 0;
    rec[1].a = ((PH *)p)[1].a;
    rec[1].b = ((PH *)p)[1].b;
    iVar6 = func_02101764(param_1, param_3);
    func_021017d4(param_1, iVar6, (((u32)*(u16 *)(p + 6)) << 20) >> 28);
    func_02101fb0(param_1, q, param_3, *(Half *)&rec[0], *(Half *)&rec[1], *(s8 *)(p + 4), *(s8 *)(p + 5), param_5,
                  (u32)p[6], -1, param_6, 0);
}
