#include "ctx.h"

extern u32 func_02080b08(void);
extern u64 func_02080b1c(u32);
extern void func_02087248(s32 *, s32);
extern void func_020883c8(s32 *, s32 *);
extern void func_02087a2c(s32 *);
extern void func_0207f554(u16 *);
extern u8 func_020879e4(s32 *, u32);

u8 func_02087854(s32 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    s32 *iVar4;
    u32 sh;
    u32 r;
    u32 f;
    u32 uVar2;

    iVar4 = (s32 *)param_1[2];
    sh = 1u << param_2;
    param_1[4] = param_2;
    param_1[5] = 2;
    param_1[3] = param_1[3] | 1;
    r = func_02080b08();
    if ((iVar4[4] & 0x80) != 0) {
        func_02087248(param_1, 3);
        func_02080b1c(r);
        return 0;
    }
    if ((sh & 0x1fc) != 0) {
        param_1[3] = param_1[3] | 4;
    }
    func_020883c8(param_1, iVar4 + 5);
    f = (iVar4[4] & 8) != 0;
    if (f != 0) {
        goto elsepart;
    }
    f = (((vu32 *)iVar4)[4] & 0x10) != 0;
    if (f != 0) {
        goto elsepart;
    }
    iVar4[4] = iVar4[4] | 0x10;
    func_02080b1c(r);
    if ((iVar4[19] & 0x200) != 0) {
        ((void (*)(s32 *, s32))iVar4[18])(param_1, 9);
    }
    r = func_02080b08();
    param_1[3] = param_1[3] | 0x40;
    f = (((vu32 *)param_1)[3] & 4) != 0;
    if (f == 0) {
        func_02080b1c(r);
        func_02087a2c(param_1);
        return 1;
    }
    uVar2 = (u32)(func_02080b1c(r) >> 32);
    goto tail;
elsepart:
    f = (param_1[3] & 4) != 0;
    if (f == 0) {
        func_02080b1c(r);
        return 1;
    }
    do {
        func_0207f554((u16 *)(param_1 + 6));
    } while ((param_1[3] & 0x40) == 0);
    uVar2 = (u32)(func_02080b1c(r) >> 32);
tail:
    return func_020879e4(param_1, uVar2);
}
