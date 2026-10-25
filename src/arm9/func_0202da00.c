#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_020bc14c(void);
extern void func_020bbe14(u32 a, s32 b);
extern u8 *func_020bc3c4(void);

void func_0202da00(u8 *param_1, u32 param_2)
{
    s32 v5;
    s32 cVar1;
    u8 *q;
    v5 = 1;
    cVar1 = (s8)param_1[136];
    if (cVar1 != func_020bc14c()) {
        if (cVar1 != (s8)(*(u8 **)&data_0214f464)[7]) {
            v5 = 0;
        }
    }
    if (v5 == 0) {
        return;
    }
    switch (param_2) {
    case 1:
        goto C1;
    case 2:
        goto C2;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        goto C4;
    default:
        goto CD;
    }
CD:
    func_020bbe14(5, cVar1);
    goto TAIL;
C1:
    if (*(u16 *)(param_1 + 242) == 28) {
        func_020bbe14(11, cVar1);
    } else {
        func_020bbe14(7, cVar1);
    }
    goto TAIL;
C2:
    func_020bbe14(9, cVar1);
    goto TAIL;
C4:
    func_020bbe14(13, cVar1);
TAIL:
    if ((s8)param_1[136] == (s8)(*(u8 **)&data_0214f464)[7]) {
        q = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 1;
        return;
    }
    q = (u8 *)func_020bc3c4() + 136;
    *(u32 *)(q + 0x6c) = 0;
}
