#include "ctx.h"

extern u8 *data_02159428;
extern s32 data_021449ec;
extern s32 data_021449e0;
extern s32 data_021449e4;
extern s32 data_021449dc;
extern s32 data_021449c8;
extern s32 data_021449bc;
extern s32 data_021449c0;
extern s32 data_02144a00;

s32 func_020be21c(void);
s32 func_020be20c(void);
s32 func_020c8db4(s32 a);
void func_020cb4c8(s32 *a, s32 *b, s32 c);
void func_020d9484(s32 *p, s32 a);
s32 func_02062164(void);

static inline s32 FX_Mul(s32 v1, s32 v2)
{
    return (s32)(((s64)v1 * v2 + 0x800LL) >> 12);
}

static inline s32 RandLerp(s32 start, s32 end)
{
    s32 t = (s32)(func_02062164() << 12) / 0x7fff;
    return start + FX_Mul(end - start, t);
}

void func_020d9924(s32 *param_1)
{
    s32 local[3];
    s32 iVar7;
    s32 iVar8;
    u32 uVar6;
    s32 t;
    s32 u;
    s32 v;
    s64 lVar1;

    *(volatile s32 *)param_1 = 1;
    if (*(volatile s32 *)param_1 == 0) {
        return;
    }
    *(volatile s32 *)param_1 = 0;
    iVar7 = *(volatile s32 *)param_1;
    switch (iVar7) {
    case 0:
        func_020d9484(param_1, 1);
        return;
    case 1:
        {
            s32 a;
            a = func_020be21c();
            local[1] = func_020be20c();
            local[0] = 0;
            local[2] = a;
            *(s16 *)((u8 *)param_1 + 0x42) = (s16)func_020c8db4(-1);
            func_020cb4c8(param_1 + 1, local, *(s16 *)((u8 *)param_1 + 0x42));
        }
        return;
    case 2:
        if (*(u16 *)(data_02159428 + 6) != 0x12) {
            param_1[13] = data_021449ec;
            *(s16 *)(param_1 + 14) = (s16)((((s64)RandLerp(data_021449e4, data_021449e0) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
            param_1[15] = data_021449dc;
        } else {
            param_1[13] = data_021449c8;
            *(s16 *)(param_1 + 14) = (s16)((((s64)RandLerp(data_021449c0, data_021449bc) * 0xb60b60b60bLL) + 0x80000000000LL) >> 44);
            param_1[15] = data_02144a00;
        }
        return;
    }
}
