#pragma avoid_byte strb
#include "ctx.h"

extern int data_02159028;
extern u32 func_020038b8(int *a, int b);

static inline void SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
}

void func_0208e2e4(int *param_1, int param_2)
{
    int iVar4;
    int iVar3;
    u32 uVar2;
    u8 *puVar5;

    *(int *)(data_02159028 + 4) = param_2;
    uVar2 = func_020038b8(param_1, param_2 << 2);
    iVar4 = 0;
    *(u32 *)(data_02159028 + 8) = uVar2;
    if (0 < param_2) {
        iVar3 = 0;
        do {
            iVar4 = iVar4 + 1;
            puVar5 = (u8 *)(*(int *)(data_02159028 + 8) + iVar3);
            SwapByte(0xff, puVar5);
            SwapByte(0, puVar5 + 1);
            SwapByte(0, puVar5 + 2);
            SwapByte(0, puVar5 + 3);
            iVar3 = iVar3 + 4;
        } while (iVar4 < param_2);
    }
}
