#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T3;

extern u32 data_0214288c[3];
extern u64 data_02126728;
extern s16 data_02126868[];
extern void func_02067d04(u32 *a, s32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern void func_02067288(u32 *a, u32 *b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, u32 *b, u32 *c);

void func_020be298(u8 *param_1, s32 param_2)
{
    s64 lVar1;
    s32 b;
    s32 a;
    s32 t;
    s32 iVar2;
    u32 uVar5;
    u32 blk[6];
    u32 auStack_40[13];
    s32 fx;
    s32 q3;
    s32 q4;
    s32 q5;

    a = *(s32 *)(param_1 + 0xb8);
    b = *(s32 *)(param_1 + 0xb0);
    if (a <= 0) {
        a = -a;
    }
    if (b <= 0) {
        b = -b;
    }
    {
        s32 sm = b + a;
        fx = FX_Mul(sm, param_2);
    }
    {
        s64 v = (s64)fx * (s64)0x28be60db9391LL;
        t = (s32)((v + ((s64)0x800 << 32)) >> 32);
        uVar5 = ((u32)(t * 16)) >> 16;
    }
    if (uVar5 <= 2) {
        return;
    }
    {
        T3 tmp;
        tmp = *(T3 *)data_0214288c;
        *(T3 *)blk = tmp;
    }
    func_02067d04(blk, (s32 *)(param_1 + 0xb0), &blk[3]);
    q4 = (s32)blk[4];
    q3 = (s32)*(vu32 *)&blk[3];
    q5 = (s32)blk[5];
    lVar1 = (s64)q3 * (s64)q3 + (s64)q4 * (s64)q4 + (s64)q5 * (s64)q5;
    if (lVar1 < (s64)data_02126728) {
        return;
    }
    func_02006a30(&blk[3], &blk[3]);
    iVar2 = (s32)uVar5 >> 4;
    func_02067288(auStack_40, &blk[3], data_02126868[iVar2 * 2], data_02126868[iVar2 * 2 + 1]);
    func_01ff810c((s32 *)(param_1 + 0xc8), auStack_40, (u32 *)(param_1 + 0xc8));
}
