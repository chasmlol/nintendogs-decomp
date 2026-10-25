#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02152cd8;
extern u32 data_0214f460;
extern u32 data_02159468;

typedef struct { u32 w[3]; } T3;

s32 func_020ab02c(s32 a, s32 *b, s32 *c);
void func_02067e34(s32 *a, s32 *b, s32 *c);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
s32 func_02067df0(s32 *a, s32 *b);
s32 func_02009dfc(s32 *a, s32 *b, s32 *c);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_ov005_0215d198(u8 *p, s32 *a, s32 b);

void func_ov005_0215ced8(u8 *param_1)
{
    s32 blk[3];
    s32 local_34[3];
    s32 local_28[3];
    s32 aiStack_1c[4];
    u8 *o;
    u8 *g;
    u8 *h;
    s32 iVar3;
    s32 uVar2;
    s32 bVar1;

    o = *(u8 **)((u8 *)(*(u32 *)&data_02159444) + 0x1c);
    *(T3 *)blk = *(T3 *)(o + 0x30);
    local_34[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x4c);
    local_34[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x58);
    local_34[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x64);
    func_020ab02c(*(s32 *)&data_0214f460, aiStack_1c, (s32 *)(param_1 + 900));
    func_02067e34(aiStack_1c, (s32 *)(param_1 + 900), aiStack_1c);
    func_01ff832c(0x7000, aiStack_1c, blk, (s32 *)(param_1 + 948));
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + 0x8000;
    uVar2 = func_02067df0(aiStack_1c, local_34);
    if (uVar2 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0x1000;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xf000;
    }
    local_28[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x54);
    local_28[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x60);
    local_28[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x6c);
    g = (u8 *)data_02159444;
    iVar3 = *(s16 *)(g + 0x7a);
    if (iVar3 < 0) goto zi;
    h = (u8 *)data_02159468;
    if (*(s16 *)(h + 0x20) > iVar3) goto nzi;
zi:
    iVar3 = 0;
    goto ji;
nzi:
    iVar3 = *(s32 *)(h + 4 + iVar3 * 4);
ji:
    if (iVar3 == 0) goto Lf;
    if (*(s16 *)((u8 *)iVar3 + 0x96) != 9) goto Lf;
    if (*(s16 *)((u8 *)iVar3 + 0x90) == 3) {
        bVar1 = 1;
        goto Ljoin;
    }
Lf:
    bVar1 = 0;
Ljoin:
    if (bVar1 == 0) goto Lend;
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        iVar3 = func_02009dfc(local_28, (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x18c));
        if (iVar3 == 1) goto c1;
        if (iVar3 != 2) goto els;
        goto c2;
c1:
        func_0203e8cc(param_1, 0, 0x19e);
        goto Lend;
c2:
        func_0203e8cc(param_1, 0, 0x19f);
        goto Lend;
els:
        func_0203e8cc(param_1, 0, 1);
    }
Lend:
    func_ov005_0215d198(param_1, (s32 *)(param_1 + 900), 0x2008);
}
