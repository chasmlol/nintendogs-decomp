#include "ctx.h"

extern s32 func_02035584(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0202e29c(u8 *p);
extern void func_020b9b18(s32 a);
extern void func_020b9858(s32 a, s32 b);
extern void func_02029290(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);

void func_ov003_02174534(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;

    iVar2 = func_02035584(param_1, 1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        iVar2 = func_0202e29c(param_1);
        if (iVar2 != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s16)*(s8 *)(param_1 + 0x88), *(s16 *)(param_1 + 0xf6));
        func_02029290(param_1, 0x57, 1);
        func_0203e908(param_1, 3);
        bVar1 = 1;
    } else {
        bVar1 = 0;
    }
    if (bVar1 != 0) {
        iVar2 = func_02039cc4(param_1);
        if (iVar2 != 0) {
            u32 q = (u32)func_020bc3c4() + 136;
            *(u32 *)(q + 0x6c) = 0;
            func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
        }
    }
}
