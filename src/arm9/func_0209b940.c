#include "ctx.h"

typedef struct { s32 v[3]; } T3;

extern u8 data_02159074[];
extern u8 data_0212fdc8[];
extern u8 data_0212fdc9[];
extern u16 data_02141f94;
extern s32 data_0214f464;
extern s16 data_0212fd18[];
extern u8 data_02159198[];

extern s32 func_020df0d4(void);
extern void func_02070c18(s32 *, s32);
extern u32 func_0209b774(s32 *);
extern void func_02072f28(s32 *, s32, s32, s32, s32, s32);
extern void func_02072fe4(s32 *, s32, s32);
extern void func_020709f8(s32 *, u32, s32);
extern void func_02070800(s32 *, s32, s32);
extern void func_02070b20(s32 *, s32);
extern s32 func_0209b73c(s32 *);
extern void func_020709c8(s32 *, u32, s32);
extern s32 func_0205e270(s32, s32);
extern s32 func_02044c8c(void);
extern s32 func_01ffdb08(s32);
extern s32 func_02027f78(s32, s32);
extern void func_0209ddcc(s32);

void func_0209b940(s32 *param_1, s32 *param_2)
{
    u32 uVar5;
    u32 uVar6;
    s32 bVar4;
    u32 uVar14;
    s32 iVar8;
    s32 uVar12;
    s32 iVar9;
    s32 iVar7;
    u32 unaff_r7;
    u32 uVar1;
    s16 i;
    s32 *piVar10;

    {
        u32 idx = (u16)(*(u16 *)(data_02159074 + 0x18)) * 6;
        uVar5 = data_0212fdc8[idx];
        uVar6 = data_0212fdc9[idx];
    }
    bVar4 = 0;
    iVar8 = func_020df0d4();
    if (param_2 != 0) {
        *(T3 *)(param_1 + 0x11) = *(T3 *)param_2;
    }
    i = 0;
    if (i < param_1[0]) {
        piVar10 = param_1 + 6;
        uVar14 = uVar6 - uVar5;
        do {
            uVar12 = ((s16 *)param_1 + i)[9];
            uVar1 = (u16)(1u << i);
            if (iVar8 != -11) goto L118;
            func_02070c18(piVar10, 10);
            {
                s32 v4 = *(u16 *)((u8 *)param_1 + 4);
                *(u16 *)((u8 *)param_1 + 4) = v4 & ~uVar1;
            }
            *(u16 *)((u8 *)param_1 + 0x2a) &= ~uVar1;
            goto L218;
        L118:
            if (*(u16 *)((u8 *)param_1 + 4) == 0) goto L160;
            if ((*(u16 *)((u8 *)param_1 + 4) & uVar1) == 0) goto L160;
            if ((*(u16 *)((u8 *)param_1 + 6) & uVar1) != 0) goto L160;
            func_02070c18(piVar10, 0);
            {
                s32 v4 = *(u16 *)((u8 *)param_1 + 4);
                *(u16 *)((u8 *)param_1 + 4) = v4 & ~uVar1;
            }
            *(u16 *)((u8 *)param_1 + 0x2a) &= ~uVar1;
        L160:
            if ((*(u16 *)((u8 *)param_1 + 8) & uVar1) == 0) goto L218;
            iVar7 = *(s16 *)((u8 *)param_1 + 36);
            if (bVar4 == 0) {
                unaff_r7 = func_0209b774(param_2);
                bVar4 = 1;
            }
            if (unaff_r7 >= uVar6) goto L20c;
            if (((s16 *)param_1 + i)[9] >= 0x44) {
                func_02072fe4(piVar10, ((s16 *)param_1 + i)[6], uVar12);
                goto L1fc;
            }
            func_02072f28(piVar10, iVar7, -1, -1, ((s16 *)param_1 + i)[6], uVar12);
            if ((param_1 + i)[14] != 0) {
                func_020709f8(piVar10, data_02141f94, (param_1 + i)[14]);
            }
        L1fc:
            func_02070800(piVar10, 8, iVar7);
        L20c:
            *(u16 *)((u8 *)param_1 + 8) ^= uVar1;
        L218:
            if (*piVar10 == 0) goto L3e0;
            iVar7 = -1;
            if (data_0214f464 != 0) iVar7 = func_02044c8c();
            if ((1u << uVar12 & 0x0e460007) != 0) {
                iVar9 = data_0212fd18[*(u16 *)((u8 *)param_1 + 0x26)];
            } else {
                iVar9 = 127;
            }
            if (iVar7 != -1 && *(s16 *)((u8 *)param_1 + 36) != iVar7) iVar9 = iVar9 >> 1;
            if (bVar4 == 0) {
                unaff_r7 = func_0209b774(param_2);
                bVar4 = 1;
            }
            if (unaff_r7 > uVar5) {
                if (unaff_r7 < uVar6) {
                    iVar9 = func_0205e270(iVar9 * (uVar6 - unaff_r7), uVar14);
                } else {
                    iVar9 = 0;
                    func_02070c18(piVar10, iVar9);
                    if ((*(u16 *)((u8 *)param_1 + 4) & uVar1) != 0) {
                        *(u16 *)((u8 *)param_1 + 4) ^= uVar1;
                    }
                }
            }
            if ((*(u16 *)((u8 *)param_1 + 0x2a) & uVar1) == 0) goto L390;
            if (uVar12 > 37) goto L300;
            if (uVar12 != 37) goto L390;
            goto L32c;
        L300:
            if (uVar12 > 53) goto L390;
            if (uVar12 < 49) goto L390;
            if (uVar12 == 49) goto L364;
            if (uVar12 == 50) goto L364;
            if (uVar12 != 53) goto L390;
            goto L364;
        L32c:
            if ((param_1 + i)[11] == 0) {
                func_02070800(piVar10, 7, 90);
            } else {
                func_02070800(piVar10, 7, 127);
            }
            goto L390;
        L364:
            iVar7 = (s16)(((param_1 + i)[11] >> 5) + 64);
            if (iVar7 > 127) iVar7 = 127;
            func_02070800(piVar10, 13, iVar7);
        L390:
            if (uVar12 >= 41 && uVar12 <= 46 && iVar9 < 30) {
                func_02070c18(piVar10, 0);
                goto L3e0;
            }
            func_02070b20(piVar10, iVar9);
            iVar7 = func_0209b73c(param_2);
            func_020709c8(piVar10, data_02141f94, iVar7);
        L3e0:
            if ((*(u16 *)((u8 *)param_1 + 10) & uVar1) != 0 && *piVar10 == 0) {
                *(u16 *)((u8 *)param_1 + 10) &= ~uVar1;
                *(u16 *)((u8 *)param_1 + 0x2a) &= ~uVar1;
            }
            piVar10 = piVar10 + 1;
            i++;
        } while (i < param_1[0]);
    }
    *(u16 *)((u8 *)param_1 + 6) = 0;
    if (*(s32 *)(data_02159198 + 0x100) == 0) return;
    func_0209ddcc(func_02027f78(func_01ffdb08(*(s16 *)((u8 *)param_1 + 36)), 7));
}
