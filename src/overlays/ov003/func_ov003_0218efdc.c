#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;

extern u8 *data_02159444;
extern u8 data_02152cd8[];
extern u8 *data_0215942c;

extern u8 *func_020364cc(u8 *p);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern BOOL func_02009f38(u8 *a, u32 *b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, u32 a);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern s32 func_02028124(u8 *p);
extern void func_0202aa80(u8 *p);

void func_ov003_0218efdc(u8 *param_1)
{
    BOOL bVar2;
    u32 L[6];
    s32 iVar4;
    u8 *iVar3;
    s32 iVar8;

    iVar3 = func_020364cc(param_1);
    iVar8 = 0;
    if (iVar3 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
        L[3] = *(u32 *)(data_02152cd8 + 0x54);
        L[4] = *(u32 *)(data_02152cd8 + 0x60);
        L[5] = *(u32 *)(data_02152cd8 + 0x6c);
        L[0] = *(u32 *)(data_02152cd8 + 0x4c);
        L[1] = *(u32 *)(data_02152cd8 + 0x58);
        L[2] = *(u32 *)(data_02152cd8 + 0x64);
        func_01ff832c(-0x23000, &L[3], (u32 *)(param_1 + 0x26c), (u32 *)(param_1 + 0x26c));
        if (func_02009f38(param_1 + 0x2a0, L)) {
            func_01ff832c(0xf000, L, (u32 *)(param_1 + 0x26c), (u32 *)(param_1 + 0x26c));
        } else {
            func_01ff832c(-0xf000, L, (u32 *)(param_1 + 0x26c), (u32 *)(param_1 + 0x26c));
        }
        func_0203942c(param_1);
        iVar8 = func_02037450(param_1, 0x392);
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x20) {
        *(s16 *)(param_1 + 0xfa) = 0;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = FALSE;
        goto LAB;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = FALSE;
        goto LAB;
    }
    if (iVar3 == 0) {
        goto ACT;
    }
    if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
        bVar2 = TRUE;
    } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
        bVar2 = TRUE;
    } else {
        bVar2 = FALSE;
    }
    if (!bVar2) {
        goto FALSE_;
    }
ACT:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar2 = TRUE;
    goto LAB;
FALSE_:
    bVar2 = FALSE;
LAB:
    if (bVar2) {
        return;
    }
    iVar4 = func_02028124(param_1);
    if (iVar8 < iVar4 * 10) {
        func_0202aa80(param_1);
    }
}
