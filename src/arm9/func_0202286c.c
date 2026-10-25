#include "ctx.h"

typedef struct Tri { s32 a; s32 b; s32 c; } Tri;

extern u32 data_0213b4d8[];
extern u32 data_02152cd8[];
extern void func_02022910(s32 *a, Tri *b);
extern void func_01ff832c(u32 v, u32 *a, s32 *b, s32 *c);

void func_0202286c(u8 *param_1, s32 *param_2, s32 *param_3)
{
    u32 local_30[3];
    Tri local_24;
    u32 uVar1;
    u64 f;

    local_24 = *(Tri *)data_0213b4d8;
    func_02022910(param_2, &local_24);
    local_30[0] = *(u32 *)((u8 *)data_02152cd8 + 0x50);
    local_30[1] = *(u32 *)((u8 *)data_02152cd8 + 0x5c);
    local_30[2] = *(u32 *)((u8 *)data_02152cd8 + 0x68);
    uVar1 = *(u32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    f = (u64)(s64)(s32)uVar1 * (s64)-164 + 0x800;
    func_01ff832c((u32)(f >> 12), local_30, param_2, param_3);
}
