#include "ctx.h"

extern u8 *func_01ffdb08(s32 i);
extern s32 func_020354c0(u8 *p);
extern s32 func_02035424(u8 *p);
extern void func_02027654(u8 *p, u32 *q);
extern s32 func_02032aac(u8 *p, s32 i);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 v);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern void func_0202fd7c(u8 *p);

void func_0200ec20(u8 *param_1)
{
    s32 bVar1;
    u8 *iVar2;
    s32 iVar3;
    u32 uVar5;
    u32 uVar4;

    uVar5 = 0;
    uVar4 = 0xffffffff;
    *(u16 *)(param_1 + 0x106) = *(u16 *)(param_1 + 0x106) + 1;
    *(u32 *)(param_1 + 0x26c) = 0;
    *(u32 *)(param_1 + 0x270) = 0;
    *(u32 *)(param_1 + 0x274) = 0;
    do {
        if (uVar5 != (u32)(s32)*(s8 *)(param_1 + 0x88)) {
            iVar2 = func_01ffdb08(uVar5);
            if (iVar2 != NULL) {
                iVar3 = func_020354c0(iVar2);
                if (iVar3 != 0 || (iVar3 = func_02035424(iVar2), iVar3 != 0)) {
                    func_02027654(iVar2, (u32 *)(param_1 + 0x26c));
                    bVar1 = func_02032aac(param_1, uVar5);
                    if (bVar1 != 0) {
                        uVar4 = uVar5;
                    }
                }
            }
        }
        uVar5 = (u32)(s32)(s16)(uVar5 + 1);
    } while ((s32)uVar5 < 3);
    func_0203942c(param_1);
    func_02037450(param_1, 0x392);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 == 0) {
        if (*(s8 *)(param_1 + 0xa0) != 0 && uVar4 == 0xffffffff && *(u16 *)(param_1 + 0x106) <= 200) {
            return;
        }
        func_0202fd7c(param_1);
    }
}
