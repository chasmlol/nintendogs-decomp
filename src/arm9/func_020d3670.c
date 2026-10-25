#include "ctx.h"

typedef struct Four {
    u32 w[4];
} Four;

typedef struct Ten {
    u32 w[10];
} Ten;

typedef struct Two {
    u32 w[2];
} Two;

extern s32 data_02144250;
extern s32 data_02144254;
extern s32 data_02144258;
extern s32 func_020c8db4(s32 v);
extern s32 func_01ffdb08(s32 v);
extern void func_020c98c0(u32 *a, s32 b);
extern void func_02027550(s32 a, u32 *b);
extern s32 func_02067c30(u32 *a);
extern void func_020d0564(u8 *a, u8 *b, u32 *c, s32 d, s32 e, s32 f);
extern void func_020c97a4(u32 *a, s32 b);

void func_020d3670(u8 *param_1, u32 *param_2)
{
    s64 lVar1;
    s32 iVar2;
    u32 aiStack_70[10];
    u32 aiStack_48[3];
    u32 aiStack_3c[11];
    s32 r6;

    iVar2 = func_020c8db4(-1);
    *(s16 *)(param_1 + 0x5c) = (s16)iVar2;
    r6 = func_01ffdb08(*(s16 *)(param_1 + 0x5c));
    func_020c98c0(aiStack_70, *(s16 *)(param_1 + 0x5c));
    func_02027550(r6, aiStack_48);
    iVar2 = func_02067c30(aiStack_48);
    lVar1 = (s64)iVar2 * data_02144250 + 0x800;
    iVar2 = data_02144254 + (s32)(lVar1 >> 12);
    if (iVar2 > data_02144258) {
        iVar2 = data_02144258;
    }
    func_020d0564(param_1 + 8, param_1 + 8, aiStack_70, iVar2, iVar2, 0x400);
    if (*(s32 *)(param_1 + 0x58) == 0) {
        *(Ten *)param_2 = *(Ten *)(param_1 + 8);
        return;
    }
    if (*(s32 *)(param_1 + 0x58) == 1) {
        func_020c97a4(aiStack_3c, *(s16 *)(param_1 + 0x5c));
        func_020d0564(param_1 + 0x30, param_1 + 0x30, aiStack_3c, 0x1000, 0x1000, 0x20);
        *(Ten *)param_2 = *(Ten *)(param_1 + 0x30);
    }
}
