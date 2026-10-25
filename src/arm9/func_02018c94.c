#include "ctx.h"

extern u8 data_0213b424[];
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, int a, int b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, int v);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, int v);

static inline s32 FXM(s32 x, s32 k)
{
    s64 v = (s64)x * k + 0x800;
    return (s32)(v >> 12);
}

void func_02018c94(u8 *param_1)
{
    s32 iVar2;
    u8 *iVar5;
    s32 r;

    r = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 0x17, 0x25, -FXM(r, 0x62));
    if (iVar2 == 0) {
        r = func_02028124(param_1);
        func_02024d40(param_1, 0x25, 0x3c, -FXM(r, 0x2f));
    }
    iVar2 = func_02026fe0(param_1);
    if (iVar2 != 0) {
        (*(void (**)(u8 *))(data_0213b424 + 4))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar5 = func_0203541c(param_1);
    if (iVar5 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(iVar5 + 0x90) == 4) goto b4;
    if (*(s16 *)(iVar5 + 0x90) != 7) goto after;
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 1;
        }
    }
    goto after;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 8;
        }
    }
after:
    iVar2 = func_ov003_02198298(param_1);
    goto check;
zero:
    iVar2 = 0;
check:
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(param_1, 5);
}
