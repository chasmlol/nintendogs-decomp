#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T12;

extern void func_02026058(u8 *p);
extern s32 func_02035770(u8 *p, u32 v);
extern void func_02025f4c(u8 *p);
extern s32 func_0203579c(u8 *p, u32 v);
extern s32 func_02028124(u8 *p);
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, s32 v);

void func_ov003_02195084(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    s32 iVar4;
    if (*(s8 *)(param_1 + 160) == 0) {
        func_02026058(param_1);
    } else {
        iVar2 = func_02035770(param_1, 8);
        if (iVar2 != 0) {
            func_02025f4c(param_1);
        }
    }
    iVar2 = func_0203579c(param_1, 10);
    if (iVar2 != 0) {
        *(s32 *)(param_1 + 0x25c) = FX_Mul(func_02028124(param_1), -65);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -17;
    }
    iVar2 = (s32)func_020364cc(param_1);
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && (iVar4 = func_020c1f34((u8 *)iVar2), iVar4 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (bVar1 == 0) {
            *(T12 *)(param_1 + 0x26c) = *(T12 *)(iVar2 + 0xbc);
            *(T12 *)(param_1 + 0x278) = *(T12 *)(param_1 + 0x26c);
            *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = func_0203567c(param_1);
    func_ov003_02197f94(param_1, iVar2);
}
