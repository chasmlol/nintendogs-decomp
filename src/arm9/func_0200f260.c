#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02035744(u8 *p, u32 a);
extern s32 func_02028124(u8 *p);
extern void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
extern s32 func_02036510(u8 *p);
extern void func_02027654(s32 a, u8 *b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern void func_020397fc(u8 *p);

void func_0200f260(u8 *param_1)
{
    s32 iVar2;
    s32 uVar3;
    u32 b4;
    u8 *r6;

    iVar2 = func_02035744(param_1, 40);
    if (iVar2 != 0) {
        uVar3 = func_02028124(param_1);
        func_01ff832c(-FX_Mul(uVar3, 64), param_1 + 0x18c, param_1 + 0x260, param_1 + 0x260);
    }
    b4 = *(u16 *)(param_1 + 0xfc) > 30;
    iVar2 = func_02036510(param_1);
    if (iVar2 != 0) {
        func_02027654(iVar2, param_1 + 0x3b4);
    }
    r6 = func_0203541c(param_1);
    if (r6 == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(r6 + 0x90)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    iVar2 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar2 = 0;
test:
    if (iVar2 == 0) {
        if (b4) {
            func_020397fc(param_1);
        }
    }
}
