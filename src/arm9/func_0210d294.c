#include "ctx.h"

typedef struct {
    u8 pad0[8];
    s32 n8;
    u16 *src;
} Sub;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u8 pad0c[0x18 - 0x0c];
    u32 w18;
    u32 w1c;
    u16 h20;
    u16 h22;
    u16 h24;
    u8 pad26[0x30 - 0x26];
    u16 cnt;
    u16 h32;
    u8 pad34[0x38 - 0x34];
    u8 buf38[40];
    u8 pad60[0x86c - 0x60];
    u32 w86c;
    u32 w870;
    u32 bound;
    u16 h878;
    u16 h87a;
    u8 pad87c[0x880 - 0x87c];
    u16 div;
    s16 o882;
    s16 o884;
    u16 z886;
    u8 pad888[0x1c5c - 0x888];
    Sub sub;
} Obj;

extern u16 data_021483d8[];
extern u8 *data_0215be48;

extern void func_0206c7bc(u16 a, void *b, s32 c);
extern void func_0210ea40(s32 a, u16 *b, s32 c);
extern void func_02109238(void);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_0210d690(Obj *p);
extern void func_0210d860(Obj *p, s32 a, s32 b);
extern s32 func_02112e34(s32 a);
extern s32 func_02112e54(s32 a);
extern s32 func_02101894(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_02101be4(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_021128a8(s32 a, s32 b, s32 c);
extern void func_0210d080(Obj *p);
extern void func_021129b4(s32 a, s32 b, s32 c, s32 d);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern s32 func_0205e270(s32 a, s32 b);

void func_0210d294(Obj *p)
{
    Sub *pB;
    u16 *src;
    s32 iVar3;
    s32 iVar6;
    s32 iVar9;
    s32 iVar4;
    u32 uVar8;
    vu16 zero;

    p->w4 = 0;
    p->w8 = 0;
    p->h32 = 0;
    p->w0 = 0;
    zero = 0;
    pB = &p->sub;
    func_0206c7bc(zero, p->buf38, 40);
    p->w86c = 0;
    p->w870 = 0;
    p->h20 = 8;
    p->h22 = 7;
    p->h24 = 10;
    p->bound = 27;
    p->z886 = 0;
    p->cnt = 0;
    data_021483d8[0] = 0;
    func_0210ea40(8, data_021483d8, 0);
    func_02109238();
    func_020fc8b0(2, 0, 0);
    func_0210d690(p);
    func_0210d860(p, *(s32 *)(data_0215be48 + 0x1d20), 0);
    src = pB->src;
    if (src != 0) {
        iVar6 = 0;
        for (; (*src != 0 && (iVar6 < (s32)p->bound - 1)); ) {
            data_021483d8[iVar6] = *src;
            iVar6++;
            src++;
        }
        data_021483d8[iVar6] = 0;
        p->cnt = iVar6;
        func_0210d080(p);
    }
    iVar6 = func_02112e34(2);
    iVar3 = func_02112e54(2);
    iVar9 = *(s32 *)(data_0215be48 + 0x4844);
    p->w18 = func_02101894(0, iVar6, iVar3, p->h20, iVar9);
    func_02101be4(p->w18, 0);
    func_021017d4(0, p->w18, 14);
    p->w1c = func_02101894(0, iVar6, iVar3, p->h22, iVar9);
    func_02101be4(p->w1c, 0);
    func_021017d4(0, p->w1c, 14);
    iVar6 = pB->n8;
    func_02112798(2, 5, iVar6);
    func_02112798(2, 7, iVar6);
    func_02112798(2, 6, iVar6);
    func_02112798(2, 8, iVar6);
    func_02112798(2, 9, (u32)(iVar6 == 0));
    func_02112798(2, 10, (u32)(iVar6 == 0));
    func_021128a8(2, 5, 0);
    func_021128a8(2, 6, 0);
    func_021128a8(2, 9, 0);
    uVar8 = p->cnt;
    if ((s32)uVar8 >= (s32)(p->bound - 2)) {
        uVar8 = p->bound - 2;
    }
    iVar4 = p->div;
    p->o882 = (s16)(p->h878 * 8 + (((u32)(((s32)uVar8 % (s32)iVar4) << 16)) >> 12));
    p->o884 = (s16)(p->h87a * 8 + (((u32)(((s32)uVar8 / (s32)iVar4) << 16)) >> 12) + 3);
    func_021129b4(2, 14, 0, 0);
    func_02112978(2, 14, p->o882, p->o884);
}
