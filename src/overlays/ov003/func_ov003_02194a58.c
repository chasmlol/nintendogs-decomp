#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T3;

extern void func_02026358(u8 *p);
extern s32 func_02035770(u8 *p, u32 n);
extern void func_0202615c(u8 *p);
extern s32 func_0203579c(u8 *p, u32 n);
extern s32 func_02028124(u8 *p);
extern void *func_020364cc(u8 *p);
extern s32 func_020c1f34(void *p);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, s32 v);

void func_ov003_02194a58(u8 *param_1)
{
    BOOL bVar1;
    s32 iVar2;
    s32 uVar3;
    s32 iVar4;
    u8 *q;

    if (*(s8 *)(param_1 + 0xa0) == 0) {
        func_02026358(param_1);
    } else {
        iVar2 = func_02035770(param_1, 9);
        if (iVar2 != 0) {
            func_0202615c(param_1);
        }
    }
    iVar2 = func_0203579c(param_1, 11);
    if (iVar2 != 0) {
        uVar3 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(uVar3, -66);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -21;
    }
    q = func_020364cc(param_1);
    if (q != 0) {
        if (*(s16 *)(q + 0x90) == 0 || *(s16 *)(q + 0x90) == 2) {
            bVar1 = TRUE;
        } else if (*(s16 *)(q + 0x94) == 53 && (iVar4 = func_020c1f34(q), iVar4 == 0)) {
            bVar1 = TRUE;
        } else {
            bVar1 = FALSE;
        }
        if (!bVar1) {
            T3 tmp;
            tmp = *(T3 *)(q + 0xbc);
            *(T3 *)(param_1 + 0x26c) = tmp;
            *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
            *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
            func_02037450(param_1, 256);
        }
    }
    iVar2 = func_0203567c(param_1);
    func_ov003_02197f94(param_1, iVar2);
}
