#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern void func_ov028_0215d254();

u32 func_020d5e60(void);
u32 func_020d5e70(u8 *a, u32 b, u16 *c);
void func_020d5e10(u32 a, u32 b);
u32 func_020d6024(u8 *a, u16 *b);

u32 func_ov028_0215d28c(u16 *param_1)
{
    u16 local_10;
    u16 asStack_e[3];
    u32 uVar9;
    u32 res;
    u32 r;
    u16 sVar1;
    u16 uVar2;
    u8 *o;

    sVar1 = param_1[1];
    if (sVar1 != 0) {
        uVar2 = param_1[0];
        r = *(s32 *)(data_ov028_0215df90 + 0x28);
        if (r == 1) {
            return r;
        }
        *(s32 *)(data_ov028_0215df90 + 0x28) = 1;
        *(u16 *)(data_ov028_0215df90 + 0x24) = sVar1;
        o = data_ov028_0215df90;
        *(u16 *)(o + 0x26) = uVar2;
        return (u32)o;
    }
    sVar1 = param_1[4];
    if (*(u16 *)(data_ov028_0215df90 + 0x3a) > param_1[5]) {
        *(u16 *)(data_ov028_0215df90 + 0x3a) = param_1[5];
        *(u16 *)(data_ov028_0215df90 + 0x38) = sVar1;
    }
    uVar9 = (u16)(sVar1 + 1);
    r = func_020d5e60();
    if (r == 0x8000) {
        res = 3;
        goto join;
    }
    if (r == 0) {
        res = 21;
        goto join;
    }
    if (!((1u << (uVar9 - 1)) & r)) {
        do {
            uVar9 = (u16)(uVar9 + 1);
            if (uVar9 > 16) {
                res = 22;
                goto join;
            }
        } while (!((1u << (uVar9 - 1)) & r));
    }
    r = func_020d5e70((u8 *)func_ov028_0215d28c, uVar9, &local_10);
    res = local_10;
join:
    if (res == 22) {
        func_020d5e10(*(u16 *)(data_ov028_0215df90 + 0x38), *(u32 *)data_ov028_0215df90);
        return func_020d6024((u8 *)func_ov028_0215d254, asStack_e);
    }
    if (res == 2) {
        return r;
    }
    if (*(s32 *)(data_ov028_0215df90 + 0x28) == 1) {
        return (u32)&data_ov028_0215df90;
    }
    *(s32 *)(data_ov028_0215df90 + 0x28) = 1;
    o = data_ov028_0215df90;
    *(u16 *)(o + 0x24) = res;
    o = data_ov028_0215df90;
    *(u16 *)(o + 0x26) = 0x1e;
    return (u32)o;
}
