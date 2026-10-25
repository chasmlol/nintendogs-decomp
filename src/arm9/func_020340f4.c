#include "ctx.h"

extern u8 *data_0214f460;
extern void func_020aad40(u8 *a, s32 b);
extern s32 func_020bc130(void);
extern s32 func_020aaeb8(u8 *a, s32 b);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);

void func_020340f4(u8 *param_1)
{
    s32 iVar3;
    s32 bVar1;
    s32 iVar4;
    u8 *q;

    func_020aad40(data_0214f460, (s32)*(s8 *)(param_1 + 0x88));
    if (func_020bc130() == 0) {
        return;
    }
    bVar1 = 1;
    iVar3 = 0;
    do {
        iVar4 = func_020aaeb8(data_0214f460, iVar3);
        if (iVar4 != -1) {
            bVar1 = 0;
            break;
        }
        iVar3 = (s8)(iVar3 + 1);
    } while (iVar3 < 3);
    if (bVar1 != 0) {
        func_020bbe14(1, -1);
        q = (u8 *)((u32)func_020bc3c4() + 136);
        *(vu32 *)(q + 0x6c) = 0;
    }
}
