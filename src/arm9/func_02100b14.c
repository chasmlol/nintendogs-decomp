#include "ctx.h"

extern u32 data_0215be4c;
extern u16 *func_02085c78(int a, int b);
extern u32 func_02101764(int a, int b);
extern void func_021017d4(int a, u32 b, u32 c);

typedef struct { u16 a; } S2;
typedef struct { s16 lo:12; u16 a:2; u16 b:2; } HW;
typedef struct { u16 lo:12; u16 a:2; u16 b:2; } PH;
typedef volatile s16 vs16;

extern void func_02101fb0(int a, void *b, int c, S2 d, S2 e, s32 f, s32 g, void *h, u32 i, s32 j, void *k, int l);

void func_02100b14(int param_1, int param_2, int param_3, int param_4, int param_5,
                   s32 param_6, s32 param_7, u16 *param_8)
{
    HW loc[2];
    u16 *puVar6;
    u32 iVar8;
    u32 iVar7;

    puVar6 = func_02085c78(param_2, param_4);
    iVar8 = *(u32 *)&data_0215be4c + 4;
    loc[0].lo = param_6;
    loc[0].a = ((PH *)puVar6)[0].a;
    loc[0].b = ((PH *)puVar6)[0].b;
    loc[1].lo = param_7;
    loc[1].a = ((PH *)puVar6)[1].a;
    loc[1].b = ((PH *)puVar6)[1].b;
    iVar7 = func_02101764(param_1, param_3);
    func_021017d4(param_1, iVar7, ((u32)puVar6[3] << 20) >> 28);
    func_02101fb0(param_1, (void *)iVar8, param_3, *(S2 *)&loc[0], *(S2 *)&loc[1], *(s8 *)((u8 *)puVar6 + 4), *(s8 *)((u8 *)puVar6 + 5), param_8, *(u8 *)((u8 *)puVar6 + 6), -1, (void *)param_5, 0);
}
