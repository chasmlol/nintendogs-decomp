#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_0213b424;
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 v);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_020198c0(u8 *param_1)
{
    u8 *iVar5;
    s32 iVar2;
    if (func_02026fe0(param_1) != 0) {
        ((void (*)(u8 *))*(u32 *)((u8 *)&data_0213b424 + 8))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar5 = func_0203541c(param_1);
    if (iVar5 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar5 + 144)) {
        case 4:
            if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 9);
    }
}
