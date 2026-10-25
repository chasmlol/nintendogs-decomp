#include "ctx.h"
extern u8 data_02152cd8[];
extern u8 data_0214f460[];
extern u8 data_02159444[];
extern void func_020ab02c(u8 *a, u32 *b, u32 *c);
extern void func_02067e34(u32 *a, u32 *b, u32 *c);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern s32 func_02067df0(u32 *a, s32 *b);
extern void func_ov003_0218ab10(u8 *p, u32 a, u32 b, u32 *c, u32 d, u32 e);
typedef struct { u32 w[3]; } T3;
typedef struct {
    s32 l30;
    u32 l2c;
    u32 l28;
    u32 ai[3];
    u32 blk[3];
} Fr;
void func_ov003_02189e00(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;
    Fr f;
    f.l30 = *(s32 *)(data_02152cd8 + 0x4c);
    f.l2c = *(u32 *)(data_02152cd8 + 0x58);
    f.l28 = *(u32 *)(data_02152cd8 + 0x64);
    func_020ab02c(*(u8 **)data_0214f460, f.ai, (u32 *)(param_1 + 0x2c4));
    func_02067e34(f.ai, (u32 *)(param_1 + 0x2c4), f.ai);
    iVar1 = *(s32 *)(*(u8 **)data_02159444 + 0x1c);
    *(T3 *)f.blk = *(T3 *)(iVar1 + 0x30);
    func_01ff832c(0x3000, f.ai, f.blk, (u32 *)(param_1 + 0x3b4));
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + 0xa000;
    uVar2 = (u32)func_02067df0(f.ai, &f.l30);
    if ((s32)uVar2 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0x1000;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xf000;
    }
    func_ov003_0218ab10(param_1, 3, 0x1f, (u32 *)(param_1 + 0x348), 0x14d2, 2);
}
