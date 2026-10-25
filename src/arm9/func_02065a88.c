#include "ctx.h"

extern u8 data_02150600[];
extern u8 data_02150c00[];
extern s32 data_02150be0;
extern u32 data_02155cf8[];
extern void func_02065630(void);
extern s32 func_02080b08(void);
extern void func_02080b1c(s32);
extern u64 func_0207f554(u8 *, u32);
extern void func_0206bfe4(u32);
extern u64 func_02065ce4(u8 *);
extern u32 func_02065bb0(u8 *, u32);
extern u32 func_020658c0(void *, u32);
extern u8 func_02065a7c(u32, u32);

u32 func_02065a88(u32 param_1, s32 param_2, u32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 base;
    u32 iVar8;
    s32 iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 p7;
    s32 t;
    u64 r;
    u8 bVar3;

    base = (u32)data_02150600;
    iVar8 = (u32)data_02150c00;
    func_02065630();
    t = func_02080b08();
    uVar5 = *(u32 *)(base + 0x34);
    if ((uVar5 & 4) != 0) {
        do {
            r = func_0207f554((u8 *)(base + 0xd4), uVar5);
            uVar5 = (u32)(r >> 32);
        } while ((*(u32 *)(base + 0x34) & 4) != 0);
    }
    *(u32 *)(base + 0x34) = *(u32 *)(base + 0x34) | 4;
    func_02080b1c(t);
    *(u32 *)(base + 0x24) = param_1;
    *(s32 *)(base + 0x18) = param_2 + data_02150be0;
    *(u32 *)(base + 0x1c) = param_3;
    *(s32 *)(base + 0x20) = param_4;
    *(u32 *)(base + 0x28) = param_5;
    *(u32 *)(base + 0x2c) = param_6;
    if (param_1 <= 3) {
        func_0206bfe4(param_1);
    }
    r = func_02065ce4((u8 *)iVar8);
    iVar4 = (s32)r;
    if (iVar4 == 0) {
        goto zero;
    }
    p7 = *(vu32 *)&param_7;
    if (p7 != 0) {
        return p7;
    }
    bVar3 = func_02065a7c(p7, (u32)(r >> 32));
    return (u32)bVar3;
zero:
    if (*(vu32 *)&param_7 == 0) {
        goto f4;
    }
    uVar5 = func_020658c0((void *)func_02065bb0, (u32)(r >> 32));
    return uVar5;
f4:
    uVar6 = data_02155cf8[2];
    *(u32 *)(base + 0xd0) = uVar6;
    uVar5 = func_02065bb0((u8 *)base, uVar6);
    return uVar5;
}
