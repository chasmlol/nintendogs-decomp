#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r);
extern u64 func_0207f554(u8 *a);

BOOL func_02087328(u8 *param_1)
{
    u32 flagB;
    u32 flagA;
    u32 bVar2;
    u32 r5;
    u8 *q;

    r5 = func_02080b08();
    flagA = (*(u32 *)(param_1 + 0x10) & 8) != 0;
    bVar2 = (flagA == 0) ? 1 : 0;
    if (bVar2 == 0) goto END;
    flagB = (*(vu32 *)(param_1 + 0x10) & 0x10) != 0;
    if (flagB == 0) goto S8;
    *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x10) | 0x40;

    do {
        (void)func_0207f554(param_1 + 14);
        flagB = (*(vu32 *)(param_1 + 0x10) & 0x40) != 0;
    } while (flagB != 0);
    goto END;
S8:
    *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x10) | 8;
END:
    func_02080b1c(r5);
    return bVar2;
}
