#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc8[];
extern u8 data_0212fdc9[];
extern u16 data_02141fb4;

extern void func_02072fe4(u8 *p, u32 a, u32 b);
extern void func_020a2284(u32 a, u32 b);
extern u32 func_0209b774(u8 *p);
extern void func_02070c18(u8 *p, u32 a);
extern u32 func_0205e270(u32 a, u32 b);
extern void func_02070b20(u8 *p, u32 a);
extern u32 func_0209b73c(u8 *p);
extern void func_020709c8(u8 *p, u32 a, u32 b);

s32 func_020a1624(u8 *p, u32 p2, u32 p3, u8 *p4)
{
    u32 uVar5;
    u32 uVar4;
    u32 idx;
    u32 uVar2;
    s32 iVar3;
    u32 uVar1;

    idx = *(u16 *)(data_02159074 + 24) * 6;
    uVar5 = data_0212fdc8[idx];
    uVar4 = data_0212fdc9[idx];
    func_02072fe4(p, p2, p3);
    if (p2 == 0x31 && p3 == 3) {
        func_020a2284(0x31, 5);
    }
    if (*(s32 *)p == 0) {
        goto done;
    }
    uVar2 = func_0209b774(p4);
    if (uVar2 <= uVar5) {
        uVar1 = 127;
        goto store;
    }
    if (uVar2 >= uVar4) {
        goto zexit;
    }
    uVar1 = func_0205e270((uVar4 - uVar2) * 127, uVar4 - uVar5);
    goto store;
zexit:
    func_02070c18(p, 0);
    return -1;
store:
    if (p2 != 50) {
        func_02070b20(p, uVar1);
    }
    iVar3 = func_0209b73c(p4);
    func_020709c8(p, data_02141fb4, iVar3);
done:
    return 1;
}
