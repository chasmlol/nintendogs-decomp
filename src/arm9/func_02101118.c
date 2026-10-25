#include "ctx.h"
extern u8 *data_0215be4c;
extern u16 *func_02085c78(u32 a, u32 b);
extern u32 func_02101764(u8 *a, u32 b);
extern void func_021017d4(u8 *a, u32 b, u32 c);

typedef struct { u16 v; } S16;
extern void func_02101fb0(u8 *a, u8 *b, u32 c, S16 d, S16 e, s32 f, s32 g, u16 *h, u32 i, s32 j, s32 k, u32 l);

typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;
typedef struct { u16 lo:12; u16 a:2; u16 b:2; } PH;

void func_02101118(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u16 *param_5)
{
    HW rec[2];
    u16 *puVar5;
    u32 iVar6;
    u8 *q;

    puVar5 = func_02085c78(param_2, param_4);
    rec[0].lo = 0;
    q = data_0215be4c + 4;
    rec[0].a = ((PH *)puVar5)[0].a;
    rec[0].b = ((PH *)puVar5)[0].b;
    rec[1].lo = 0;
    rec[1].a = ((PH *)puVar5)[1].a;
    rec[1].b = ((PH *)puVar5)[1].b;
    iVar6 = func_02101764(param_1, param_3);
    func_021017d4(param_1, iVar6, ((u32)puVar5[3] << 20) >> 28);
    func_02101fb0(param_1, q, param_3, *(S16 *)&rec[0], *(S16 *)&rec[1],
                  *(s8 *)((u8 *)puVar5 + 4), *(s8 *)((u8 *)puVar5 + 5), param_5,
                  *(u8 *)((u8 *)puVar5 + 6), -1, -1, 0);
}
