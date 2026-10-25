#include "ctx.h"
#pragma opt_lifetimes off

extern u8 data_02152cd8[];
extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 *data_0214f460;

extern s32 func_02009dfc(u32 *a, s32 *b, s32 *c);
extern s32 func_02009d34(s32 *a, s32 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);
extern s32 func_ov005_021668c0(s32 a, s32 *b, s32 *c);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_020aaec4(u8 *a, s32 *b, s32 c);
extern s32 func_020aaf38(u8 *a, s32 *b, s32 c);

/* FX product: round((a * b) >> 12) in 64 bits, as the target's smull/adds/adc/lsr/orr chain */
#define MUL12(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))


/* the current object index, read at each use */
#define CUR_IDX (*(s16 *)(data_02159444 + 0x7a))

u32 func_ov005_0215dbec(u8 *param_1, s32 param_2)
{
    u32 loc48[3];
    s32 aiStack_3c[3];
    s32 aiStack_30[4];
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    u8 bVar2;
    

    loc48[0] = *(u32 *)(data_02152cd8 + 0x54);
    loc48[1] = *(u32 *)(data_02152cd8 + 0x60);
    loc48[2] = *(u32 *)(data_02152cd8 + 0x6c);
    iVar5 = func_02009dfc(loc48, (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x18c));
    iVar6 = func_02009d34((s32 *)loc48, (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x18c));
    {
        s32 o1;
        if (CUR_IDX < 0 || *(s16 *)(data_02159468 + 0x20) <= CUR_IDX) {
            o1 = 0;
        } else {
            o1 = *(s32 *)(data_02159468 + CUR_IDX * 4 + 4);
        }
        if (o1 != 0 && *(s16 *)(o1 + 0x96) == 10) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
    if (bVar2) {
        if (CUR_IDX < 0 || *(s16 *)(data_02159468 + 0x20) <= CUR_IDX) {
            iVar7 = 0;
        } else {
            iVar7 = *(s32 *)(data_02159468 + CUR_IDX * 4 + 4);
        }
        if (param_2 != 0 && iVar7 != 0 && func_ov005_021668c0(iVar7, aiStack_3c, aiStack_30) != 0) {
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar7 = func_0200b8a0((s32 *)(param_1 + 0x378), aiStack_3c, aiStack_30);
            if (iVar7 < MUL12(MUL12(iVar8, iVar5), 0x1004)) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e908(param_1, 0x447);
                return 1;
            }
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar7 = func_0200b8a0((s32 *)(param_1 + 0x384), aiStack_3c, aiStack_30);
            if (iVar7 < MUL12(MUL12(iVar8, iVar5), 0x14d2)) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e908(param_1, 0x444);
                return 1;
            }
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar7 = func_0200b8a0((s32 *)(param_1 + 0x348), aiStack_3c, aiStack_30);
            if (iVar7 < MUL12(MUL12(iVar8, iVar5), 0x14d2)) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e908(param_1, 0x445);
                return 1;
            }
            if (iVar6 != 0) {
                iVar5 = func_02028130(param_1);
                iVar6 = func_02028130(param_1);
                iVar7 = func_0200b8a0((s32 *)(param_1 + 0x354), aiStack_3c, aiStack_30);
                if (iVar7 < MUL12(MUL12(iVar6, iVar5), 0x334)) {
                    func_0203e908(param_1, 0x446);
                    return 1;
                }
            }
        }
    } else {
        if (iVar6 != 2) {
            iVar8 = func_02028130(param_1);
            iVar7 = func_02028130(param_1);
            iVar8 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x2f4), MUL12(MUL12(iVar7, iVar8), 0x334));
            if (iVar8 != 0) {
                func_0203e908(param_1, 0x44e);
                return 1;
            }
        }
        if (iVar6 != 1) {
            iVar8 = func_02028130(param_1);
            iVar7 = func_02028130(param_1);
            iVar8 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x300), MUL12(MUL12(iVar7, iVar8), 0x334));
            if (iVar8 != 0) {
                func_0203e908(param_1, 0x44f);
                return 1;
            }
        }
        if (iVar5 != 2 && iVar5 != 3) {
            iVar8 = func_02028130(param_1);
            iVar7 = func_02028130(param_1);
            iVar8 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x30c), MUL12(MUL12(iVar7, iVar8), 0x334));
            if (iVar8 != 0) {
                func_0203e908(param_1, 0x449);
                return 1;
            }
        }
        if (iVar5 != 1 && iVar5 != 3) {
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar5 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x318), MUL12(MUL12(iVar8, iVar5), 0x334));
            if (iVar5 != 0) {
                func_0203e908(param_1, 0x44a);
                return 1;
            }
        }
        if (iVar6 != 2 && iVar6 != 0) {
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar5 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x324), MUL12(MUL12(iVar8, iVar5), 0x19a));
            if (iVar5 != 0) {
                func_0203e908(param_1, 0x44b);
                return 1;
            }
        }
        if (iVar6 != 1 && iVar6 != 0) {
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            iVar5 = func_020aaec4(data_0214f460, (s32 *)(param_1 + 0x330), MUL12(MUL12(iVar8, iVar5), 0x19a));
            if (iVar5 != 0) {
                func_0203e908(param_1, 0x44c);
                return 1;
            }
        }
        if (param_2 != 0) {
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            if (func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x378), MUL12(MUL12(iVar8, iVar5), 0x1004)) != 0) {
                *(u32 *)(param_1 + 0x464) = 0;
                iVar8 = *(s16 *)(data_02159444 + 0x7a);
                {
                    s32 iVar9;
                    if (iVar8 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar8) {
                        iVar9 = 0;
                    } else {
                        iVar9 = *(s32 *)(data_02159468 + iVar8 * 4 + 4);
                    }
                    if (iVar9 != 0 && *(s16 *)(iVar9 + 0x96) == 9 && *(s16 *)(iVar9 + 0x90) == 3) {
                        bVar2 = 1;
                    } else {
                        bVar2 = 0;
                    }
                }
                if (bVar2) {
                    func_0203e908(param_1, 0x447);
                } else {
                    func_0203e908(param_1, 0x441);
                }
                return 1;
            }
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            if (func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x384), MUL12(MUL12(iVar8, iVar5), 0x14d2)) != 0) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e908(param_1, 0x442);
                return 1;
            }
            iVar5 = func_02028130(param_1);
            iVar8 = func_02028130(param_1);
            if (func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x348), MUL12(MUL12(iVar8, iVar5), 0x14d2)) != 0) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e908(param_1, 0x443);
                return 1;
            }
            if (iVar6 != 0) {
                iVar6 = func_02028130(param_1);
                iVar8 = func_02028130(param_1);
                if (func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x360), MUL12(MUL12(iVar8, iVar6), 0x334)) != 0) {
                    func_0203e908(param_1, 0x450);
                    return 1;
                }
            }
        }
    }
    return 0;
}

