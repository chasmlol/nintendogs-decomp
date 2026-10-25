#include "ctx.h"

extern s32 func_01ffdb08(s32);
extern void func_02027178(s32, s32 *, s32);
extern s32 func_02034fc4(s32);
extern void func_020be9b4(u8 *);
extern void func_020bec34(u8 *, s32 *);
extern s32 func_020341e4(s32);
extern void func_020beec0(u8 *, s32, s32 *);
extern void func_01ff810c(void *, s32 *, u32 *);
extern void func_02028198(s32);

typedef struct { s32 v[3]; } T3;

void func_020be7b8(u8 *p)
{
    s32 st[3];
    u32 a[12];
    s32 iVar1, iVar3;
    u32 uVar2, uVar4;
    s32 b;

    iVar1 = func_01ffdb08(*(s16 *)(p + 0x98));
    if (iVar1 == 0) {
        return;
    }
    func_02027178(iVar1, (s32 *)a, 12);
    uVar2 = func_02034fc4(iVar1);
    switch (uVar2) {
    case 0:
        break;
    case 1:
        break;
    case 3:
        func_020be9b4(p);
        return;
    case 2:
        func_020bec34(p, st);
        if (*(s32 *)(p + 0x164) != 0 && (uVar4 = func_020341e4(iVar1)) != 0) {
            *(u16 *)(p + 0x162) = 6;
        }
        *(s32 *)(p + 0x164) = 0;
        goto LAB_020be8b0;
    }
    iVar3 = func_01ffdb08(*(s16 *)(p + 0x98));
    func_020beec0(p, iVar3, st);
    func_01ff810c(p + 0x130, (s32 *)a, (u32 *)(p + 200));
    if (*(s32 *)(p + 0x164) == 0 && (uVar4 = func_020341e4(iVar1)) != 0) {
        *(u16 *)(p + 0x162) = 6;
    }
    *(s32 *)(p + 0x164) = 1;
LAB_020be8b0:
    if (0 < *(s16 *)(p + 0x162)) {
        *(s16 *)(p + 0x162) = *(s16 *)(p + 0x162) - 1;
        b = *(s32 *)(p + 0x170);
        *(s32 *)(p + 0xbc) = b + (s32)((((s64)(st[0] - b) * 1024) + 0x800) >> 12);
        b = *(s32 *)(p + 0x174);
        *(s32 *)(p + 0xc0) = b + (s32)((((s64)(st[1] - b) * 1024) + 0x800) >> 12);
        b = *(s32 *)(p + 0x178);
        *(s32 *)(p + 0xc4) = b + (s32)((((s64)(st[2] - b) * 1024) + 0x800) >> 12);
        return;
    }
    *(T3 *)(p + 0xbc) = *(T3 *)st;
    if (*(s32 *)(p + 0x188) != 0) {
        return;
    }
    func_02028198(iVar1);
    *(s32 *)(p + 0x188) = 1;
}
