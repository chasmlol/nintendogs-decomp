#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapB(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

extern void func_02026bd0(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02028130(u8 *p);
extern u32 func_01ff8930(s32 a);
extern void func_0202c0ec(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);

void func_0201da4c(u8 *param_1)
{
    s32 spare14;
    s32 iVar2;
    s64 t;
    u32 uVar3;

    *(u16 *)(param_1 + 0x152) = 0x178;
    SwapB(4, (vu8 *)(param_1 + 0x97));
    func_02026bd0(param_1);
    func_02025bb0(param_1);
    iVar2 = func_02028130(param_1);
    uVar3 = func_01ff8930(iVar2);
    t = (s64)(s32)uVar3 * -192;
    *(u32 *)(param_1 + 0x25c) = (u32)((t + 0x800) >> 12);
    func_0202c0ec(param_1);
    func_02023654(param_1, 0x26, 2);
    if (*(u8 *)(param_1 + 0xa3) == 0) {
        return;
    }
    iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
    if (iVar2 != 0) {
        *(s32 *)(param_1 + 0x260) = -(*(s32 *)(param_1 + 0x18c) >> 3);
        *(u32 *)(param_1 + 0x264) = 0x668;
        *(s32 *)(param_1 + 0x268) = -(*(s32 *)(param_1 + 0x194) >> 3);
        return;
    }
}
