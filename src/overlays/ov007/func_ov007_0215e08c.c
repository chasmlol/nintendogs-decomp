#include "ctx.h"

extern u32 data_ov007_02160d80;
extern u32 func_020038b8(u8 *p, u32 n);
extern u32 func_02003860(u8 *p, u32 a, u32 b);
extern void func_020d6cd8(void);

#define GP (*(u8 **)&data_ov007_02160d80)

void func_ov007_0215e08c(u8 *param_1, u8 *param_2)
{
    u32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    iVar2 = func_020038b8(param_1, 92);
    GP = (u8 *)iVar2;
    *(u32 *)(iVar2 + 0x28) = 0;
    *(u32 *)GP = (u32)param_2;
    *(u32 *)(GP + 0x3c) = 0;
    *(u32 *)(GP + 0x14) = 0;
    *(u32 *)(GP + 0x18) = 0;
    *(u32 *)(GP + 0x1c) = 0;
    *(u32 *)(GP + 0x20) = 0;
    *(u32 *)(GP + 0x24) = 0;
    uVar5 = (*(u16 *)(param_2 + 0x34) + 0x23) & 0xffffffe0;
    uVar3 = (*(u16 *)(param_2 + 0x36) + 0x21) & 0xffffffe0;
    if ((s32)uVar5 <= (s32)uVar3) {
        uVar5 = uVar3;
    }
    *(u32 *)(GP + 4) = uVar5;
    uVar4 = func_02003860(param_1, *(u32 *)(GP + 4), 32);
    *(u32 *)(GP + 8) = uVar4;
    uVar5 = (((*(u16 *)(param_2 + 0x36) + 14) * *(u16 *)(param_2 + 16) + 41) & 0xffffffe0) * 2;
    uVar3 = ((*(u16 *)(param_2 + 0x34) + 85) & 0xffffffe0) * 2;
    if (uVar5 <= uVar3) {
        uVar5 = uVar3;
    }
    *(u32 *)(GP + 0xc) = uVar5;
    uVar4 = func_02003860(param_1, *(u32 *)(GP + 0xc), 32);
    *(u32 *)(GP + 0x10) = uVar4;
    *(u16 *)(GP + 68) = 0;
    *(u32 *)(GP + 0x48) = 0;
    *(u16 *)(GP + 56) = 0;
    func_020d6cd8();
}
