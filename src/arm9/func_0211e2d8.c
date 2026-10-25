#include "ctx.h"

extern u8 data_0215be48[];
extern u32 func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern u32 func_020fc938(u32 a, u32 b, u32 c, u32 d);
extern void func_02101118(u32 a, u32 b, u32 c, u32 d, u32 e);
extern u8 *func_02094608(s32 a);
extern s32 func_0209561c(void);
extern u8 *func_0211b3b0(s32 a);
extern void func_02100fac(u32 a, u32 b, u32 c, u32 d, void *e, u32 f);
extern u8 *func_0210f100(s32 a, s32 b);
extern u32 func_0211c294(u8 *a, s32 b);
extern void func_02112798(u32 a, u32 b, u32 c);

typedef struct { u16 a; u16 b; } Rec4;

#define W(k) (*(s32 *)(param_1 + 4 * (k)))
#define H(o) (*(u16 *)(param_1 + (o)))
#define SH(o) (*(s16 *)(param_1 + (o)))

void func_0211e2d8(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 sI;
    s32 bVar1;
    u8 *S;
    u16 local_40[4];
    u16 local_38[8];
    s16 *psVar3;
    s32 iVar4;
    s32 iVar6;
    s32 iVar5;
    u32 uVar7;
    u32 uu;
    s32 dW0;
    s32 dW1;
    u8 *pb;
    s16 *sq;

    H(40) = 14;
    H(42) = 0;
    H(44) = 15;
    H(46) = 1;
    H(48) = 16;
    H(50) = 2;
    H(52) = 17;
    H(54) = 3;
    H(56) = 18;
    H(58) = 4;
    H(60) = 19;
    H(62) = 5;
    H(64) = 20;
    H(66) = 6;
    H(68) = 21;
    H(70) = 7;
    S = param_1 + 7360;
    {
        sI = 0;
        do {
            func_02101894(0, param_2, param_3, ((Rec4 *)(param_1 + 40))[sI].a, 0);
            func_02101280(0, ((Rec4 *)(param_1 + 40))[sI].a);
            sI = sI + 1;
        } while (sI < 8);
    }
    uu = func_020fc938(2, 1, 9000, 0);
    func_02101118(0, param_4, H(56), H(58), uu);
    bVar1 = 0;
    iVar6 = 0;
    for (;;) {
        psVar3 = (s16 *)func_02094608((s16)iVar6);
        if (!((*(s8 *)((u8 *)psVar3 + 2)) != (s16)(*(s16 *)(S + 8)) || psVar3[0] != (*(s16 *)(10 + S)))) {
            bVar1 = 1;
            W(0) = (s8)((u8 *)psVar3)[3];
            if ((*(s32 *)(S + 4)) == 4) {
                iVar5 = 0;
                if (0 < func_0209561c()) {
                    do {
                        pb = func_0211b3b0(iVar5);
                        iVar5 = iVar5 + 1;
                        if (psVar3[0] == *(s16 *)(pb + 6)) {
                            W(0) = W(0) - 1;
                        }
                    } while (iVar5 < func_0209561c());
                }
            }
            dW0 = W(0);
            local_40[0] = 0x78;
            local_40[1] = (dW0 / 10) % 10 + 0x30;
            local_40[3] = 0;
            local_40[2] = dW0 % 10 + 0x30;
            func_02101280(0, H(60));
            func_02100fac(0, *(u32 *)(*(u8 **)data_0215be48 + 0x232c), H(60), H(62), local_40, 7);
            goto LAB_out;
        }
        iVar6 += 1;
        if (200 > iVar6) {
            continue;
        }
        break;
    }
LAB_out:
    if (!bVar1) {
        local_38[0] = 0x78;
        local_38[3] = 0;
        local_38[1] = 0x30;
        local_38[2] = 0x30;
        func_02101280(0, H(60));
        func_02100fac(0, *(u32 *)(*(u8 **)data_0215be48 + 0x232c), H(60), H(62), local_38, 7);
    }
    W(1) = 0;
    sq = (s16 *)(param_1 + 7360);
    psVar3 = (s16 *)func_0210f100((s16)(sq[4]), sq[5]);
    uVar7 = func_0211c294((u8 *)psVar3, (*(s32 *)(param_1 + 0x1cc0)));
    if ((*(s32 *)(param_1 + 0x1cc0)) == 2) {
        bVar1 = 0;
        if (W(1) < W(0)) {
            bVar1 = (W(1) + 1) * (s32)uVar7 + W(2) <= 0x05f5e0ff;
        }
    } else {
        bVar1 = 0;
        if (W(1) < 99 - W(0) && W(2) >= (W(1) + 1) * (s32)uVar7) {
            bVar1 = 1;
        }
    }
    if (bVar1) {
        W(1) = W(1) + 1;
    }
    dW1 = W(1);
    local_38[5] = (dW1 / 10) % 10 + 0x30;
    local_38[4] = 0x78;
    local_38[7] = 0;
    local_38[6] = dW1 % 10 + 0x30;
    func_02101280(0, H(52));
    func_02100fac(0, *(u32 *)(*(u8 **)data_0215be48 + 0x232c), H(52), H(54), &local_38[4], 7);
    W(3) = 2;
    W(4) = 3;
    func_02112798(2, 4, 0);
    func_02112798(2, 5, 0);
    func_02112798(2, 6, 0);
    func_02112798(2, 7, 0);
    sq = (s16 *)(param_1 + 7360);
    psVar3 = (s16 *)func_0210f100((sq[4]), sq[5]);
    uVar7 = func_0211c294((u8 *)psVar3, (*(s32 *)(param_1 + 0x1cc0)));
    if ((*(s32 *)(param_1 + 0x1cc0)) == 2) {
        bVar1 = 0;
        if (W(1) < W(0)) {
            bVar1 = (W(1) + 1) * (s32)uVar7 + W(2) <= 0x05f5e0ff;
        }
    } else {
        bVar1 = 0;
        if (W(1) < 99 - W(0) && W(2) >= (W(1) + 1) * (s32)uVar7) {
            bVar1 = 1;
        }
    }
    if (!bVar1) {
        func_02112798(2, 6, 1);
    }
    if (W(1) <= 0) {
        func_02112798(2, 7, 1);
    }
    func_02112798(2, 9, 0);
    func_02112798(2, 10, 0);
    func_02112798(2, 12, 0);
    func_02112798(2, 13, 0);
}
