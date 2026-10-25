#include "ctx.h"

extern s32 *data_0215be34;
extern u32 data_02144bd0[];
extern void func_020e91f0(void);
extern void func_020e91b8(void);
extern s32 func_0208c87c(s32 *a, u8 *b, u32 *c, u32 d);
extern void func_020810c0(s32 a);
extern void func_0208158c(s32 *a, s32 b);
extern void func_020814ec(s32 a, s32 b);
extern void func_02081438(s32 a, s32 b);
extern void func_02081424(s32 a);
extern void func_02081410(s32 a);

void func_020e8f8c(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    s32 iVar1;
    s32 *piVar2;

    piVar2 = (s32 *)data_0215be34;
    iVar1 = func_0208c87c((s32 *)piVar2[2], *(u8 **)((u8 *)data_02144bd0 + param_1 * 4), data_02144bd0, param_4);
    piVar2[3] = iVar1;
    func_020810c0(piVar2[0]);
    func_0208158c((s32 *)piVar2[0], piVar2[3]);
    func_020814ec(piVar2[0], (s32)func_020e91f0);
    func_02081438(piVar2[0], (s32)func_020e91b8);
    func_02081424(piVar2[0]);
    func_02081410(piVar2[0]);
}
