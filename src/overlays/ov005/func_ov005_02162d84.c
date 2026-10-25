#include "ctx.h"
extern u8 data_ov005_02167f00[];
extern u8 *func_01ffdb08(s32 a);
extern void func_ov005_02163d4c(u8 *a, u32 b, u32 *c);
extern void func_02081aec(u8 *p, u32 *a, u32 *b);
extern s32 func_02028130(u8 *p);
void func_ov005_02162d84(u8 *param_1)
{
    u8 *iVar2;
    u32 uVar3;
    u32 auStack_28[3];
    u32 auStack_1c[3];
    s64 v;
    iVar2 = func_01ffdb08((s16)*(s16 *)(*(u8 **)data_ov005_02167f00));
    func_ov005_02163d4c(iVar2, 0, auStack_28);
    func_ov005_02163d4c(iVar2, 1, auStack_1c);
    func_02081aec(param_1, auStack_28, auStack_1c);
    uVar3 = func_02028130(iVar2);
    v = (s64)(s32)uVar3 * (s64)0xa66 + 0x800;
    *(u32 *)(param_1 + 0x44) = (u32)(v >> 12);
    *(s32 *)(param_1 + 0x54) = (s32)*(s16 *)(*(u8 **)data_ov005_02167f00 + 8);
}
