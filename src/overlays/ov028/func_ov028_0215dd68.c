#include "ctx.h"

extern u32 data_ov028_0215df90;
extern u8 *func_020038b8(u8 *p, u32 n);
extern u32 func_02003860(u8 *p, u32 a, u32 b);
extern void func_020d6cd8(void);

void func_ov028_0215dd68(u8 *param_1, u8 *param_2)
{
    u8 *iVar2;
    s32 uVar3;
    s32 uVar5;
    u32 wA;
    u32 wB;

    iVar2 = func_020038b8(param_1, 60);
    *(u8 **)&data_ov028_0215df90 = iVar2;
    *(u32 *)(iVar2 + 0x1c) = 0;
    *(u32 *)(*(u8 **)&data_ov028_0215df90) = (u32)param_2;
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x30) = 0;
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x14) = 0;
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18) = 0;
    uVar5 = ((*(u16 *)(param_2 + 52) + 35) & 0xffffffe0);
    uVar3 = ((*(u16 *)(param_2 + 54) + 33) & 0xffffffe0);
    if (uVar5 <= uVar3) {
        uVar5 = uVar3;
    }
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 4) = uVar5;
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 8) = func_02003860(param_1, *(u32 *)(*(u8 **)&data_ov028_0215df90 + 4), 32);
    wA = ((*(u16 *)(param_2 + 54) + 14) * *(u16 *)(param_2 + 16) + 41) & 0xffffffe0;
    wA = wA * 2;
    wB = ((*(u16 *)(param_2 + 52) + 85) & 0xffffffe0) * 2;
    if (wA <= wB) {
        wA = wB;
    }
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0xc) = wA;
    *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x10) = func_02003860(param_1, *(u32 *)(*(u8 **)&data_ov028_0215df90 + 0xc), 32);
    *(u16 *)(*(u8 **)&data_ov028_0215df90 + 56) = 0;
    *(u16 *)(*(u8 **)&data_ov028_0215df90 + 44) = 0;
    func_020d6cd8();
}
