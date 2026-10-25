#include "ctx.h"
#pragma opt_lifetimes off

extern s32 func_020785f4(s32 *a, s32 b, s32 c, u32 d);
extern void func_02067af0(s32 *a, s32 *b);

#define TBL(i) (*(u16 *)((u32)iVar6 + (u32)(i) * 2))
#define TBL2(i) (*(u16 *)((u32)iVar6 + (i) * 2 + 2))
#define CROSS(p) do { \
    s32 x6_ = ((p)[1] * (p)[5] - (p)[2] * (p)[4]) >> 12; \
    s32 x7_ = ((p)[2] * (p)[3] - (p)[0] * (p)[5]) >> 12; \
    s32 x8_ = ((p)[0] * (p)[4] - (p)[1] * (p)[3]) >> 12; \
    (p)[6] = x6_; (p)[7] = x7_; (p)[8] = x8_; } while (0)

void func_02078ae0(s32 *param_1, s32 param_2, u32 *param_3, u8 *param_4)
{
    s32 local[18];
    s32 iVar5, iVar4, iVar6;
    u32 uVar1, uVar3, uVar2, uVar7, idx;
    s32 iVar2;

    uVar1 = param_2 >> 12;
    iVar5 = (s32)param_4 + *(s32 *)(param_4 + 0xc);
    iVar4 = (s32)param_4 + *(s32 *)(param_4 + 0x10);
    uVar7 = param_3[0];
    iVar6 = (s32)param_4 + param_3[1];

    if ((uVar7 & 0xc0000000) == 0) goto P;
    uVar3 = uVar7 & 0x1fff0000;
    uVar2 = uVar3 >> 16;
    if (uVar7 & 0x40000000) {
        if (uVar1 & 1) {
            if (uVar1 > uVar2) { uVar1 = (uVar2 >> 1) + 1; goto P; }
            idx = uVar1 >> 1;
            goto T;
        } else {
            uVar1 >>= 1;
            goto P;
        }
    } else {
        if (uVar1 & 3) {
            if (uVar1 > uVar2) { uVar1 = (uVar1 & 3) + (uVar2 >> 2); goto P; }
            if (uVar1 & 1) {
                u32 a, b;
                s32 flag = 0;
                if (uVar1 & 2) { b = uVar1 >> 2; a = b + 1; }
                else { a = uVar1 >> 2; b = a + 1; }
                flag |= func_020785f4(param_1, iVar5, iVar4, TBL(a));
                flag |= func_020785f4(local, iVar5, iVar4, TBL(b));
                param_1[0] = param_1[0] * 3 + local[0];
                param_1[1] = param_1[1] * 3 + local[1];
                param_1[2] = param_1[2] * 3 + local[2];
                param_1[3] = param_1[3] * 3 + local[3];
                param_1[4] = param_1[4] * 3 + local[4];
                param_1[5] = param_1[5] * 3 + local[5];
                func_02067af0(param_1, param_1);
                func_02067af0(param_1 + 3, param_1 + 3);
                if (flag == 0) {
                    param_1[6] = param_1[6] * 3 + local[6];
                    param_1[7] = param_1[7] * 3 + local[7];
                    param_1[8] = param_1[8] * 3 + local[8];
                    func_02067af0(param_1 + 6, param_1 + 6);
                } else {
                    CROSS(param_1);
                }
                return;
            } else {
                idx = uVar1 >> 2;
                goto T;
            }
        } else {
            uVar1 >>= 2;
            goto P;
        }
    }

T:
    {
        s32 flag = 0;
        flag |= func_020785f4(param_1, iVar5, iVar4, TBL(idx));
        iVar2 = func_020785f4(local + 9, iVar5, iVar4, TBL2(idx));
        flag |= iVar2;
        param_1[0] = param_1[0] + local[9];
        *(volatile s32 *)&param_1[1] = *(volatile s32 *)&param_1[1] + local[10];
        *(volatile s32 *)&param_1[2] = *(volatile s32 *)&param_1[2] + local[11];
        param_1[3] = param_1[3] + local[12];
        *(volatile s32 *)&param_1[4] = *(volatile s32 *)&param_1[4] + local[13];
        *(volatile s32 *)&param_1[5] = *(volatile s32 *)&param_1[5] + local[14];
        func_02067af0(param_1, param_1);
        func_02067af0(param_1 + 3, param_1 + 3);
        if (flag == 0) {
            *(volatile s32 *)&param_1[6] = *(volatile s32 *)&param_1[6] + local[15];
            *(volatile s32 *)&param_1[7] = *(volatile s32 *)&param_1[7] + local[16];
            *(volatile s32 *)&param_1[8] = *(volatile s32 *)&param_1[8] + local[17];
            func_02067af0(param_1 + 6, param_1 + 6);
        } else {
            CROSS(param_1);
        }
    }
    return;

P:
    iVar2 = func_020785f4(param_1, iVar5, iVar4, TBL(uVar1));
    if (iVar2 == 0) return;
    CROSS(param_1);
}
