#include "ctx.h"

extern s32 func_020bc5d8(void);
extern s32 func_020bd170(s32 a);
extern s32 func_020bc478(s32 a, s32 b, s32 c);
extern s32 func_020bd158(s32 a);

void func_020aabec(u8 *param_1)
{
    s32 r8;
    s32 iVar4;
    s32 iVar3;
    s32 uVar2;
    r8 = *(s16 *)(param_1 + 0x7c);
    if (*(u16 *)(param_1 + 0x78) == 0) {
        return;
    }
    if (func_020bc5d8() == 0) {
        return;
    }
    uVar2 = func_020bd170(*(s16 *)(param_1 + 0x7c));
    switch (uVar2) {
    case 0:
        r8 = func_020bc478(0, r8, 2);
        *(s16 *)(param_1 + 0x7a) = (s16)r8;
        break;
    case 1:
        r8 = func_020bc478(0, r8, 1);
        *(s16 *)(param_1 + 0x7a) = (s16)r8;
        break;
    case 2:
        iVar4 = 0;
        *(u16 *)(param_1 + 0x7a) = 0;
        iVar3 = func_020bd158(r8);
        if (iVar3 > 0) {
            do {
                func_020bc478(0, r8, 2);
                iVar4 = iVar4 + 1;
                iVar3 = func_020bd158(r8);
            } while (iVar4 < iVar3);
        }
        break;
    case 3:
        r8 = func_020bc478(0, r8, 1);
        *(s16 *)(param_1 + 0x7a) = (s16)r8;
        break;
    }
    *(u16 *)(param_1 + 0x78) = 0;
}
