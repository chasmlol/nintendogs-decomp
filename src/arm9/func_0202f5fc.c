#include "ctx.h"

typedef struct Tri { u32 a; u32 b; u32 c; } Tri;

extern u8 data_02152cd8[];
extern u8 *data_0214f464;
extern u32 data_0214f460;
extern u8 *data_02159444;
extern void func_01ff8980(u8 *p);
extern void func_01ff832c(s32 v, void *a, u8 *b, u8 *c);
extern void func_02037450(u8 *p, s32 v);

void func_0202f5fc(s32 param_1)
{
    u8 *iVar3;
    Tri local_20;
    Tri local_14;

    local_20.a = *(u32 *)(data_02152cd8 + 0x4c);
    local_20.b = *(u32 *)(data_02152cd8 + 0x58);
    local_20.c = *(u32 *)(data_02152cd8 + 0x64);
    if (*(u32 *)(data_0214f464 + 0x64) == 0) {
        *(u32 *)(data_0214f464 + 0x64) = data_0214f460;
        iVar3 = *(u8 **)(data_02159444 + 0x1c);
        *(Tri *)(data_0214f464 + 0x68) = *(Tri *)(iVar3 + 0x48);
        func_01ff8980(data_0214f464 + 0x68);
    }
    local_14 = *(Tri *)(data_0214f464 + 0x68);
    func_01ff832c(-0x5000, &local_20, (u8 *)param_1 + 0x2a0, (u8 *)param_1 + 0x278);
    func_01ff832c(-0x3000, &local_14, (u8 *)param_1 + 0x278, (u8 *)param_1 + 0x278);
    *(Tri *)((u8 *)param_1 + 0x26c) = *(Tri *)((u8 *)param_1 + 0x2a0);
    func_02037450((u8 *)param_1, 0x200);
}
