#include "ctx.h"

extern u32 data_ov028_0215df90;
extern void func_ov028_0215d5b4(void);
extern void func_020d5cc8(void);
extern u32 func_020d6ca4(void);
extern void func_020d671c(u32 a, u8 *b);

#define GS(off) (*(u8 **)&data_ov028_0215df90 + (off))

void func_ov028_0215dbe4(void)
{
    u32 uVar2;
    s32 iVar3;
    u8 auStack_8[4];

    if (*(u32 *)GS(0x28) != 0) {
        *(u32 *)GS(0x28) = 0;
        *(u16 *)GS(0x24) = 0;
        *(u16 *)GS(0x26) = 0;
    }
    switch (*(u32 *)GS(0x1c)) {
    case 0:
    case 1:
        goto tail;
    case 2:
        goto second;
    case 3:
        func_020d5cc8();
        uVar2 = func_020d6ca4();
        switch (uVar2) {
        case 0:
        case 1:
        case 2:
        case 3:
            goto tail;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            break;
        default:
            goto tail;
        }
        *(u32 *)GS(0x1c) = 3;
        *(u32 *)GS(0x20) = 1;
        if (*(s16 *)GS(0x2c) == 0) {
            *(u16 *)GS(0x2c) = 1;
        }
        goto tail;
    default:
        goto tail;
    }
second:
    func_020d5cc8();
    uVar2 = func_020d6ca4();
    switch (uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
        goto tail;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        break;
    default:
        goto tail;
    }
    *(u32 *)GS(0x1c) = 3;
    *(u32 *)GS(0x20) = 1;
    if (*(s16 *)GS(0x2c) == 0) {
        *(u16 *)GS(0x2c) = 1;
    }
tail:
    if (*(int *)GS(0x1c) != 1) {
        return;
    }
    *(u32 *)GS(0x1c) = 0;
    func_020d671c((u32)func_ov028_0215d5b4, auStack_8);
}
