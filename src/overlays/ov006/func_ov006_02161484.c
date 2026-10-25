#include "ctx.h"

typedef volatile s32 vs32;
typedef volatile s8 vs8;
typedef u8 * volatile vpu8;
typedef struct { u32 w[3]; } T12;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_0214f45c[];
extern u8 data_0214f464[];
extern u8 data_0214f460[];
extern u8 data_02159444[];
extern s32 func_0200c498(s32 a, s32 b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern u32 func_02009f38(s32 *a, s32 *b);
extern u32 func_ov006_0216215c(u32 a, u32 b);
extern s32 func_020aaf38(u32 a, s32 *b, u32 c);
extern u32 func_02036434(u8 *p, u32 n);
extern void func_020362ec(u8 *p, u32 n);

void func_ov006_02161484(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4)
{
    s32 iVar11;
    s32 iVar5;
    s32 iVar10;
    s32 sum;
    u32 t2;
    s32 blk[3];
    s32 nine;
    s32 one;
    s32 zA;
    s32 zB;
    s32 zC;
    s32 zD;

    iVar11 = 0;
    if (*(s16 *)(*(u8 **)(*(u8 **)data_0214f45c + 0x20) + 0x26) <= 0) {
        return;
    }
    one = 1;
    zD = 0;
    zC = 0;
    zB = 0;
    zA = 0;
    nine = 9;
    do {
        iVar5 = func_0200c498(nine, iVar11);
        if (iVar5 != 0) {
            func_02067e34((s32 *)(iVar5 + 8), (s32 *)(param_1 + 0x2a0), blk);
            if (func_02009f38((s32 *)(param_1 + 0x1a4), blk) != 0) {
                sum = FX_Mul(blk[0], blk[0]) + FX_Mul(blk[2], blk[2]);
                t2 = *(u32 *)data_0214f460;
                iVar10 = func_020aaf38(t2, (s32 *)(iVar5 + 8),
                                       func_ov006_0216215c(*(u32 *)(iVar5 + 0x30), one));
                if (iVar10 != 0) {
                    if ((*(u16 *)(*(u8 **)data_02159444 + 0x84) & 2) != 0) {
                        iVar10 = (s16)*(s32 *)(iVar5 + 0x20);
                        if (((s8)param_1[0x89] > iVar10) && (*(s32 *)(iVar5 + 0x24) >= 0)) {
                            iVar10 = (s16)*(s32 *)(iVar5 + 0x24);
                        }
                        if (*(vs8 *)(param_1 + 0x89) == iVar10) {
                            *(s32 *)(*(u8 **)data_0214f464 + iVar11 * 4 + 0xa4) += 0x1f40000;
                            {
                            s32 *pq = (s32 *)*(vpu8 *)data_0214f464;
                            pq[0x98 / 4] = zA;
                        }
                        } else {
                            *(s32 *)(*(u8 **)data_0214f464 + iVar11 * 4 + 0xa4) += 0xfa0000;
                            {
                            s32 *pq = (s32 *)*(vpu8 *)data_0214f464;
                            pq[0x98 / 4] = zB;
                        }
                        }
                    } else {
                        iVar10 = (s16)*(s32 *)(iVar5 + 0x20);
                        if (((s8)param_1[0x89] > iVar10) && (*(s32 *)(iVar5 + 0x24) >= 0)) {
                            iVar10 = (s16)*(s32 *)(iVar5 + 0x24);
                        }
                        if (*(vs8 *)(param_1 + 0x89) == iVar10) {
                            *(s32 *)(*(u8 **)data_0214f464 + iVar11 * 4 + 0xa4) += 0x3e8000;
                            {
                            s32 *pq = (s32 *)*(vpu8 *)data_0214f464;
                            pq[0x98 / 4] = zC;
                        }
                        } else {
                            *(s32 *)(*(u8 **)data_0214f464 + iVar11 * 4 + 0xa4) += 0x1f4000;
                            {
                            s32 *pq = (s32 *)*(vpu8 *)data_0214f464;
                            pq[0x98 / 4] = zD;
                        }
                        }
                    }
                }
                sum = sum - *(s32 *)(*(u8 **)data_0214f464 + iVar11 * 4 + 0xa4);
                if (sum < *param_2) {
                    if (param_3 == 0 || func_02036434(param_1, (u32)(s16)(iVar11 + 0x2d)) != 0) {
                        *param_2 = sum;
                        func_020362ec(param_1, (u32)(s16)(iVar11 + 0x2d));
                    }
                    if (param_4 != 0) {
                        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(iVar5 + 8);
                    }
                }
            }
        }
        iVar11 = (s16)(iVar11 + 1);
    } while (iVar11 < *(s16 *)(*(u8 **)(*(u8 **)data_0214f45c + 0x20) + 0x26));
}
