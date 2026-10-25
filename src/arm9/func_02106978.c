#include "ctx.h"
extern u8 data_0215bf9c[];
extern u8 data_02147e1c[];
extern u8 data_02147e30[];
extern u32 func_0210a554(void);
extern u32 func_02108480(void);
extern u32 func_02106c3c(u32 a);
extern u32 func_0210a2cc(void);

u32 func_02106978(s32 param_1)
{
    u8 *iVar1;
    u8 *r4;
    u32 uVar2;
    s32 iVar3;

    iVar1 = *(u8 **)data_0215bf9c;
    r4 = iVar1 + 0x160;
    uVar2 = func_0210a554();
    switch (uVar2) {
    case 0:
        goto ret30;
    case 1:
        goto tail;
    case 2:
        goto c2;
    case 3:
        goto c3;
    case 4:
        goto ret1c;
    default:
        goto ret30;
    }
tail:
    if (param_1 == 0) {
        iVar3 = (s32)func_0210a2cc();
        return func_02106c3c(*(u32 *)(r4 + iVar3 * 4 + 4));
    }
    if (param_1 == 10) {
        return func_02108480();
    }
    return func_02106c3c(*(u32 *)(*(u8 **)data_0215bf9c + param_1 * 4 + 0x164));
c2:
    if (param_1 == 10) {
        return func_02108480();
    }
    return func_02106c3c(*(u32 *)(r4 + 4));
c3:
    return func_02108480();
ret1c:
    return (u32)data_02147e1c;
ret30:
    return (u32)data_02147e30;
}
