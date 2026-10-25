#include "ctx.h"

extern s32 func_020bd824(u8 *p, u32 a, s16 b, s32 c);
extern s32 func_01ffdb08(s32 a);
extern void func_0202707c(s32 a, u32 b);
extern void func_020274f0(s32 a, u32 b);
extern void func_020274ac(s32 a, s8 b);

u32 func_020c5d28(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 iVar2;
    s32 iVar3;

    if (func_020bd824(param_1, 7, *(s16 *)(param_1 + 0x98), param_3)) {
        iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
        iVar3 = func_01ffdb08(param_3);
        func_0202707c(iVar2, 0x26);
        func_0202707c(iVar3, 0x26);
        func_020274f0(iVar2, param_2);
        func_020274f0(iVar3, param_2);
        func_020274ac(iVar2, (s8)param_3);
        func_020274ac(iVar3, (s8)*(s16 *)(param_1 + 0x98));
        return 1;
    }
    return 0;
}
