#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_02152cd8;
extern u32 data_0214f460;
extern u32 data_02159444;
extern u32 func_020ab02c(u32 a, u32 *b, u8 *c);
extern void func_02067e34(u32 *a, u8 *b, u32 *c);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u8 *d);
extern s32 func_02067df0(u32 *a, u32 *b);
extern void func_ov003_0218ab10(u8 *p, u32 a, u32 b, u8 *c, u32 d, u32 e);

void func_ov003_02189d10(u8 *param_1)
{
    u32 local_30[3];
    u32 aiStack_24[3];
    u32 local_18[3];
    u8 *iVar1;
    u32 *q;
    s32 uVar2;
    local_30[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    local_30[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    local_30[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    func_020ab02c(data_0214f460, aiStack_24, param_1 + 0x2c4);
    func_02067e34(aiStack_24, param_1 + 0x2c4, aiStack_24);
    iVar1 = *(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c);
    *(T12 *)local_18 = *(T12 *)(iVar1 + 0x30);
    func_01ff832c(0x3000, aiStack_24, local_18, param_1 + 0x3b4);
    *(u32 *)(param_1 + 0x3b8) = *(u32 *)(param_1 + 0x3b8) + 0xa000;
    uVar2 = func_02067df0(aiStack_24, local_30);
    if (uVar2 > 0) {
        *(u16 *)(param_1 + 256 + 46) = 0x1000;
    } else {
        *(u16 *)(param_1 + 256 + 46) = 0xf000;
    }
    func_ov003_0218ab10(param_1, 4, 0x1f, param_1 + 0x348, 0x14d2, 2);
}
