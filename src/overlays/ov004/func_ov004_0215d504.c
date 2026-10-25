#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    s32 w0;
    u16 h4;
    s16 h6;
    s16 h8;
    u16 h10;
    s32 w12;
} Blk;

extern u8 *data_ov004_02170320;
extern Blk data_ov004_0216ff0c;
extern Blk data_ov004_0216ff1c;
extern u8 *data_02159424;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern void func_0210b614(s32 a, s32 b, void *c, void *d, s32 e, s32 f);

void func_ov004_0215d504(void)
{
    Blk A;
    Blk B;
    u8 *pc;
    u8 *base;
    s32 iVar5;
    s32 iVar6;
    u8 bVar1;
    u8 bVar2;
    u8 *iVar8;
    u32 uVar9;
    u32 pv;
    u32 uq;
    u32 ux;
    u8 *G;
    s32 cnt;

    A = data_ov004_0216ff0c;
    pc = data_ov004_02170320;
    if (*(s8 *)pc == 4) {
        iVar5 = 0x20;
        if (*(s32 *)(pc + 0x339c) >= 0x19a && *(s32 *)(pc + 0x339c) < 0x1000) {
            iVar8 = *(u8 **)(pc + 0x36c4);
            bVar1 = pc[0x1c];
            cnt = *(s32 *)(iVar8 + 0x2264);
            iVar6 = (s32)(iVar8 + cnt * 2);
            bVar2 = *(u8 *)(iVar6 + 0xc);
            if (0 < cnt) {
                bVar1 = *(u8 *)(iVar6 + 10);
            }
            if (bVar2 <= bVar1) {
                goto SW1;
            }
            base = iVar8 + 0x2000;
            SwapByte(0, base + 0x317);
            goto SWE;
        SW1:
            if (bVar2 < bVar1) {
                base = iVar8 + 0x2000;
                SwapByte(1, base + 0x317);
            }
        SWE:
            ;
        }
        G = data_ov004_02170320;
        if (*(s32 *)(G + 0xc) != 0) {
            if (*(u8 *)(*(u8 **)(G + 0x36c4) + 0x2317) == 0) {
                iVar5 = 0x22;
            }
        } else {
            if (*(u8 *)(*(u8 **)(G + 0x36c4) + 0x2317) != 0) {
                iVar5 = 0x21;
            } else {
                iVar5 = 0x23;
            }
        }
        G = data_ov004_02170320;
        A.h6 = *(s32 *)(G + 0x3394) + 4;
        A.h8 = *(s32 *)(G + 0x3398) + 4;
        func_0210b614(*(s32 *)(G + 0x33d8), *(s32 *)(G + 0x33d4), *(void **)(data_02159424 + 0x10), &A, 0, iVar5);
        return;
    }
    if (*(s32 *)(pc + 0x12f4) != 0) {
        A.h6 = (u16)(*(u8 **)(pc + 0x36c4))[0] * 8 - *(s16 *)(*(u8 **)(pc + 0x36c4) + 2) + 4;
        A.h8 = (u16)(*(u8 **)(pc + 0x36c4))[1] * 8 - *(s16 *)(*(u8 **)(pc + 0x36c4) + 4) + 4;
        func_0210b614(*(s32 *)(pc + 0x33d8), *(s32 *)(pc + 0x33d4), *(void **)(data_02159424 + 0x10), &A, 0, 0xe);
        return;
    }
    A.h6 = (u16)(*(u8 **)(pc + 0x36c4))[0] * 8 - *(s16 *)(*(u8 **)(pc + 0x36c4) + 2) + 14;
    A.h8 = (u16)(*(u8 **)(pc + 0x36c4))[1] * 8 - *(s16 *)(*(u8 **)(pc + 0x36c4) + 4) - 3;
    if (*(s32 *)(*(u8 **)(pc + 0x36c4) + 8) == 0) {
        B = data_ov004_0216ff1c;
        pv = *(u32 *)(pc + 4);
        uq = pv / 60u;
        ux = pv % 60u;
        uVar9 = (ux * 4u) / 30u;
        if (uVar9 >= 4) {
            uVar9 = 8 - uVar9;
        }
        B.h6 = A.h6 - 18;
        G = data_ov004_02170320;
        B.h8 = A.h8 - 12 + uVar9;
        func_0210b614(*(s32 *)(G + 0x33d8), *(s32 *)(G + 0x33d4), *(void **)(data_02159424 + 0x10), &B, 0, 0xd);
    }
    iVar6 = (*(s32 *)(data_ov004_02170320 + 0xc) != 0) ? 11 : 12;
    G = data_ov004_02170320;
    func_0210b614(*(s32 *)(G + 0x33d8), *(s32 *)(G + 0x33d4), *(void **)(data_02159424 + 0x10), &A, 0, iVar6);
    G = data_ov004_02170320;
    if (*(s32 *)(G + 0x20) == 0) {
        return;
    }
    A.h6 = (u16)(*(u8 **)(G + 0x36c4))[0] * 8 - *(s16 *)(*(u8 **)(G + 0x36c4) + 2) + 4;
    A.h8 = (u16)(*(u8 **)(G + 0x36c4))[1] * 8 - *(s16 *)(*(u8 **)(G + 0x36c4) + 4) + 4;
    iVar6 = (*(s32 *)(G + 0xc) != 0) ? 9 : 10;
    G = data_ov004_02170320;
    func_0210b614(*(s32 *)(G + 0x33d8), *(s32 *)(G + 0x33d4), *(void **)(data_02159424 + 0x10), &A, 0, iVar6);
}
