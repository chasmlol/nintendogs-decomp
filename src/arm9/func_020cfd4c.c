#include "ctx.h"

extern s32 data_02142e6c;
extern u8 *data_021594a8;
extern u8 data_02142e74[];
extern s32 data_02142e70;
extern s32 data_021594a4;
extern u8 data_021594ac[];

s32 func_020d144c(u32 *a, u8 *b, s32 c);
s32 func_020d12e8(u32 *a, s32 b, u8 *c, s32 d);
void func_020d13a4(u32 *a, s32 b, u8 *c, s32 d);
s32 func_020d1244(u32 *a, s32 b);
void func_020d14ac(u32 *a, s32 b, u8 *c);
void func_020d14e8(u32 *a, s32 b, u32 *c);
void func_020d04a8(u8 *a, u8 *b);
s32 func_020d10dc(u8 *a);
s32 func_020d10b4(u8 *a);
s32 func_020d1174(u8 *a);
s32 func_020d1110(u8 *a);
s32 func_020d11dc(u8 *a);
void func_020d11e4(u8 *a, s32 b);
void func_020d1214(u8 *a);
void func_020d11ec(u8 *a);
void func_020d0858(u8 *a);
void func_020d0824(u8 *a, u8 *b);
void func_020d075c(u8 *a, s32 b);
void func_020d0118(u8 *a, s32 b);

typedef struct {
    u32 a[10];
    s32 x;
} Blk;

void func_020cfd4c(s32 param_1, s32 param_2)
{
    Blk s1;
    Blk s2;
    Blk s3;
    s32 iVar3;
    s32 bVar4;
    u8 *Pl;
    u32 *Q;
    s32 vv;

    bVar4 = 0;
    switch (data_02142e6c) {
    case -1:
    case 6:
        break;
    case 0:
        iVar3 = func_020d144c(*(u32 **)(data_021594a8 + 0x38), data_02142e74, 128);
        if (iVar3 != 0) {
            *(s32 *)(data_021594a8 + 8) = **(s32 **)data_021594a8 - 1;
        }
        break;
    case 1:
        Pl = data_021594a8;
        Q = *(u32 **)(Pl + 0x38);
        vv = *(s32 *)(Pl + 8);
        if ((s32)*Q > 0) {
            iVar3 = func_020d12e8(Q, vv, data_02142e74, 128);
            if (iVar3 != 0) {
                func_020d10dc(data_021594a8);
            }
        }
        break;
    case 2:
        Pl = data_021594a8;
        Q = *(u32 **)(Pl + 0x38);
        vv = *(s32 *)(Pl + 8);
        if ((s32)*Q > 0) {
            func_020d13a4(Q, vv, data_02142e74, 128);
        }
        break;
    case 3:
        Pl = data_021594a8;
        iVar3 = func_020d1244(*(u32 **)(Pl + 0x38), *(s32 *)(Pl + 8));
        if (iVar3 != 0) {
            func_020d10b4(data_021594a8);
            bVar4 = 1;
        }
        break;
    case 4:
        Pl = data_021594a8;
        Q = *(u32 **)(Pl + 0x38);
        vv = *(s32 *)(Pl + 8);
        if ((s32)*Q > 0) {
            func_020d14ac(Q, vv, data_02142e74);
        }
        break;
    case 5:
        if (data_02142e70 == 1) {
            data_02142e70 = 0;
        } else {
            data_02142e70 = 1;
        }
        break;
    case 7:
        if (data_021594a4 == 1) {
            data_021594a4 = 0;
            Pl = data_021594a8;
            func_020d14e8(*(u32 **)(Pl + 0x38), *(s32 *)(Pl + 8), s1.a);
            *(s32 *)(data_02142e74 + 0x28) = s1.x;
            func_020d04a8(data_02142e74, data_021594ac);
        } else {
            data_021594a4 = 1;
        }
        break;
    case 8:
        func_020d1214(data_021594a8);
        bVar4 = 1;
        break;
    case 9:
        func_020d11ec(data_021594a8);
        bVar4 = 1;
        break;
    case 10:
        iVar3 = func_020d10dc(data_021594a8);
        bVar4 = iVar3 != 0;
        break;
    case 11:
        iVar3 = func_020d10b4(data_021594a8);
        bVar4 = iVar3 != 0;
        break;
    case 12:
        iVar3 = func_020d1174(data_021594a8);
        bVar4 = iVar3 != 0;
        break;
    case 13:
        iVar3 = func_020d1110(data_021594a8);
        bVar4 = iVar3 != 0;
        break;
    case 14:
        iVar3 = func_020d11dc(data_021594a8);
        if (iVar3 == 0) {
            func_020d11e4(data_021594a8, 3);
        } else {
            func_020d11e4(data_021594a8, 0);
        }
        bVar4 = 1;
        break;
    }
    data_02142e6c = -1;
    if (bVar4 != 0) {
        func_020d0858(data_021594a8);
        func_020d0824(data_021594a8, data_02142e74);
        func_020d075c(data_02142e74, param_2);
        func_020d14e8(*(u32 **)(data_021594a8 + 0x38), *(s32 *)(data_021594a8 + 8), s2.a);
        *(s32 *)(data_02142e74 + 0x28) = s2.x;
        func_020d04a8(data_02142e74, data_021594ac);
    }
    if (data_021594a4 != 0) {
        iVar3 = func_020d1174(data_021594a8);
        if (iVar3 != 0) {
            func_020d0858(data_021594a8);
            func_020d0824(data_021594a8, data_02142e74);
            func_020d075c(data_02142e74, param_2);
            return;
        }
        data_021594a4 = 0;
        func_020d14e8(*(u32 **)(data_021594a8 + 0x38), *(s32 *)(data_021594a8 + 8), s3.a);
        *(s32 *)(data_02142e74 + 0x28) = s3.x;
        func_020d04a8(data_02142e74, data_021594ac);
        return;
    }
    func_020d0118(data_021594a8, param_2);
}
