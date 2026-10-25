#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0214f464[];
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern s32 func_02041c34(u8 *p);
extern void func_0202813c(u8 *p);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);
extern void func_0202fd8c(u8 *p, s32 a);

static inline void SwapB(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_02014bb0(u8 *param_1, s32 param_2)
{
    u8 *iVar2;
    s32 bVar1;
    u32 uVar3;
    u32 *pc;

    *(u16 *)(param_1 + 0x106) = (u16)(*(u16 *)(param_1 + 0x106) + 1);
    iVar2 = func_0203541c(param_1);
    if ((u32)iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        if (*(s16 *)(iVar2 + 0x90) == 4) {
            goto c4;
        }
        if (*(s16 *)(iVar2 + 0x90) != 7) {
            goto after;
        }
        goto c7;
c4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        goto after;
c7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
after:
        bVar1 = func_ov003_02198298(param_1);
    } else {
        bVar1 = 0;
    }
    if (bVar1 != 0) {
        bVar1 = 1;
        goto gate_done;
    }
    {
        s32 iVar4 = func_020289d0(param_1, param_2, 0);
        if (iVar4 != 0) {
            bVar1 = 1;
        } else {
            bVar1 = func_0202cd10(param_1, (s16)param_2) != 0;
        }
    }
gate_done:
    if (bVar1 == 0) {
        goto late;
    }
    if (func_02041c34(param_1) != 0) {
        SwapB(*(u8 *)(param_1 + 0xb8) + 1, param_1 + 184);
        if (*(u8 *)(param_1 + 0xb8) >= 2) {
            func_0202813c(param_1);
            SwapB(0, param_1 + 184);
        }
    }
    func_02027ee0(param_1, 2, -3000);
    *(u16 *)(param_1 + 0x104) = 10;
    *(u16 *)(param_1 + 0x106) = 0;
    return;
late:
    if (*(u16 *)(param_1 + 0x106) > 36000) {
        *(u16 *)(param_1 + 0x104) = 60;
        *(u16 *)(param_1 + 0x106) = 0;
        func_0203e908(param_1, (s16)(param_2 + 76));
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 300) {
        return;
    }
    pc = *(u32 **)data_0214f464;
    uVar3 = *pc * 0x10dcd + 1;
    *pc = uVar3;
    if ((u16)((((u16)uVar3) * 100u) >> 16) == 0) {
        func_0202fd8c(param_1, (s16)param_2);
    }
}
