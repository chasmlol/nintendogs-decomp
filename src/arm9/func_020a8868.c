#include "ctx.h"

/* Frame layout from the original code: spill slots (mwcc's) at sp+0..67, then these objects at their
   target offsets. */
typedef struct {
    s32 iStack_10c;     /* 68 */
    s16 local_108;      /* 72 */
    s16 p74;
    u32 uStack_104;     /* 76 */
    s16 local_100;      /* 80 */
    s16 p82;
    u32 auStack_fc[7];  /* 84 */
    s16 st[6];          /* 112 */
    u32 uStack_d4;      /* 124 */
    s16 local_d0;       /* 128 */
    s16 local_ce;       /* 130 */
    s16 local_cc;       /* 132 */
    s16 p134;
    u32 uStack_c8;      /* 136 */
    s16 p140;
    s16 local_c2;       /* 142 */
    u32 p144;
    u32 auStack_bc[7];  /* 148 */
    u32 uStack_a0;      /* 176 */
    s16 p180;
    s16 local_9a;       /* 182 */
    u32 p184;
    u32 auStack_94[7];  /* 188 */
    u32 uStack_78;      /* 216 */
    s16 p220;
    s16 local_72;       /* 222 */
    u32 p224;
    u32 auStack_6c[7];  /* 228 */
    u32 auStack_50[7];  /* 256 */
    u32 uStack_34;      /* 284 */
    s16 p288;
    s16 local_2e;       /* 290 */
    s32 padEnd[2];
} Frame;

extern s32 func_02002e60(void);
extern void *func_02002e58(s32 a);
extern void func_020a8594(void *a);
extern void func_02002fd0(void *a, void (*b)(void));
extern void func_020a8490(void *a, void *b);
extern s32 func_02002e70(void *a, void *b);
extern s32 func_020a8f20(void);
extern s32 func_020a8e50(void);
extern s32 func_020a8d80(void);
extern void func_020a8070(void *a, s32 b);
extern void func_020a7e54(void *a, s32 b, s32 c);
extern void func_020a7dd4(void *a, s32 b, s32 c);
extern void func_02097a58(s32 a, s32 b);
extern void func_020a795c(void);
extern void func_020a7d74(s32 a, s32 b);
extern void func_020a4e94(void);
extern void func_020b67d0(void);
extern void func_020b45e8(void);
extern void func_020b7710(void);
extern void func_020b9934(void);

void func_020a8868(void)
{
    Frame F;
    s32 local_150;
    s32 iVar4;
    s32 uVar6;
    void *piVar5;

    F.st[0] = -1;
    F.st[1] = -1;
    F.st[2] = 0;
    F.st[3] = 0;
    F.st[4] = 0;
    F.st[5] = -1;
    func_020a8594(func_02002e58(func_02002e60()));
    for (;;) {
        func_02002fd0(F.auStack_fc, func_020a4e94);
        func_020a8490(&F.uStack_d4, F.st);
        uVar6 = func_02002e70(F.auStack_fc, &F.uStack_d4);
        F.st[0] = -1;
        F.st[1] = -1;
        F.st[2] = 0;
        F.st[3] = 0;
        F.st[4] = 0;
        F.st[5] = -1;
        switch (uVar6) {
        case 0: case 1: case 3: case 4: case 9: case 12: case 14: case 18: case 21: case 23:
            break;
        case 2:
            func_02002fd0(F.auStack_fc, func_020b67d0);
            func_02002e70(F.auStack_fc, 0);
            break;
        case 5:
            iVar4 = func_020a8f20();
            F.st[0] = (s16)iVar4;
            F.st[1] = 0;
            F.st[2] = 1;
            break;
        case 6:
            iVar4 = func_020a8e50();
            F.st[0] = (s16)iVar4;
            F.st[1] = 1;
            F.st[2] = 1;
            break;
        case 7:
            iVar4 = func_020a8d80();
            F.st[0] = (s16)iVar4;
            F.st[2] = 1;
            F.st[1] = 2;
            break;
        case 13: {
            func_020a8070(&F.uStack_c8, 6);
            func_02002fd0(F.auStack_fc, func_020a4e94);
            func_02002e70(F.auStack_fc, &F.uStack_c8);
            F.st[0] = -1;
            F.st[1] = 3;
            F.st[2] = 0;
            if (F.local_c2 >= 0) {
                func_02002fd0(F.auStack_fc, func_020b45e8);
                iVar4 = func_02002e70(F.auStack_fc, &F.uStack_c8);
                if (iVar4 != 0) {
                    F.st[1] = 3;
                    F.st[2] = 1;
                    F.st[0] = F.local_c2;
                }
            }
            break;
        }
        case 10: {
            s32 sVar8 = F.local_cc;
            s32 sVar1 = -1;
            s32 uVar7 = 0;
            s32 sVar3;
            func_020a8070(&F.uStack_a0, 4);
            func_02002fd0(F.auStack_bc, func_020a4e94);
            func_02002e70(F.auStack_bc, &F.uStack_a0);
            sVar3 = F.local_9a;
            if (sVar3 >= 0) {
                sVar1 = sVar3;
                func_020a7e54(&F.iStack_10c, sVar3, sVar8);
                func_02002fd0(F.auStack_bc, func_020a4e94);
                func_02002e70(F.auStack_bc, &F.iStack_10c);
                uVar7 = F.local_108;
            }
            F.st[2] = 1;
            F.st[0] = sVar1;
            if (sVar1 >= 0) F.st[3] = uVar7;
            F.st[1] = 4;
            F.st[5] = F.local_cc;
            break;
        }
        case 11: {
            s32 sVar8 = F.local_cc;
            s32 sVar1 = -1;
            s32 uVar7 = 0;
            s32 sVar3;
            func_020a8070(&F.uStack_78, 5);
            func_02002fd0(F.auStack_94, func_020a4e94);
            func_02002e70(F.auStack_94, &F.uStack_78);
            sVar3 = F.local_72;
            if (sVar3 >= 0) {
                sVar1 = sVar3;
                func_020a7dd4(&F.uStack_104, sVar3, sVar8);
                func_02002fd0(F.auStack_94, func_020a4e94);
                func_02002e70(F.auStack_94, &F.uStack_104);
                uVar7 = F.local_100;
            }
            F.st[2] = 1;
            F.st[0] = sVar1;
            if (sVar1 >= 0) F.st[3] = uVar7;
            F.st[1] = 5;
            F.st[5] = F.local_cc;
            break;
        }
        case 24:
            func_02097a58(25, F.local_cc);
            F.st[0] = -1;
            F.st[1] = 12;
            F.st[2] = 1;
            F.st[5] = F.local_cc;
            break;
        case 22:
            func_020a7d74(F.local_d0, F.local_ce);
            func_02002fd0(F.auStack_6c, func_020a4e94);
            func_02002e70(F.auStack_6c, 0);
            F.st[0] = -1;
            F.st[1] = 13;
            F.st[2] = 1;
            break;
        case 8: {
            s32 sVar8 = -1;
            local_150 = 0;
            func_020a8070(&F.uStack_34, 7);
            func_02002fd0(F.auStack_50, func_020a4e94);
            func_02002e70(F.auStack_50, &F.uStack_34);
            if (F.local_2e >= 0) {
                func_02002fd0(F.auStack_50, func_020b7710);
                iVar4 = func_02002e70(F.auStack_50, &F.uStack_34);
                sVar8 = F.local_2e;
                if (iVar4 == 12) local_150 = 1;
            }
            F.st[1] = 6;
            F.st[0] = sVar8;
            F.st[2] = 1;
            if (sVar8 >= 0) F.st[4] = local_150;
            break;
        }
        case 15:
            func_02097a58(21, 3);
            F.st[0] = -1;
            F.st[1] = 7;
            F.st[2] = 1;
            break;
        case 16:
            func_02097a58(21, 0);
            F.st[0] = -1;
            F.st[1] = 8;
            F.st[2] = 1;
            break;
        case 17:
            func_02097a58(21, 2);
            F.st[0] = -1;
            F.st[1] = 9;
            F.st[2] = 1;
            break;
        case 19: {
            s32 flag = 0;
            func_02002fd0(F.auStack_fc, func_020b9934);
            iVar4 = func_02002e70(F.auStack_fc, 0);
            if (iVar4 != 0) flag = 1;
            F.st[2] = (s16)flag;
            F.st[0] = -1;
            F.st[1] = 10;
            break;
        }
        case 20: {
            s32 flag = 0;
            func_020a795c();
            func_02002fd0(F.auStack_fc, func_020a4e94);
            iVar4 = func_02002e70(F.auStack_fc, 0);
            if (iVar4 != 1) flag = 1;
            F.st[2] = (s16)flag;
            F.st[0] = -1;
            F.st[1] = 11;
            break;
        }
        default:
            break;
        }
    }
}
