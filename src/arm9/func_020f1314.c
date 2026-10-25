#include "ctx.h"

extern u8 data_0213332c[];
extern s32 data_02133328;
extern u8 data_02133064[];
extern u8 data_02133398[];
extern u8 data_02133399[];

extern s32 func_02080858(s32 a, s32 b, s32 c);
extern s32 func_020939e8(void);

u8 *func_020f1314(s32 a, s32 b, s32 c)
{
    s32 sum;
    u8 *tb;
    u8 *e;
    s32 thr;
    s32 cnt;
    u32 x;
    u32 v1;
    s32 r;
    s32 pb;
    s32 r6;
    s32 pcc;
    s32 pa;
    s32 i;
    u8 m;

    asm { mov pb, b }
    asm { mov pa, a }
    asm { mov pcc, c }
    r = func_02080858(a, b, c);
    sum = 0;
    if (pb != 0) {
        if (pa < 300) {
            r6 = 0;
        }
        if (pa >= 300 && pa < 5000) {
            r6 = 1;
        }
        if (pa >= 5000) {
            r6 = 2;
        }
    } else {
        if (pa < 300) {
            r6 = 3;
        }
        if (pa >= 300 && pa < 5000) {
            r6 = 4;
        }
        if (pa >= 5000) {
            r6 = 5;
        }
    }
    v1 = *(u16 *)(data_0213332c + pcc * 12 + r6 * 2);
    x = (u16)(r * 0x10dcd + 1);
    thr = (u16)((v1 * x) >> 16);
    cnt = data_02133328;
    i = 0;
    if (cnt > 0) {
    e = data_02133064 + pcc * 3;
    tb = data_02133398 + r6;
    do {
        switch ((tb + i * 8)[2]) {
        case 0:
            sum += e[0];
            break;
        case 1:
            sum += e[1];
            break;
        case 2:
            sum += e[2];
            break;
        case 3:
            sum += e[0];
            break;
        case 4:
            sum += e[1];
            break;
        case 5:
            sum += e[2];
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            break;
        default:
            break;
        }
        if (thr < sum) {
            m = data_02133398[i * 8];
            if ((m == 0 && data_02133399[i * 8] == 28) || (m == 1 && data_02133399[i * 8] == 52) || (m == 1 && data_02133399[i * 8] == 53)) {
                if (func_020939e8() < 20000) {
                    return data_02133398;
                }
            }
            return data_02133398 + i * 8;
        }
        i = i + 1;
    } while (i < cnt);
    }
    return 0;
}
