#include "ctx.h"

extern u32 func_020038b8(int *a, int b);
extern int func_ov019_0215ccd8(int p);

#define OBJ(p) (*(u8 * volatile *)((u8 *)(p) + 0xac))

void func_ov019_0215ecfc(int param_1, int *param_2)
{
    s32 iVar3;
    u32 uVar2;
    int iVar1;
    u8 *b;

    uVar2 = func_020038b8(param_2, 0x3c);
    *(u32 *)(param_1 + 0xac) = uVar2;
    b = OBJ(param_1);
    if (b != 0) {
        iVar3 = 0;
        *(u32 *)b = iVar3;
        *(u16 *)(OBJ(param_1) + 4) = iVar3;
        *(u16 *)(OBJ(param_1) + 6) = iVar3;
        do {
            ((s16 *)(OBJ(param_1) + 8))[iVar3] = -1;
            iVar3 = (s16)(iVar3 + 1);
        } while (iVar3 < 8);
        b = OBJ(param_1);
        *(u32 *)(b + 0x18) = 0;
        b = (u8 *)((u32)b + 24);
        *(u32 *)(b + 4) = 0;
        *(u32 *)(b + 8) = 0;
        b = OBJ(param_1);
        *(u32 *)(b + 0x24) = 0;
        b = (u8 *)((u32)b + 36);
        *(u32 *)(b + 4) = 0;
        *(u32 *)(b + 8) = 0;
        b = OBJ(param_1);
        *(u32 *)(b + 0x30) = 0;
        b = (u8 *)((u32)b + 48);
        *(u32 *)(b + 4) = 0;
        *(u32 *)(b + 8) = 0;
    }
    iVar3 = func_ov019_0215ccd8(param_1);
    if (iVar3 != 0) {
        *(u32 *)(iVar3 + 0x24) = 0x200;
        *(u32 *)(iVar3 + 0x28) = 0x400;
        *(u32 *)(iVar3 + 0x2c) = 0x80;
        return;
    }
}
