#include "ctx.h"

extern u32 *func_020704fc(s32 *a, s32 b, s32 c);
extern u32 func_02070390(s32 a, s32 b);
extern s32 func_02072934(u32 a, u32 b, u32 c, u32 d, u32 *e);
extern void func_020704f0(u32 *p);
extern void func_02070494(u32 a, u32 b, u32 c, u32 d);
extern void func_02070b10(s32 *p, u32 v);
extern void func_02070a98(s32 *p, u32 v);
extern void func_020708f4(s32 *p, u32 a, u32 b);

u32 func_02072d4c(s32 *param_1, s32 param_2, u32 param_3, s32 param_4, s32 *param_5, s32 param_6, u32 param_7, u32 param_8)
{
    u32 *puVar1;
    u32 *piVar2;
    s32 iVar3;
    u32 uStack_1c;

    puVar1 = func_020704fc(param_1, param_2, param_4);
    if (puVar1 == 0) {
        return 0;
    }
    piVar2 = (u32 *)func_02070390(param_2, (u32)puVar1);
    iVar3 = func_02072934(param_3, 6, (u32)piVar2, 0, &uStack_1c);
    if (iVar3 != 0) {
        func_020704f0(puVar1);
        return 0;
    }
    func_02070494((u32)puVar1, param_6 + *(s32 *)(param_6 + 0x18), *param_5, uStack_1c);
    func_02070b10(param_1, *(u8 *)((u8 *)param_5 + 6));
    func_02070a98(param_1, *(u8 *)((u8 *)param_5 + 7));
    func_020708f4(param_1, param_7, param_8);
    return 1;
}
