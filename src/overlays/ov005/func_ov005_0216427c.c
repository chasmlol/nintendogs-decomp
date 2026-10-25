#include "ctx.h"
#pragma opt_propagation off

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct Sub Sub;
struct Sub {
    u8 pad00[0x24];
    u32 e24[3];
    s32 v30[3];
    u32 w3c[9];
};

typedef struct Dog Dog;
struct Dog {
    u8 pad00[0x24];
    s16 t24;
    u8 pad26[6];
    s16 t2c;
    u8 pad2e[2];
    s16 a30[6];
    s16 c3c[6];
    s16 b48[6];
    u8 pad54[12];
    u32 d60[6];
    s16 t78;
    u8 pad7a[10];
    Sub *sub;
    s32 f88;
    s16 t8c;
};

typedef struct Obj Obj;
struct Obj {
    u8 pad00[0x6c];
    s16 x6c;
    s16 x6e;
};

typedef struct { s32 x, y, z; } Vec;
typedef struct { u8 pad[0x1c]; u8 *p; } Hold;
typedef struct { u8 pad[0x4c]; u32 m[9]; } Tab;

extern Dog *data_ov005_02167f04;
extern s16 data_ov005_02167e18[];
extern Hold *data_02159444;
extern Tab data_02152cd8;

extern s32 func_01ffdb08(s32);
extern s32 func_02067898(s32, s32);
extern void func_ov005_02160e78(s32, u32, s32);
extern void func_ov005_021632f4(void);
extern void func_02027f40(s32, s32, s32);
extern void func_ov005_02161608(s32);
extern void func_0209fa4c(void);
extern s32 func_ov005_0215e5d0(s32);
extern void func_ov005_02161598(s32);
extern void func_020a0d58(s32);
extern void func_01ff832c(s32, s32 *, s32 *, s32 *);
extern Obj *func_020bc3c4(void);

void func_ov005_0216427c(void)
{
    s16 i;
    s32 bVar2;
    s32 iVar3;
    s32 iVar6;
    s32 sum;
    u32 uVar5;
    u32 uVar13;
    u32 uVar12;
    u32 uVar11;
    u32 uVar10;
    u32 uVar8;
    u32 uVar7;
    Obj *oQ;
    Obj *oR;
    u32 *pW;
    Sub *pS;
    Vec pos;
    Vec z;

    iVar3 = func_01ffdb08(data_ov005_02167f04->t24);
    if (iVar3 == 0) {
        return;
    }
    bVar2 = 0;
    i = 0;
    do {
        iVar6 = func_02067898(((s32)data_ov005_02167f04->a30[i] + (s32)data_ov005_02167f04->b48[i]) << 12,
                              ((s32)data_ov005_02167e18[i] * 100) << 12);
        func_ov005_02160e78(i, data_ov005_02167f04->d60[i], iVar6);
        if (data_ov005_02167f04->d60[i] != 0) {
            bVar2 = 1;
        }
        i++;
    } while (i < 6);
    func_ov005_021632f4();
    data_ov005_02167f04->t2c = 0;
    {
        s16 q = 0;
        do {
            data_ov005_02167f04->t2c += data_ov005_02167f04->a30[q];
            data_ov005_02167f04->t2c += data_ov005_02167f04->b48[q];
            q++;
        } while (q < 6);
    }
    func_02027f40(iVar3, 7, data_ov005_02167f04->t2c);
    {
        s16 j = 0;
        Dog *pP = data_ov005_02167f04;
        do {
            if (pP->a30[j] < pP->c3c[j]) {
                break;
            }
            j++;
        } while (j < 6);
        if (pP->f88 != 0 && pP->t8c > 0) {
            pP->t8c = pP->t8c - 1;
        }
    }
    if (data_ov005_02167f04->t2c < 0x2329 || bVar2) {
        goto CALL0;
    }
    func_ov005_02161608(1);
    if (data_ov005_02167f04->f88 == 0) {
        data_ov005_02167f04->f88 = 1;
        { Dog *pd = data_ov005_02167f04; pd->t8c = 0xb4; }
        func_0209fa4c();
    }
    goto DONE1;
CALL0:
    func_ov005_02161608(0);
DONE1:
    sum = 0;
    {
        s16 k = 0;
        do {
            sum += data_ov005_02167f04->d60[k];
            k++;
        } while (k < 6);
    }
    if (func_ov005_0215e5d0(iVar3)) {
        data_ov005_02167f04->t78 = data_ov005_02167f04->t78 + 1;
    } else {
        data_ov005_02167f04->t78 = 0;
    }
    if (data_ov005_02167f04->t78 <= 0x13) {
        goto T0;
    }
    if (data_ov005_02167f04->t78 >= 0x45) {
        goto T0;
    }
    if (sum >= 0x1000) {
        goto T0;
    }
    func_ov005_02161598(1);
    func_020a0d58(1);
    goto AFTER;
T0:
    func_ov005_02161598(0);
AFTER:
    pos = *(Vec *)(data_02159444->p + 0x30);
    z.x = data_02152cd8.m[2];
    z.y = data_02152cd8.m[5];
    z.z = data_02152cd8.m[8];
    uVar11 = data_02152cd8.m[6];
    uVar12 = data_02152cd8.m[3];
    uVar13 = data_02152cd8.m[0];
    uVar7 = data_02152cd8.m[7];
    uVar8 = data_02152cd8.m[4];
    uVar10 = data_02152cd8.m[1];
    func_01ff832c(-0x2000, &z.x, &pos.x, data_ov005_02167f04->sub->v30);
    pS = data_ov005_02167f04->sub;
    pS->w3c[0] = uVar13;
    pW = pS->w3c;
    pW[1] = uVar12;
    pW[2] = uVar11;
    pW[3] = uVar10;
    pW[4] = uVar8;
    pW[5] = uVar7;
    pW[6] = z.x;
    pW[7] = z.y;
    pW[8] = z.z;
    oQ = func_020bc3c4();
    oR = func_020bc3c4();
    uVar5 = (u32)FX_Mul(func_02067898(oQ->x6c, oR->x6e), 0xd72);
    pS = data_ov005_02167f04->sub;
    pS->e24[0] = uVar5;
    pW = pS->e24;
    pW[1] = uVar5;
    pW[2] = uVar5;
}
