#include "ctx.h"

extern s32 func_02035584(u8 *p, u32 a);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_0202e29c(u8 *p);
extern void func_020b9b18(u32 a);
extern void func_020b9858(s32 a, s32 b);
extern void func_02029290(u8 *p, u32 a, u32 b);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);

void func_ov003_02174780(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    u8 *t;

    iVar2 = func_02035584(param_1, 1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        goto zero;
    }
    iVar2 = func_0202e29c(param_1);
    if (iVar2 != 0) {
        func_020b9b18(3);
    }
    func_020b9858(*(s8 *)(param_1 + 0x88), *(s16 *)(param_1 + 0xf6));
    func_02029290(param_1, 0x57, 1);
    func_0203e908(param_1, 0);
    bVar1 = 1;
    goto test;
zero:
    bVar1 = 0;
test:
    if (bVar1) {
        iVar2 = func_02039cc4(param_1);
        if (iVar2 != 0) {
            t = (u8 *)func_020bc3c4() + 136;
            *(u32 *)(t + 0x6c) = 0;
            func_020bbe14(2, *(s8 *)(param_1 + 0x88));
        }
    }
}
