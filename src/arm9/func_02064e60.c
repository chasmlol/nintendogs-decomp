#include "ctx.h"

extern s32 func_02064098(u32 a, u32 b, u32 c, u32 d);
extern void func_02064e10(u8 *p);
extern void func_0206431c(u32 a, u32 b);
extern void func_020800f0(u32 a, u32 b);
extern s32 func_020641c8(u32 a, u32 b, u8 *c);

s32 func_02064e60(u32 p1, u8 *p2, u32 p3, u32 p4)
{
    s32 iVar1;

    iVar1 = func_02064098(1, 2, p3, p4);
    if (iVar1 != 0) {
        return iVar1;
    }
    if (p2 == 0) {
        return 6;
    }
    if (*(u16 *)(p2 + 4) != 0 && *(u32 *)p2 == 0) {
        return 6;
    }
    if (*(u16 *)(p2 + 20) != 0) {
        iVar1 = 42;
    } else {
        iVar1 = 0;
    }
    if (*(u16 *)(p2 + 52) + iVar1 > 512) {
        goto ret6;
    }
    if (*(u16 *)(p2 + 20) != 0) {
        iVar1 = 6;
    } else {
        iVar1 = 0;
    }
    if (*(u16 *)(p2 + 54) + iVar1 <= 512) {
        goto body;
    }
ret6:
    return 6;
body:
    func_02064e10(p2);
    func_0206431c(7, p1);
    func_020800f0((u32)p2, 64);
    if (*(u16 *)(p2 + 4) != 0) {
        func_020800f0(*(u32 *)p2, *(u16 *)(p2 + 4));
    }
    iVar1 = func_020641c8(7, 1, p2);
    if (iVar1 == 0) {
        iVar1 = 2;
    }
    return iVar1;
}
