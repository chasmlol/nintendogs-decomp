#include "ctx.h"

void func_02088364(s32 *a);
u64 func_02066160(void);
u32 func_020d5abc(u32 a, u32 b);
u32 func_020d5aa0(void);
void func_02066120(void);
u64 func_0207e9f8(u32 a, u32 b);
s32 func_02088014(s32 *a, u8 *b);
s32 func_020038b8(u8 *p, u32 n);
void func_02087e90(s32 *a, s32 b, u32 c);
void func_02087fcc(s32 *a);

s32 func_0208c87c(u8 *param_1, u8 *param_2, u32 param_3, u32 param_4)
{
    s32 aiStack_58[18];
    s32 iVar4;
    s32 iVar3;
    u64 uVar5;
    s32 bVar1;

    iVar4 = 0;
    func_02088364(aiStack_58);
    uVar5 = func_02066160();
    iVar3 = (s32)uVar5;
    if (iVar3 != 0) {
        for (;;) {
            if (iVar4 == 0 && func_020d5abc((u32)uVar5, (u32)(uVar5 >> 32)) != 0) {
                iVar4 = 1;
            }
            if (iVar4 != 0 && func_020d5aa0() != 0) {
                func_02066120();
            }
            uVar5 = func_0207e9f8(1, 1);
        }
    }
    iVar3 = func_02088014(aiStack_58, param_2);
    if (iVar3 != 0) {
        param_3 = aiStack_58[9] - aiStack_58[8];
        iVar4 = func_020038b8(param_1, param_3);
        func_02087e90(aiStack_58, iVar4, param_3);
        func_02087fcc(aiStack_58);
    }
    uVar5 = func_02066160();
    iVar3 = (s32)uVar5;
    if (iVar3 == 0) goto LAB_ret;
    bVar1 = 0;
    for (;;) {
        if (bVar1 == 0 && func_020d5abc((u32)uVar5, (u32)(uVar5 >> 32)) != 0) {
            bVar1 = 1;
        }
        if (bVar1 != 0 && func_020d5aa0() != 0) {
            func_02066120();
        }
        uVar5 = func_0207e9f8(1, 1);
    }
LAB_ret:
    return iVar4;
}
