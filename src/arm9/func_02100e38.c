#include "ctx.h"

typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;
typedef struct { u16 lo:12; u16 a:2; u16 b:2; } PH;
typedef struct { u16 v; } S2;

extern s32 data_0215be4c;
extern u16 *func_02085c78(u32 a, u32 b);
extern s32 func_02101764(u8 *p, u32 b);
extern void func_021017d4(u8 *p, s32 a, u32 b);
extern u8 *func_02090cac(u32 a, u32 b, u32 c);
extern void func_02101fb0(u8 *p, s32 *q, u32 c, S2 d, S2 e, s32 f, s32 g, u8 *h, u32 i, s32 j, s32 k, u8 *l);

void func_02100e38(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u8 *param_8)
{
    HW pk[2];
    u16 *puVar5;
    PH *src;
    s32 iVar8;
    s32 *q;
    s32 iVar6;
    u8 *puVar7;

    puVar5 = func_02085c78(param_2, param_4);
    src = (PH *)puVar5;
    pk[0].lo = 0;
    iVar8 = data_0215be4c;
    q = (s32 *)(iVar8 + 4);
    pk[0].a = src[0].a;
    pk[0].b = src[0].b;
    pk[1].lo = 0;
    pk[1].a = src[1].a;
    pk[1].b = src[1].b;
    iVar6 = func_02101764(param_1, param_3);
    func_021017d4(param_1, iVar6, ((u32)puVar5[3] << 20) >> 28);
    puVar7 = func_02090cac(param_5, param_6, param_7);
    func_02101fb0(param_1, q, param_3, *(S2 *)&pk[0], *(S2 *)&pk[1], (s32)*(s8 *)((u8 *)puVar5 + 4),
                  (s32)*(s8 *)((u8 *)puVar5 + 5), puVar7, (u32)*(u8 *)((u8 *)puVar5 + 6), -1, -1, param_8);
}
