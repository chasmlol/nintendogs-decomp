#include "ctx.h"

extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_02013e24(u8 *param_1)
{
    s32 r4;
    s32 iVar2;
    s32 flag;

    func_02022b7c(param_1);
    r4 = (param_1[0xa4] != 0);
    if (r4) {
        r4 = (func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), param_1[0xa6]) != 0);
    }
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(iVar2 + 0x90)) {
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
    goto join;
zero:
    iVar2 = 0;
join:
    if (iVar2 != 0) {
        flag = 1;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 0, 0);
    if (iVar2 != 0) {
        flag = 1;
        goto done;
    }
    if (!r4) {
        iVar2 = func_0202cd10(param_1, 0);
        if (iVar2 != 0) {
            flag = 1;
            goto done;
        }
    }
    flag = 0;
done:
    if (flag != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0);
    }
}
