#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    s16 pred;
    s16 step;
} Enc;

extern s32 data_0215b670;
extern u32 data_02144a80;
extern s32 data_0215b668;
extern u32 data_0215b674;
extern Enc data_0215b64c;
extern Enc data_0215b678[];
extern u8 *data_0215b650;
extern u8 *data_0215b648;
extern s32 data_0215b66c;
extern s32 data_0215b658;
extern u32 data_0215b65c;
extern s32 data_0215b654;
extern u32 data_02144a7c;

extern s16 *func_020dfa10(void);
extern void func_020dfc38(void);
extern void func_020dfd0c(u32 a);
extern void func_020dfc94(void);
extern void func_020dffa0(s16 *a, u8 *b, s32 c, Enc *d);
extern void func_020e184c(void);
extern void func_020e0240(s32 a, s32 b, u32 c, u32 d, u32 e);

void func_020e150c(void)
{
    s16 *psVar7;
    u32 uVar8;
    s16 asStack[2];
    u32 local_34;
    int uVar17;
    int iVar16;
    u32 x;
    u32 y;
    u32 n;
    int iVar9;
    s32 uVar11;
    u32 idx;
    s32 uVar15;
    int iVar13;
    s16 sv;
    s32 val;
    u8 *pcVar10;
    u8 *pbVar12;
    u32 iVar14;

    if (data_0215b670 != 0) {
        psVar7 = func_020dfa10();
        uVar11 = data_0215b674;
        uVar15 = data_02144a80;
        n = uVar15 - uVar11;
        data_0215b668 = 1;
        uVar8 = psVar7[0];
        if (n > uVar8) {
            n = uVar8;
        } else {
            data_0215b670 = 0;
        }
        uVar17 = 0;
        uVar8 = 0xfffffffe & n;
        if (uVar8 != 0) {
            local_34 = uVar17;
            do {
                iVar16 = local_34;
                do {
                    x = data_0215b674 + uVar17;
                    y = data_02144a80 / 40u;
                    if (x % y == 0) {
                        idx = x / y;
                        if (data_0215b64c.pred != data_0215b678[idx].pred ||
                            ((s8 *)&data_0215b64c)[2] != ((s8 *)&data_0215b678[idx])[2]) {
                            data_0215b678[idx] = data_0215b64c;
                        }
                    }
                    sv = (psVar7 + uVar17)[3];
                    uVar17 = uVar17 + 1;
                    iVar13 = (sv * 0x96) / 100;
                    pcVar10 = data_0215b650;
                    iVar13 = iVar13 + (s8)*pcVar10 * 0x40;
                    if (iVar13 > 0x7ff0) {
                        iVar9 = 0x7ff0;
                    } else if (iVar13 < -0x7ff0) {
                        iVar9 = -0x7ff0;
                    } else {
                        iVar9 = iVar13;
                    }
                    asStack[iVar16] = iVar9;
                    val = asStack[iVar16];
                    data_0215b650 = data_0215b650 + 1;
                    iVar16 = 1 + iVar16;
                    *pcVar10 = (val >> 8);
                } while (iVar16 < 2);
                pbVar12 = data_0215b648;
                data_0215b648 = pbVar12 + 1;
                func_020dffa0(asStack, pbVar12, 2, &data_0215b64c);
            } while (uVar8 > uVar17);
        }
        data_0215b674 = uVar8 + data_0215b674;
        iVar14 = data_0215b66c;
        if (1 == iVar14) {
            func_020e184c();
        } else if (data_0215b674 == data_02144a80) {
            func_020dfc38();
            func_020dfd0c(8000);
            func_020dfc94();
            data_0215b670 = 0;
        }
    }
    if (data_02144a7c >= 40) {
        return;
    }
    if (data_0215b658 == 0) {
        return;
    }
    uVar11 = data_02144a80 / 40u;
    func_020e0240(data_0215b658, data_0215b654, data_02144a7c * uVar11,
                  (data_02144a7c + 1) * uVar11, data_0215b65c);
    data_02144a7c = data_02144a7c + 1;
    data_0215b65c += data_02144a80 / 40u;
}
