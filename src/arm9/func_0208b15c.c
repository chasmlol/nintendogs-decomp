#include "ctx.h"

extern u8 data_0212faa0[];
extern u8 data_0213ea48[];
extern u8 *data_02159030;

extern void func_0205f050(u8 *a, s32 b, u8 *c, u32 d);
extern void func_02088364(s32 *a);
extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern u64 func_0207e9f8(s32 a, s32 b);
extern s32 func_02088014(s32 *a, u8 *b);
extern s32 func_020038b8(s32 *a, s32 b);
extern void func_02087e90(s32 *a, s32 b, s32 c);
extern void func_02087fcc(s32 *a);
extern u8 *func_02090cac(s32 a, s32 b, s32 c);
extern void func_02095298(s32 a, u8 *b);
extern void func_02095304(s32 a);
extern void func_0208b3d4(u8 *a, s32 b, u32 c);

typedef struct {
    u8 acStack_e8[64];
    s32 aiStack_a8[8];
    s32 local_88;
    s32 local_84;
    s32 pad1[7];
    s32 aiStack_64[8];
    s32 local_44;
    s32 local_40;
    s32 pad2[7];
} Frame2;

void func_0208b15c(s32 *param_1, s32 *param_2, s32 *param_3, u32 param_4)
{
    s32 iVar3;
    s32 iVar7;
    s32 iVar6;
    s32 bVar1;
    u8 *puVar8;
    u32 uVar5;
    Frame2 F;

    iVar6 = (s16)param_4 * 12 + (s32)data_0212faa0;
    puVar8 = data_0213ea48;
    uVar5 = param_4;
    func_0205f050(F.acStack_e8, 0x40, puVar8, param_4);
    iVar7 = 0;
    func_02088364(F.aiStack_a8);
    iVar3 = func_02066160();
    if (iVar3 != 0) {
        do {
            if (iVar7 == 0 && func_020d5abc() != 0) {
                iVar7 = 1;
            }
            if (iVar7 != 0 && func_020d5aa0()) {
                func_02066120();
            }
            func_0207e9f8(1, 1);
        } while (1);
    }
    iVar3 = func_02088014(F.aiStack_a8, F.acStack_e8);
    if (iVar3 != 0) {
        puVar8 = (u8 *)(F.local_84 - F.local_88);
        iVar7 = func_020038b8(param_3, (s32)puVar8);
        func_02087e90(F.aiStack_a8, iVar7, (s32)puVar8);
        func_02087fcc(F.aiStack_a8);
    }
    iVar3 = func_02066160();
    if (iVar3 != 0) {
        bVar1 = 0;
        do {
            if (!bVar1 && func_020d5abc() != 0) {
                bVar1 = 1;
            }
            if (bVar1 && func_020d5aa0()) {
                func_02066120();
            }
            func_0207e9f8(1, 1);
        } while (1);
    }
    puVar8 = func_02090cac(*(s32 *)(data_02159030 + 0x38), *(s32 *)(iVar6 + 8), 0);
    func_02095298(iVar7, puVar8);
    *(s16 *)(iVar7 + 0x66) = *(s16 *)(iVar6 + 4);
    func_02095304(iVar7);
    *param_1 = iVar7;
    func_0208b3d4(F.acStack_e8, 0x40, param_4);
    iVar7 = 0;
    func_02088364(F.aiStack_64);
    iVar3 = func_02066160();
    if (iVar3 != 0) {
        do {
            if (iVar7 == 0 && func_020d5abc() != 0) {
                iVar7 = 1;
            }
            if (iVar7 != 0 && func_020d5aa0()) {
                func_02066120();
            }
            func_0207e9f8(1, 1);
        } while (1);
    }
    iVar3 = func_02088014(F.aiStack_64, F.acStack_e8);
    if (iVar3 != 0) {
        param_4 = F.local_40 - F.local_44;
        iVar7 = func_020038b8(param_3, param_4);
        func_02087e90(F.aiStack_64, iVar7, param_4);
        func_02087fcc(F.aiStack_64);
    }
    iVar3 = func_02066160();
    if (iVar3 == 0) {
        goto RET;
    }
    bVar1 = 0;
    do {
        if (!bVar1 && func_020d5abc() != 0) {
            bVar1 = 1;
        }
        if (bVar1 && func_020d5aa0()) {
            func_02066120();
        }
        func_0207e9f8(1, 1);
    } while (1);
RET:
    *param_2 = iVar7;
    return;
}
