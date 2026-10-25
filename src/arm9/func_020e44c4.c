#include "ctx.h"

typedef struct Tri { s32 a; s32 b; s32 c; } Tri;

extern Tri data_02144b54;
extern u8 *data_02159468;
extern u8 *func_01ffdb08(s32 i);
extern void func_0202707c(u8 *p, s32 v);
extern void func_020274b8(u8 *p, u8 *q);
extern void func_020e4ad0(u8 *p);

static s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)((u32)(v >> 12));
}

void func_020e44c4(u8 *param_1, u32 param_2)
{
    s32 local_30[4];
    s32 uVar5;
    u16 uVar3;
    s32 iVar4;
    s32 lcg;
    s32 uVar6;

    *(Tri *)local_30 = data_02144b54;
    uVar5 = 0;
    uVar3 = *(u16 *)(*(u8 **)(param_1 + 0x214) + 0x10);
    if (uVar3 > 300) {
        uVar5 = (uVar3 < 600) ? 1 : 2;
    }
    lcg = *(s32 *)data_02159468 * 0x10dcd + 1;
    *(s32 *)data_02159468 = lcg;
    {
        s64 v = (s64)(s16)(u16)(lcg & 0xfff) * (s64)0x1000 + 0x800;
        iVar4 = (s32)((u32)(v >> 12));
    }
    uVar6 = 0;
    if (iVar4 < local_30[uVar5]) {
        do {
            iVar4 = (s32)func_01ffdb08(uVar6);
            if (iVar4 != 0) {
                if (uVar6 == param_2) {
                    func_0202707c((u8 *)iVar4, 2);
                } else {
                    func_0202707c((u8 *)iVar4, 4);
                    func_020274b8((u8 *)iVar4, param_1 + 0xbc);
                }
            }
            uVar6 = (s16)(uVar6 + 1);
        } while (uVar6 < 3);
        func_020e4ad0(param_1);
    }
    *(u32 *)(param_1 + 0x16c) = *(u32 *)(param_1 + 0x16c) & (u32)((1u << param_2) == 0);
}
