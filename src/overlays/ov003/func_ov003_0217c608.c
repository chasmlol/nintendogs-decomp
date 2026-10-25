#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u8 *data_02159444;
extern u32 func_0203942c(u8 *p);
extern void func_02037450(u8 *p, u32 n);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern u32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern u32 func_0202fcc0(u8 *p);

static inline u32 SwapByte(u32 v, u8 *p)
{
    u32 r;
    *(u8 *)(p) = (u8)(v);
    return r;
}

void func_ov003_0217c608(u8 *param_1)
{
    u32 uVar4;
    u32 bVar2;
    s32 iVar3;
    u32 x;

    bVar2 = 0;
    x = *(s16 *)(param_1 + 0x152);
    if (x == 0x90) {
        goto L90;
    }
    if (x == 0x111) {
        goto L111;
    }
    uVar4 = (u32)param_1;
    goto BC;
L90:
    iVar3 = *(s32 *)(*(u8 **)&data_02159444 + 0x1c);
    *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar3 + 0x30);
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    uVar4 = func_0203567c(param_1);
    if (uVar4 != 0) {
        func_0203e8cc(param_1, bVar2, 0x111);
        iVar3 = func_02035164(param_1);
        func_0203e8cc(param_1, 3, iVar3);
        func_02026bac(param_1);
        uVar4 = SwapByte(10, param_1 + 147);
    }
    goto BC;
L111:
    uVar4 = func_0203567c(param_1);
    if (uVar4 != 0) {
        bVar2 = 1;
    }
BC:
    if (bVar2 == 0) {
        return;
    }
    uVar4 = func_0202fcc0(param_1);
    return;
}
