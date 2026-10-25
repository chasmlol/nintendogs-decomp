#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[12]; } Blk;

extern void func_02067e68(u8 *a, u32 b, u8 *c);
extern void func_0209d430(u8 *a, u32 b, s32 c);

void func_020e78b0(u8 *param_1, u32 param_2, u32 *param_3)
{
    s32 iVar3;

    func_02067e68(param_1 + 0xbc, param_2, param_1 + 0xbc);
    iVar3 = *(s32 *)(param_1 + 0xb4);
    if (iVar3 < 0) {
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        func_0209d430(param_1 + 400, 0, iVar3);
        *(s32 *)(param_1 + 0xb4) = -FX_Mul(*(s32 *)(param_1 + 0xb4), 0x668);
        *(s32 *)(param_1 + 0xb0) = FX_Mul(*(s32 *)(param_1 + 0xb0), 0xf37);
        *(s32 *)(param_1 + 0xb8) = FX_Mul(*(s32 *)(param_1 + 0xb8), 0xf37);
    }
    *(Blk *)(param_1 + 200) = *(Blk *)param_3;
}
