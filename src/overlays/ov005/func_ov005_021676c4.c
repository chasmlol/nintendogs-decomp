#pragma avoid_byte strb
#include "ctx.h"

typedef struct Rec { s32 w0, w4, w8, wc; } Rec;
typedef struct Sh { s16 v0; } Sh;
typedef struct Glob { u8 _0[0x214]; Sh *x214; } Glob;
typedef struct Obj {
    u8 _00[0x18];
    Rec **f18;
    u32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    u8 _2c[0x44 - 0x2c];
    s32 f44;
    u8 _48[0x4c - 0x48];
    s32 f4c;
    u8 _50[0x54 - 0x50];
    s32 f54;
    u8 _58[0x5c - 0x58];
    u8 b5c;
} Obj;

extern s32 data_ov005_02167f0c;
s32 func_01ffdb08(s32 a);
s32 func_ov005_02160af4(s32 a);
s32 func_02027f78(s32 a, s32 b);
void func_ov005_02167268(s32 a, s32 *b);
u32 func_02028130(s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov005_021676c4(Obj *p)
{
    s32 blk[3];
    s32 iVar3;
    s32 iVar6 = data_ov005_02167f0c;
    s32 iVar2 = func_01ffdb08((s32)((Glob *)iVar6)->x214->v0);

    if (iVar2 == 0) goto early;
    iVar3 = func_ov005_02160af4(iVar2);
    if (iVar3 == 0) goto early;
    iVar3 = func_02027f78(iVar2, 7);
    func_ov005_02167268(iVar6, blk);
    p->f20 = blk[0] + (*p->f18)->w4;
    p->f24 = blk[1] + (*p->f18)->w8;
    p->f28 = blk[2] + (*p->f18)->wc;
    p->f54 = (s16)func_02028130(iVar2);
    p->f44 = FX_Mul((s32)func_02028130(iVar2), 1024);
    p->f4c = (s16)FX_Mul((s32)func_02028130(iVar2), 41);
    if (iVar3 >= 6000) {
        p->f1c |= 2;
        return;
    }
    if (iVar3 >= 1500) {
        p->f1c &= ~2;
        p->b5c = (u8)(((iVar3 - 1500) * 35) / 4500 + 5);
        return;
    }
    p->f1c &= ~2;
    p->b5c = 5;
    return;
early:
    p->f1c |= 2;
}
