#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u32 a; u16 b; u16 c; } Out;

void func_02087008(void *a, void *b, u32 n);

u32 func_02086e68(u8 *param_1)
{
    Out out;
    u8 *iVar1;
    u8 *q;
    u32 local_18;
    vu32 local_14;

    iVar1 = *(u8 **)(param_1 + 8);
    q = param_1 + 0x2c;
    local_18 = (u32)iVar1;
    local_14 = *(u32 *)(iVar1 + 0x28) + *(u16 *)(q + 4) * 8;
    func_02087008(&local_18, &out, 8);
    *(T3 *)(param_1 + 0x1c) = *(T3 *)q;
    if (*(u16 *)(q + 6) == 0 && *(u32 *)(q + 8) == 0) {
        *(u16 *)(param_1 + 0x22) = out.b;
        *(u32 *)(param_1 + 0x24) = *(u32 *)(iVar1 + 0x28) + out.a;
    }
    *(u32 *)(param_1 + 0x28) = out.c & 0xfff;
    return 0;
}
