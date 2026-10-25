#include "ctx.h"

extern u8 *func_020704fc(u8 *p, s32 a, s32 b);
extern u8 *func_02070390(s32 a, u8 *b);
extern s32 func_02072934(u32 a, s32 b, u8 *c, s32 d, u32 *e);
extern s32 func_02072b04(u32 a, s32 b, u8 *c, s32 d, u32 *e);
extern void func_02070494(u8 *a, u32 b, s32 c, u32 d);
extern void func_02070b10(u8 *p, s32 v);
extern void func_02070a98(u8 *p, s32 v);
extern void func_0207091c(u8 *p, u32 v);
extern void func_020704f0(u8 *p);

u32 func_02072e1c(u8 *param_1, s32 param_2, u32 param_3, s32 param_4, u8 *param_5, u32 param_6)
{
    u8 *puVar1;
    u8 *piVar2;
    u32 uStack_24;
    u32 auStack_20[2];

    u8 *p5 = param_5;
    puVar1 = func_020704fc(param_1, param_2, param_4);
    if (puVar1 == 0) {
        return 0;
    }
    piVar2 = func_02070390(param_2, puVar1);
    if (func_02072934(param_3, 6, piVar2, 0, auStack_20) != 0) {
        func_020704f0(puVar1);
        return 0;
    }
    if (func_02072b04(param_6, 1, piVar2, 0, &uStack_24) != 0) {
        func_020704f0(puVar1);
        return 0;
    }
    func_02070494(puVar1, uStack_24 + *(u32 *)(uStack_24 + 0x18), 0, auStack_20[0]);
    func_02070b10(param_1, p5[6]);
    func_02070a98(param_1, p5[7]);
    func_0207091c(param_1, param_6);
    return 1;
}
