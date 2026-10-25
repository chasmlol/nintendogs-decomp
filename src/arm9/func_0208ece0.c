#include "ctx.h"
#pragma opt_propagation off

extern u32 data_021408d8;
extern u32 data_02152ce0;
extern u32 data_02152cd8;
extern u32 data_02152f18;
extern u32 data_02152f24;
extern u32 data_02152f30;
extern u32 data_02152d24;

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u64 func_0205e270(s32 a, s32 b);
s32 func_02067898(s32 a, s32 b);
void func_0206a890(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_0206a6f8(u8 *a, u8 *b, u8 *c, s32 d, s32 e);

void func_0208ece0(u8 *param_1)
{
    s32 uVar3;
    s32 v;
    T3 *s2;
    T3 *s3;
    T3 *d2;
    T3 *d3;

    if (*(u16 *)(param_1 + 36) == 1) {
        uVar3 = func_02067898((s32)func_0205e270(*(s16 *)(param_1 + 44) << 12, *(s16 *)(param_1 + 46)),
                              data_021408d8 + 0x2000);
        *(s32 *)(param_1 + 0x70) = uVar3;
    }
    func_0206a890(*(s16 *)(param_1 + 108), *(s16 *)(param_1 + 110), *(s32 *)(param_1 + 0x70),
                  *(s32 *)(param_1 + 0x74), *(s32 *)(param_1 + 0x78), 0x1000, 0, (u32)&data_02152ce0);
    *(vu32 *)((u8 *)&data_02152cd8 + 0xfc) = *(vu32 *)((u8 *)&data_02152cd8 + 0xfc) & 0xffffffaf;
    *(T3 *)&data_02152f18 = *(T3 *)(param_1 + 48);
    s2 = (T3 *)(param_1 + 84);
    d2 = (T3 *)&data_02152f24;
    *d2 = *s2;
    s3 = (T3 *)(param_1 + 60);
    d3 = (T3 *)&data_02152f30;
    *d3 = *s3;
    func_0206a6f8(param_1 + 48, param_1 + 84, param_1 + 60, 0, (u32)&data_02152d24);
    *(u32 *)((u8 *)&data_02152cd8 + 0xfc) = *(u32 *)((u8 *)&data_02152cd8 + 0xfc) & 0xffffff17;
    if (*(u16 *)(param_1 + 36) != 1) {
        return;
    }
    if ((*(u16 *)(param_1 + 38) & 1) != 0) {
        v = data_021408d8;
        *(s32 *)((u8 *)&data_02152cd8 + 0x1c) = FX_Mul(*(s32 *)((u8 *)&data_02152cd8 + 0x1c), v + 0x2000);
        uVar3 = func_02067898(v + 0x1000, v - 0x1000);
        *(s32 *)((u8 *)&data_02152cd8 + 0x2c) = uVar3;
        return;
    }
    v = data_021408d8;
    *(s32 *)((u8 *)&data_02152cd8 + 0x1c) = FX_Mul(*(s32 *)((u8 *)&data_02152cd8 + 0x1c), v + 0x2000);
    uVar3 = func_02067898(v + 0x1000, 0x1000 - v);
    *(s32 *)((u8 *)&data_02152cd8 + 0x2c) = uVar3;
}
