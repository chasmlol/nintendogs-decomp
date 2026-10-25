#include "ctx.h"

#define PTR4(p) (*(u8 **)((u8 *)(p) + 4))

extern u8 *func_020641b8(void);
extern s32 func_02064098(s32, s32, s32);
extern void func_020800d4(u8 *, s32);
extern s32 func_020647fc(void);
extern u32 func_020648e8(void);
extern void func_0206431c(s32, u32);
extern s32 func_020641c8(s32, s32, u32, u32, u32, u16, u16, u16, u32, u32, u32, u32);

s32 func_02065324(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6, u16 param_7, u32 param_8, u32 param_9, u32 param_10, u32 param_11)
{
    u8 *iVar1;
    s32 iVar2;
    s32 t;
    u32 uVar3;
    u32 hw;

    iVar1 = func_020641b8();
    iVar2 = func_02064098(2, 7, 8);
    if (iVar2 != 0) {
        return iVar2;
    }
    func_020800d4(PTR4(iVar1) + 0x184, 2);
    func_020800d4(PTR4(iVar1) + 0xc2, 2);
    iVar2 = (s32)PTR4(iVar1);
    if (*(u16 *)((u8 *)iVar2 + 0x184) != 0 && *(u16 *)((u8 *)iVar2 + 0xc2) != 1) {
        return 3;
    }
    func_020800d4((u8 *)iVar2 + 0xc, 4);
    if (*(s32 *)(PTR4(iVar1) + 0xc) == 1) {
        return 3;
    }
    t = func_020647fc();
    if ((s32)param_3 < t) {
        return 6;
    }
    if ((param_3 & 0x3f) != 0) {
        return 6;
    }
    hw = param_5;
    uVar3 = func_020648e8();
    if ((s32)hw < (s32)uVar3) {
        return 6;
    }
    if ((hw & 0x1f) != 0) {
        return 6;
    }
    func_0206431c(14, param_1);
    t = func_020641c8(14, 10, param_2, param_3 >> 1, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11);
    if (t == 0) {
        t = 2;
    }
    return t;
}
