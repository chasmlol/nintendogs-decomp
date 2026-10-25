#include "ctx.h"

extern u32 data_02159030;
extern u32 data_02141888;
extern u8 *func_020038b8(u8 *p, u32 n);
extern void func_02090fcc(u8 *buf, u32 n, u32 v);
extern s32 func_0208c87c(u8 *p, u8 *buf);
extern void func_02090cfc(u8 *p, s32 v);

void func_02090f40(u8 *param_1, u32 param_2)
{
    u32 buf32[16];
    u8 *pp;
    u8 *piVar1;
    u32 idx;
    u32 uVar3;
    s32 iVar2;

    idx = param_2;
    pp = param_1;
    if (*(u32 *)(*(u8 **)&data_02159030 + idx * 4 + 4) != 0) {
        return;
    }
    piVar1 = func_020038b8(param_1, 44);
    uVar3 = ((u32 *)&data_02141888)[idx];
    func_02090fcc((u8 *)buf32, 64, uVar3);
    iVar2 = func_0208c87c(pp, (u8 *)buf32);
    func_02090cfc(piVar1, iVar2);
    *(u32 *)((u8 *)*(u8 **)&data_02159030 + (idx << 2) + 4) = (u32)piVar1;
}
