#include "ctx.h"

extern s32 func_01ffdb08(s32 a);
extern s32 func_02044ca0(s32 a);
extern void func_020be7b8(u8 *p);
extern s32 func_020aaec4(s32 a, u8 *b, s32 c);
extern u32 func_020c5e94(u8 *p, u32 a);
extern u32 func_020341d8(s32 a);
extern u32 func_020c5fbc(u8 *p);

u32 func_020c8758(u8 *param_1, u32 param_2)
{
    s32 iVar2;
    s32 iVar3;
    s32 t;
    u32 uVar4;
    u32 bVar1;
    s32 v120;

    iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
    iVar3 = func_02044ca0(0);
    func_020be7b8(param_1);
    v120 = *(s32 *)(param_1 + 0x120);
    t = (v120 >> 1) + (v120 >> 3);
    iVar3 = func_020aaec4(iVar3, (u8 *)(param_1 + 0xbc), t);
    if (iVar3 != 0) {
        uVar4 = func_020c5e94(param_1, param_2);
        return uVar4;
    }
    uVar4 = func_020341d8(iVar2);
    if (uVar4 == 0) {
        bVar1 = func_020c5fbc(param_1);
        return bVar1;
    }
    return uVar4;
}
