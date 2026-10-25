#include "ctx.h"

extern u8 *data_ov005_02167f04;
extern s16 data_ov005_02167e18[];
extern s32 func_01ffdb08(s32 a);
extern u32 func_020d8fa0(void);
extern void func_ov005_0216172c(void);
extern void func_ov005_021618b0(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
extern s32 func_020273f0(s32 a);

typedef struct {
    u8 pad0[44];
    s16 f44;
    u16 f46;
    s16 a48[6];
    s16 b60[6];
    s16 c72[6];
    s16 d84[6];
} Obj;

#define GO (*(Obj * volatile *)&data_ov005_02167f04)

void func_ov005_02164984(u32 param_1, u32 param_2)
{
    s32 iVar4;
    s16 i;
    s32 sum;

    *(u16 *)(data_ov005_02167f04 + 36) = (u16)param_1;
    iVar4 = func_01ffdb08(param_1);
    *(u32 *)(data_ov005_02167f04 + 0x28) = func_020d8fa0();
    func_ov005_0216172c();
    func_ov005_021618b0(param_1);
    *(u16 *)(data_ov005_02167f04 + 44) = (u16)func_02027f78(iVar4, 7);
    if (*(s16 *)(data_ov005_02167f04 + 44) > 0x2328) {
        *(s16 *)(data_ov005_02167f04 + 44) = 0x2328;
    }
    for (i = 0; i < 6; i = (s16)(i + 1)) {
        *(s16 *)(data_ov005_02167f04 + 48 + (u32)i * 2) = (s16)((*(s16 *)(data_ov005_02167f04 + 44) * data_ov005_02167e18[(u32)i]) / 100);
    }
    sum = 0;
    for (i = 0; i < 6; i = (s16)(i + 1)) {
        sum = (s16)(sum + *(s16 *)(data_ov005_02167f04 + 48 + (u32)i * 2));
    }
    *(s16 *)(data_ov005_02167f04 + 50) = (s16)(*(s16 *)(data_ov005_02167f04 + 50) + (s16)(*(s16 *)(data_ov005_02167f04 + 44) - sum));
    if (param_2 != 60) goto T61;
    if (func_020273f0(iVar4) == 0) goto L13c;
T61:
    if (param_2 != 61) goto L150;
    if (func_020273f0(iVar4) != 1) goto L150;
L13c:
    *(u16 *)(data_ov005_02167f04 + 46) = 0x251c;
    goto L160;
L150:
    *(u16 *)(data_ov005_02167f04 + 46) = 0x2134;
L160:
    for (i = 0; i < 6; i = (s16)(i + 1)) {
        *(s16 *)(data_ov005_02167f04 + 60 + (u32)i * 2) = (s16)((*(s16 *)(data_ov005_02167f04 + 46) * data_ov005_02167e18[(u32)i]) / 100);
    }
    sum = 0;
    for (i = 0; i < 6; i = (s16)(i + 1)) {
        sum = (s16)(sum + *(s16 *)(data_ov005_02167f04 + 60 + (u32)i * 2));
    }
    *(s16 *)(data_ov005_02167f04 + 62) = (s16)(*(s16 *)(data_ov005_02167f04 + 62) + (s16)(*(s16 *)(data_ov005_02167f04 + 46) - sum));
    if (*(s16 *)(data_ov005_02167f04 + 44) > *(s16 *)(data_ov005_02167f04 + 46)) {
        for (i = 0; i < 6; i = (s16)(i + 1)) {
            *(s16 *)(data_ov005_02167f04 + 60 + (u32)i * 2) = *(s16 *)(data_ov005_02167f04 + 48 + (u32)i * 2);
        }
    }
    for (i = 0; i < 6; i = (s16)(i + 1)) {
        Obj *g = GO;
        g->c72[i] = (s16)((g->a48[i] * 20) / 100);
        g = GO;
        g->a48[i] = (s16)(g->a48[i] - g->c72[i]);
        g = GO;
        g->d84[i] = (s16)((g->b60[i] * 20) / 100);
        g = GO;
        g->b60[i] = (s16)(g->b60[i] - g->d84[i]);
    }
    *(u32 *)(data_ov005_02167f04 + 0x88) = 0;
    *(u16 *)(data_ov005_02167f04 + 140) = 0;
}
