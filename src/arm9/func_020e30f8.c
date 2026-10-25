#include "ctx.h"

typedef struct { u32 w[11]; } T11;
typedef struct { u32 w[3]; } T3;
typedef struct {
    u8 p0[4];
    s32 f4;
    s32 f8;
    s32 fc;
    u8 p10[8];
    u16 f18;
    u8 p1a[14];
    s32 f28;
    s32 f2c;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3c;
} Iv12;
#define P12(f) (((Iv12 *)iVar12)->f)

typedef struct { u8 pad0[0x38]; s32 f38; s32 f3c; } P38;

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u32 data_02144aa8[];

extern s32 func_02044ca0(s16 v);
extern void func_020be520(s32, s32 *);
extern void func_020be3d4(s32, u32 *);
extern void func_01ff8020(u32 *, s32, s32);
extern void func_01ff810c(s32 *, u32 *, u32 *);
extern s32 func_02067898(s32, s32);
extern void func_020e2424(s32 *, s32 *, s32 *, s32);
extern void func_020c5fbc(s32);
extern void func_02044b58(void);
extern s16 func_02068078(s32, s32);
extern u64 func_0205e270(u32, u32);
extern u64 func_0205e0c0(u32, u32, s32, s32);
extern void func_0209d430(s32 *, s32, s32);
extern void func_01ff832c(s32, s32 *, s32 *, s32 *);

void func_020e30f8(s32 param_1)
{
    u32 uVar1;
    s64 lVar2;
    s16 sVar3;
    s32 iVar12;
    s32 iVar11;
    u32 uVar10;
    u32 uVar9;
    s32 iVar4;
    s32 t38;
    u16 uh18;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    u32 uVar8;
    u64 uVar13;
    u64 uVar14;
    u64 uVar15;
    s32 st90[3];
    u32 auStack_84[12];
    s32 st54[11];

    iVar4 = func_02044ca0(*(s16 *)(param_1 + 156));
    iVar12 = *(s32 *)(param_1 + 0x214);
    iVar11 = 0x1000;
    if (iVar4 == 0) {
        return;
    }
    func_020be520(param_1, st90);
    st90[1] = st90[1] + (s32)0xfffffccd;
    func_020be3d4(param_1, (u32 *)(iVar12 + 0x70));
    func_01ff8020(auStack_84, 0, (s32)0xfffff000);
    func_01ff810c((s32 *)(iVar12 + 0x70), auStack_84, (u32 *)(iVar12 + 0x70));
    if (((P38 *)iVar12)->f38 < ((P38 *)iVar12)->f3c) {
        t38 = ((P38 *)iVar12)->f38;
        ((P38 *)iVar12)->f38 = t38 + 0x1000;
        iVar11 = func_02067898(((P38 *)iVar12)->f38, ((P38 *)iVar12)->f3c);
        func_020e2424((s32 *)(iVar12 + 0x40), (s32 *)(iVar12 + 0x70), (s32 *)(param_1 + 200), iVar11);
        goto LAB_020e3388;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 4) != 0 || *(s32 *)(data_02159468 + 0x24) != 0) {
        func_020c5fbc(param_1);
        func_02044b58();
        return;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        goto LAB_020e3388;
    }
    uVar10 = (u32)P12(f4);
    iVar7 = *(s32 *)(param_1 + 0x214);
    func_02044ca0(*(s16 *)(param_1 + 156));
    iVar6 = (s32)*(s16 *)(data_02159444 + 0x86);
    iVar5 = (s32)*(s16 *)(data_02159444 + 0x88);
    if (iVar6 > 0) {
        iVar4 = iVar6;
    } else {
        iVar4 = -iVar6;
    }
    if (iVar4 >= 2) goto LAB_020e3244;
    if (iVar5 > 0) {
        iVar4 = iVar5;
    } else {
        iVar4 = -iVar5;
    }
    if (iVar4 < 2) {
        uVar9 = (u32)*(u16 *)(iVar7 + 0x18);
        goto LAB_020e3296;
    }
LAB_020e3244:
    sVar3 = func_02068078(iVar5, iVar6);
    uVar9 = (u32)sVar3;
LAB_020e3296:
    uh18 = P12(f18);
    *(T11 *)st54 = *(T11 *)data_02144aa8;
    iVar4 = uVar9 - uh18;
    if (iVar4 < 0) {
        iVar4 = iVar4 + 0x10000;
    }
    if (0x8000 < iVar4) {
        uVar13 = func_0205e270((u32)P12(f4), (u32)P12(f8));
        if (iVar4 < 0xe000) {
            iVar4 = 0xe000;
        }
        iVar4 = 0x10000 - iVar4;
        if (P12(fc) == 0) {
            lVar2 = (s64)iVar4 * (s64)st54[(s32)uVar13];
            uVar14 = func_0205e0c0((u32)lVar2, (u32)(lVar2 >> 32), 0x2000, 0);
            P12(f4) = (s32)((u64)(u32)P12(f4) + uVar14);
        } else {
            P12(f4) -= 0x19a;
        }
        if (P12(f4) >= P12(f8) * 10 + (P12(f8) >> 4)) {
            P12(fc) = 1;
        }
        if (P12(f4) <= P12(f8) * 10) {
            P12(fc) = 0;
        }
        iVar4 = P12(f8) * 10 + (P12(f8) >> 4);
        if (P12(f4) >= iVar4) {
            P12(f4) = iVar4 - 0x1000;
        }
        if (P12(f4) < 0) {
            P12(f4) = 0;
        }
        uVar8 = (u32)P12(f4);
        uVar1 = P12(f8) >> 5;
        uVar13 = func_0205e270(uVar8, uVar1);
        uVar15 = func_0205e270(uVar10, uVar1);
        if ((s32)uVar13 > (s32)uVar15) {
            func_0209d430((s32 *)(param_1 + 400), 4, uVar8 - uVar10);
        }
    }
    *(s16 *)(iVar12 + 0x18) = (s16)uVar9;
LAB_020e3388:
    if (P12(f34) == 0) {
        *(T3 *)(param_1 + 0xbc) = *(T3 *)st90;
        return;
    }
    *(u32 *)(param_1 + 0xbc) = P12(f28) + (u32)(((s64)iVar11 * (s64)(st90[0] - P12(f28)) + 0x800) >> 12);
    *(u32 *)(param_1 + 0xc0) = P12(f2c) + (u32)(((s64)iVar11 * (s64)(st90[1] - P12(f2c)) + 0x800) >> 12);
    *(u32 *)(param_1 + 0xc4) = P12(f30) + (u32)(((s64)iVar11 * (s64)(st90[2] - P12(f30)) + 0x800) >> 12);
}
