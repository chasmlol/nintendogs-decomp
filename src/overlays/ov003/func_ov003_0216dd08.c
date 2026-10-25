#include "ctx.h"
extern u8 data_0214f464[];
extern u8 data_02152cd8[];
extern void func_02039448(u8 *p);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
void func_ov003_0216dd08(u8 *param_1)
{
    u32 loc[6];
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;
    uVar2 = **(u32 **)data_0214f464 * 0x10dcdu + 1;
    **(u32 **)data_0214f464 = uVar2;
    iVar4 = (s32)(u16)(((u32)(u16)uVar2 * 0x78u) >> 16) + 0x1e;
    iVar3 = **(s32 **)data_0214f464 * 0x10dcd + 1;
    **(s32 **)data_0214f464 = iVar3;
    if ((u16)(((u32)iVar3 << 16) >> 31)) {
        iVar4 = -iVar4;
    }
    loc[0] = *(u32 *)(data_02152cd8 + 0x4c);
    loc[1] = *(u32 *)(data_02152cd8 + 0x58);
    loc[2] = *(u32 *)(data_02152cd8 + 0x64);
    loc[3] = *(u32 *)(data_02152cd8 + 0x54);
    loc[4] = *(u32 *)(data_02152cd8 + 0x60);
    loc[5] = *(u32 *)(data_02152cd8 + 0x6c);
    func_02039448(param_1);
    func_01ff832c(iVar4 * 0x19a, loc, (u32 *)(param_1 + 0x2a0), (u32 *)(param_1 + 0x278));
    func_01ff832c(0xf03c, &loc[3], (u32 *)(param_1 + 0x278), (u32 *)(param_1 + 0x278));
}
