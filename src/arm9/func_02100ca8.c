#include "ctx.h"

typedef struct { u16 a; } Half;
typedef struct { s16 lo : 12; u16 a : 2; u16 b : 2; } HW;
typedef struct { u16 lo : 12; u16 a : 2; u16 b : 2; } PH;

extern u8 *data_0215be4c;

extern u16 *func_02085c78(s32 a, s32 b);
extern s32 func_02101764(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);
extern void func_02101fb0(s32 a, u8 *b, s32 c, Half d, Half e, s32 f, s32 g, void *h, s32 i, s32 j, s32 k, void *l);

void func_02100ca8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u16 *param_7)
{
    u16 *puVar6;
    HW rec[2];
    s32 iVar7;
    u8 *pa;

    puVar6 = func_02085c78(param_2, param_4);
    pa = data_0215be4c + 4;
    rec[0].lo = param_5;
    rec[0].a = ((PH *)puVar6)[0].a;
    rec[0].b = ((PH *)puVar6)[0].b;
    rec[1].lo = param_6;
    rec[1].a = ((PH *)puVar6)[1].a;
    rec[1].b = ((PH *)puVar6)[1].b;
    iVar7 = func_02101764(param_1, param_3);
    func_021017d4(param_1, iVar7, ((u32)puVar6[3] << 20) >> 28);
    func_02101fb0(param_1, pa, param_3, *(Half *)&rec[0], *(Half *)&rec[1], (s32)*(s8 *)((u8 *)puVar6 + 4), (s32)*(s8 *)((u8 *)puVar6 + 5), param_7, (u32)*(u8 *)((u8 *)puVar6 + 6), -1, -1, 0);
}
