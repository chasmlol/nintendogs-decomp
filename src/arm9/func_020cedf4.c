#include "ctx.h"

typedef struct { s32 w[10]; } W10;

extern s32 *data_02159444;
extern s32 *data_02159468;
extern u8 data_02136984[];
extern void func_020d1888(s32 *p);
extern void func_020db120(s32 *p);
extern void func_020d26e4(s32 *p);
extern void func_020d8594(s32 *p);
extern void func_020d8560(s32 *p);
extern void func_020d847c(s32 *p);
extern void func_020d843c(s32 *p);
extern void func_020d89e8(s32 *p);
extern void func_020d1524(s32 *p);
extern void func_020db07c(s32 *p);
extern void func_020d25c0(s32 *p);
extern void func_020d8590(s32 *p);
extern void func_020d84c0(s32 *p);
extern void func_020d8478(s32 *p);
extern void func_020d8338(s32 *p);
extern void func_020d85bc(s32 *p);
extern void func_020bdeec(void);
extern void func_020ca1a4(void);
extern void func_020ca628(void);
extern void func_020be1b8(s32 *p);
extern s32 func_020bc3c4(void);
extern s32 func_020bc14c(void);
extern void func_020cd4d8(s32 *a, s32 *b, s32 c);
extern void func_020cce1c(s32 *a, s32 *b, s32 c, s32 d);
extern void func_020ccd5c(s32 *a, s32 *b, s32 c);
extern void func_020ccb38(s32 *a, s32 *b, s32 c);
extern void func_020cc914(s32 *a, s32 *b, s32 c);
extern void func_020cc6f0(s32 *a, s32 *b, s32 c);
extern void func_020cc4cc(s32 *a, s32 *b, s32 c);
extern void func_020cc2a8(s32 *a, s32 *b, s32 c);
extern void func_020cc084(s32 *a, s32 *b, s32 c);
extern void func_020cbe60(s32 *a, s32 *b, s32 c);
extern void func_020cbc3c(s32 *a, s32 *b, s32 c);
extern void func_020cba18(s32 *a, s32 *b, s32 c);
extern void func_020cb7f4(s32 *a, s32 *b, s32 c);
extern void func_020cb6ec(s32 *a, s32 *b, s32 c);
extern void func_020cab4c(s32 *a, s32 *b);
extern void func_020ca904(s32 *a, s32 *b, s32 c);
extern void func_020ca7c8(s32 *a, s32 *b, s32 c, s32 d);
extern void func_020ca708(s32 *a, s32 *b, s32 c);
extern void func_02044ca0(s32 x);
extern void func_020cabf4(s32 *a, s32 *b, s32 c);
extern void func_020ca0d0(s32 *a, s32 c, s32 d, s32 e);
extern void func_020ca504(s32 *a, s32 c);
extern void func_020c9214(s32 *a, u32 c);
extern void func_020c9e00(s32 *a, s32 *b, s32 c, s32 d);
extern void func_020c9c24(s32 *a, s32 *b, s32 c, s32 d);
extern void func_020c9b00(s32 *a, s32 c);
extern void func_020c99ac(s32 *a, s32 c);
extern s32 func_020cf878(s32 a);
extern void func_020d0564(s32 *a, s32 *b, s32 *c, s32 d, s32 e, s32 f);
extern void func_020cf77c(s32 *a, s32 *b);
extern void func_020d075c(s32 *a, s32 b);

static inline s32 ScaleOf(void)
{
    s32 i;
    i = (s32)*(s16 *)((u8 *)data_02159444 + 0x7a);
    if (i < 0 || *(s16 *)((u8 *)data_02159468 + 0x20) <= i) {
        i = 0;
    } else {
        i = *(s32 *)((u8 *)data_02159468 + i * 4 + 4);
    }
    return i;
}

void func_020cedf4(s32 *param_1, s32 param_2)
{
    W10 st170;
    W10 st148;
    s32 aiStack_120[3];
    s32 aiStack_114[3];
    s32 aiStack_108[3];
    s32 aiStack_fc[3];
    s32 aiStack_f0[3];
    s32 aiStack_e4[3];
    s32 aiStack_d8[3];
    s32 aiStack_cc[3];
    s32 aiStack_c0[3];
    s32 aiStack_b4[3];
    s32 aiStack_a8[3];
    s32 aiStack_9c[3];
    s32 aiStack_90[3];
    s32 aiStack_84[3];
    s32 aiStack_78[3];
    s32 aiStack_6c[3];
    s32 aiStack_60[3];
    s32 aiStack_54[3];
    s32 aiStack_48[3];
    s32 auStack_3c[3];
    s32 aiStack_30[3];
    s32 aiStack_24[4];
    s32 iVar2;
    s32 iVar4;
    s32 uVar3;
    s32 cur10;

    cur10 = *(volatile s32 *)(param_1 + 10);
    if (cur10 != param_1[11]) {
        param_1[10] = param_1[11];
        switch (param_1[10]) {
        case 0:
            break;
        case 1:
            func_020d1888(param_1);
            break;
        case 2:
            func_020db120(param_1);
            break;
        case 3:
            func_020d26e4(param_1);
            break;
        case 4:
            func_020d8594(param_1);
            break;
        case 5:
            func_020d8560(param_1);
            break;
        case 6:
            func_020d847c(param_1);
            break;
        case 7:
            func_020d843c(param_1);
            break;
        case 8:
            func_020d89e8(param_1);
            break;
        }
    }
    switch (param_1[10]) {
    case 0:
        break;
    case 1:
        func_020d1524(param_1);
        break;
    case 2:
        func_020db07c(param_1);
        break;
    case 3:
        func_020d25c0(param_1);
        break;
    case 4:
        func_020d8590(param_1);
        break;
    case 5:
        func_020d84c0(param_1);
        break;
    case 6:
        func_020d8478(param_1);
        break;
    case 7:
        func_020d8338(param_1);
        break;
    case 8:
        func_020d85bc(param_1);
        break;
    }
    func_020bdeec();
    if (param_1[13] != param_1[12]) {
        param_1[14] = param_1[13];
        param_1[13] = param_1[12];
        *(s16 *)(param_1 + 16) = *(s16 *)((u8 *)param_1 + 0x3e);
        *(s16 *)((u8 *)param_1 + 0x3e) = *(s16 *)((u8 *)param_1 + 0x3c);
        param_1[18] = param_1[17];
        switch (param_1[13]) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20: case 21:
            break;
        case 22:
            func_020ca1a4();
            break;
        case 23:
            func_020ca628();
            break;
        case 24:
            *(u16 *)(param_1 + 29) = 0;
            break;
        case 25: case 26: case 27: case 28:
            break;
        }
    }
    if (param_1[13] == 4 && *(s16 *)((u8 *)param_1 + 0x3c) != *(s16 *)((u8 *)param_1 + 0x3e)) {
        *(s16 *)(param_1 + 16) = *(s16 *)((u8 *)param_1 + 0x3e);
        *(s16 *)((u8 *)param_1 + 0x3e) = *(s16 *)((u8 *)param_1 + 0x3c);
        param_1[18] = param_1[17];
    }
    st148 = *(W10 *)param_1;
    switch (param_1[13]) {
    case 0:
    case 1:
        break;
    case 2:
        func_020be1b8(aiStack_120);
        iVar2 = func_020bc3c4();
        func_020cd4d8(st148.w, aiStack_120, *(s32 *)((u8 *)iVar2 + 0x70));
        break;
    case 3:
        iVar2 = ScaleOf();
        func_020be1b8(aiStack_114);
        iVar4 = func_020bc3c4();
        func_020cce1c(st148.w, aiStack_114, *(s32 *)((u8 *)iVar4 + 0x70), iVar2);
        break;
    case 4:
        func_020be1b8(aiStack_108);
        iVar2 = func_020bc14c();
        func_020ccd5c(st148.w, aiStack_108, iVar2);
        break;
    case 5:
        func_020be1b8(aiStack_fc);
        iVar2 = func_020bc14c();
        func_020ccb38(st148.w, aiStack_fc, iVar2);
        break;
    case 6:
        func_020be1b8(aiStack_f0);
        iVar2 = func_020bc14c();
        func_020cc914(st148.w, aiStack_f0, iVar2);
        break;
    case 7:
        func_020be1b8(aiStack_e4);
        iVar2 = func_020bc14c();
        func_020cc6f0(st148.w, aiStack_e4, iVar2);
        break;
    case 8:
        func_020be1b8(aiStack_d8);
        iVar2 = func_020bc14c();
        func_020cc4cc(st148.w, aiStack_d8, iVar2);
        break;
    case 9:
        func_020be1b8(aiStack_cc);
        iVar2 = func_020bc14c();
        func_020cc2a8(st148.w, aiStack_cc, iVar2);
        break;
    case 10:
        func_020be1b8(aiStack_c0);
        iVar2 = func_020bc14c();
        func_020cc084(st148.w, aiStack_c0, iVar2);
        break;
    case 11:
        func_020be1b8(aiStack_b4);
        iVar2 = func_020bc14c();
        func_020cbe60(st148.w, aiStack_b4, iVar2);
        break;
    case 12:
        func_020be1b8(aiStack_a8);
        iVar2 = func_020bc14c();
        func_020cbc3c(st148.w, aiStack_a8, iVar2);
        break;
    case 13:
        func_020be1b8(aiStack_9c);
        iVar2 = func_020bc14c();
        func_020cba18(st148.w, aiStack_9c, iVar2);
        break;
    case 14:
        func_020be1b8(aiStack_90);
        iVar2 = func_020bc14c();
        func_020cb7f4(st148.w, aiStack_90, iVar2);
        break;
    case 15:
        func_020be1b8(aiStack_84);
        iVar2 = func_020bc14c();
        func_020cb6ec(st148.w, aiStack_84, iVar2);
        break;
    case 16:
        func_020be1b8(aiStack_78);
        func_020cab4c(st148.w, aiStack_78);
        break;
    case 17:
        func_020be1b8(aiStack_6c);
        iVar2 = func_020bc3c4();
        func_020ca904(st148.w, aiStack_6c, *(s32 *)((u8 *)iVar2 + 0x70));
        break;
    case 18:
        func_020be1b8(aiStack_60);
        iVar2 = func_020bc3c4();
        uVar3 = *(s32 *)((u8 *)iVar2 + 0x70);
        iVar2 = func_020bc14c();
        func_020ca7c8(st148.w, aiStack_60, uVar3, iVar2);
        break;
    case 19:
        func_020be1b8(aiStack_54);
        iVar2 = func_020bc14c();
        func_020ca708(st148.w, aiStack_54, iVar2);
        break;
    case 20:
        func_020be1b8(aiStack_48);
        func_020cab4c(st148.w, aiStack_48);
        break;
    case 21:
        func_02044ca0(0);
        iVar2 = ScaleOf();
        func_020be1b8(auStack_3c);
        func_020cabf4(st148.w, auStack_3c, iVar2);
        break;
    case 22: {
        s32 sc;
        s32 vv;
        s32 k;
        func_02044ca0(0);
        k = (s32)*(s16 *)((u8 *)data_02159444 + 0x7a);
        if (k < 0 || *(s16 *)((u8 *)data_02159468 + 0x20) <= k) {
            sc = 0;
        } else {
            sc = *(s32 *)((u8 *)data_02159468 + k * 4 + 4);
        }
        iVar4 = func_020bc3c4();
        vv = *(s32 *)((u8 *)iVar4 + 0x70);
        iVar4 = func_020bc14c();
        func_020ca0d0(st148.w, iVar4, sc, vv);
        break;
    }
    case 23:
        iVar2 = func_020bc14c();
        func_020ca504(st148.w, iVar2);
        break;
    case 24:
        *(u16 *)(param_1 + 29) = (u16)(*(u16 *)(param_1 + 29) + 32);
        func_020c9214(st148.w, *(u16 *)(param_1 + 29));
        break;
    case 25:
        func_020be1b8(aiStack_30);
        iVar2 = func_020bc3c4();
        uVar3 = *(s32 *)((u8 *)iVar2 + 0x70);
        iVar2 = func_020bc14c();
        func_020c9e00(st148.w, aiStack_30, uVar3, iVar2);
        break;
    case 26:
        func_020be1b8(aiStack_24);
        iVar2 = func_020bc3c4();
        uVar3 = *(s32 *)((u8 *)iVar2 + 0x70);
        iVar2 = func_020bc14c();
        func_020c9c24(st148.w, aiStack_24, uVar3, iVar2);
        break;
    case 27:
        iVar2 = ScaleOf();
        func_020c9b00(st148.w, iVar2);
        break;
    case 28:
        iVar2 = ScaleOf();
        func_020c99ac(st148.w, iVar2);
        break;
    }
    *(s16 *)(param_1 + 20) = (s16)(*(s16 *)(param_1 + 20) - 1);
    if (*(s16 *)(param_1 + 20) <= 0) {
        *(u16 *)(param_1 + 20) = 0;
    } else {
        iVar4 = 0x3c - *(s16 *)(param_1 + 20);
        iVar2 = iVar4 * 0x1000;
        iVar2 = ((s32 (*)(s32))(*(u32 *)(data_02136984 + 8)))(iVar2 / 60);
        st148.w[3] = param_1[21] + (s32)((((s64)iVar2 * (s64)(st148.w[3] - param_1[21])) + 0x800) >> 12);
        st148.w[4] = param_1[22] + (s32)((((s64)iVar2 * (s64)(st148.w[4] - param_1[22])) + 0x800) >> 12);
        st148.w[5] = param_1[23] + (s32)((((s64)iVar2 * (s64)(st148.w[5] - param_1[23])) + 0x800) >> 12);
    }
    if (param_1[18] == 0) {
        iVar2 = func_020cf878(param_1[13]);
        param_1[18] = iVar2;
    }
    if (param_1[19] == 1) {
        *(W10 *)param_1 = st148;
        param_1[19] = 0;
    } else {
        switch (param_1[18]) {
        case 0:
            break;
        case 1:
            *(W10 *)param_1 = st148;
            break;
        case 2:
            func_020d0564(param_1, param_1, st148.w, 0x400, 0x400, 0x100);
            break;
        case 3:
            func_020d0564(param_1, param_1, st148.w, 0x200, 0x200, 0x100);
            break;
        case 4:
            func_020d0564(param_1, param_1, st148.w, 0x80, 0x80, 0x40);
            break;
        case 5:
            func_020d0564(param_1, param_1, st148.w, 0x40, 0x40, 0x20);
            break;
        }
    }
    st170 = *(W10 *)param_1;
    func_020cf77c(param_1, st170.w);
    func_020d075c(st170.w, param_2);
    *(u16 *)((u8 *)param_1 + 0x76) = *(s16 *)((u8 *)data_02159444 + 0x7c);
}
