#include "ctx.h"

extern u32 data_0212fac4[];
extern u8 data_0213eaa8[];
extern u32 data_02159030[];

void func_0205f050(u8 *buf, u32 n, u8 *fmt, u32 a, s32 b);
void func_02088364(s32 *a);
u64 func_02066160(void);
u32 func_020d5abc(u32 a, u32 b);
u32 func_020d5aa0(void);
void func_02066120(void);
u64 func_0207e9f8(u32 a, u32 b);
s32 func_02088014(s32 *a, u8 *b);
s32 func_020038b8(s32 *p, s32 n);
void func_02087e90(s32 *a, s32 b, s32 c);
void func_02087fcc(s32 *a);
u32 func_02090cac(u32 a, u32 b, u32 c);
void func_02095298(s32 a, u16 *b);
void func_02095304(s32 a);

s32 func_0208b488(s32 *param_1, s16 param_2)
{
    u8 acStack_94[64];
    s32 aiStack_54[16];
    s32 iVar3;
    s32 iVar4;
    s32 iVar6;
    s32 iVar8;
    s32 bVar1;
    u8 *tbl;
    u64 uVar9;
    u16 *psVar4;
    u32 uVar5;

    tbl = (u8 *)data_0212fac4;
    iVar6 = (s32)tbl + param_2 * 12;
    uVar5 = *(u16 *)(tbl + param_2 * 12);
    func_0205f050(acStack_94, 0x40, data_0213eaa8, uVar5, *(s8 *)(iVar6 + 2));
    iVar8 = 0;
    func_02088364(aiStack_54);
    uVar9 = func_02066160();
    iVar3 = (s32)uVar9;
    if (iVar3 != 0) {
        bVar1 = 0;
        for (;;) {
            if (bVar1 == 0 && func_020d5abc((u32)uVar9, (u32)(uVar9 >> 32)) != 0) {
                bVar1 = 1;
            }
            if (bVar1 != 0 && func_020d5aa0() != 0) {
                func_02066120();
            }
            uVar9 = func_0207e9f8(1, 1);
        }
    }
    iVar3 = func_02088014(aiStack_54, acStack_94);
    if (iVar3 != 0) {
        iVar4 = aiStack_54[9] - aiStack_54[8];
        iVar8 = func_020038b8(param_1, iVar4);
        func_02087e90(aiStack_54, iVar8, iVar4);
        func_02087fcc(aiStack_54);
    }
    uVar9 = func_02066160();
    iVar3 = (s32)uVar9;
    if (iVar3 == 0) {
        goto LAB_ret;
    }
    bVar1 = 0;
    for (;;) {
        if (bVar1 == 0 && func_020d5abc((u32)uVar9, (u32)(uVar9 >> 32)) != 0) {
            bVar1 = 1;
        }
        if (bVar1 != 0 && func_020d5aa0() != 0) {
            func_02066120();
        }
        uVar9 = func_0207e9f8(1, 1);
    }
LAB_ret:
    psVar4 = (u16 *)func_02090cac(*(u32 *)(data_02159030[0] + 0x38), *(u32 *)(iVar6 + 8), 0);
    func_02095298(iVar8, psVar4);
    *(u16 *)(iVar8 + 0x66) = *(s16 *)(iVar6 + 4);
    func_02095304(iVar8);
    return iVar8;
}
