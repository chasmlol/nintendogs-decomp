#include "ctx.h"

extern u32 func_02080b08(void);
extern u64 func_02080b1c(u32 s);
extern s32 *func_02087ad0(u8 *p);
extern void func_02087a2c(s32 *a, u32 b);

u32 func_020872ac(u8 *param_1)
{
    u32 bVar2;
    u32 t;
    s32 *piVar1;
    u64 r;
    u32 s;

    piVar1 = NULL;
    s = func_02080b08();
    t = (*(u32 *)(param_1 + 0x10) & 8) ? 1 : (u32)piVar1;
    bVar2 = (t == 0);
    if (!bVar2) {
        *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x10) & 0xfffffff7;
        piVar1 = func_02087ad0(param_1);
    }
    r = func_02080b1c(s);
    if (piVar1 != NULL) {
        func_02087a2c(piVar1, (u32)(r >> 32));
    }
    return bVar2;
}
