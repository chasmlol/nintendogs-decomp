#include "ctx.h"

extern u8 data_0213e580[];
extern void func_020776d4(u32 a, u32 *b, s32 c);
extern void func_020777d0(u8 *a, u32 b);

void func_020774c0(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 blk[26];
    vu32 spill;
    u8 *s;
    u8 *q;
    u8 *puVar1;
    int qo;
    u32 st;
    u32 v20;
    u8 *iVar2;
    u8 *yy;
    u32 fp;

    iVar2 = *(u8 **)(param_1 + 0x1c);
    if ((s32)iVar2 != 0x1000) {
        blk[20] = (u32)iVar2;
        blk[21] = (u32)iVar2;
        blk[22] = (u32)iVar2;
        func_020776d4(0x1b, &blk[20], 3);
    }
    if (param_4 != 0) {
        q = param_1 + *(s32 *)(8 + param_1);
        qo = *(u16 *)(q + 10);
        st = *(u16 *)(q + 4 + qo);
        yy = (u8 *)(st * param_2 + (u32)(q + 4 + qo));
        s = q + *(s32 *)(yy + 4);
        if ((*(u32 *)(s + 0xc) & 0x1f0000) == 0) {
            return;
        }
        spill = 0x293130;
        blk[0] = *(u32 *)(s + 4);
        blk[1] = *(u32 *)(s + 8);
        blk[2] = *(u32 *)(s + 0xc);
        if ((*(u16 *)(s + 0x1e) & 0x20) != 0) {
            blk[2] &= 0xffe0ffff;
        }
        blk[3] = 0x2b2a;
        blk[4] = *(u32 *)(s + 0x14);
        blk[5] = (u32)*(u16 *)(s + 0x1c);
        func_020776d4(spill, &blk[0], 6);
        if ((*(u16 *)(s + 0x1e) & 1) != 0) {
            fp = *(u32 *)(data_0213e580 + *(u8 *)(param_1 + 0x16) * 4);
            blk[6] = 8;
            *(u16 *)&blk[17] = *(u16 *)(s + 0x20);
            puVar1 = s + 0x2c;
            *(u16 *)((u8 *)blk + 0x46) = *(u16 *)(0x22 + s);
            blk[18] = *(u32 *)(0x24 + s);
            blk[19] = *(u32 *)(s + 0x28);
            if ((*(u16 *)(s + 0x1e) & 2) == 0) {
                blk[12] = *(u32 *)puVar1;
                blk[13] = ((u32 *)puVar1)[1];
                puVar1 = puVar1 + 8;
            } else {
                blk[6] |= 1;
            }
            if ((*(u16 *)(s + 0x1e) & 4) == 0) {
                *(u16 *)&blk[14] = *(s16 *)puVar1;
                *(u16 *)((u8 *)blk + 0x3a) = *(s16 *)(puVar1 + 2);
                puVar1 += 4;
            } else {
                blk[6] |= 2;
            }
            if ((*(u16 *)(0x1e + s) & 8) == 0) {
                blk[15] = *(u32 *)puVar1;
                blk[16] = *(u32 *)(puVar1 + 4);
            } else {
                blk[6] |= 4;
            }
            ((void (*)(u32 *))fp)(&blk[6]);
        }
    }
    q = param_1 + *(s32 *)(param_1 + 0xc);
    qo = *(u16 *)(q + 6);
    st = *(u16 *)(q + qo);
    yy = (u8 *)(st * param_3 + (u32)(q + qo));
    s = q + *(s32 *)(yy + 4);
    func_020777d0(s + *(s32 *)(8 + s), *(u32 *)(s + 0xc));
    v20 = *(u32 *)(param_1 + 0x20);
    if (v20 == 0x1000) {
        return;
    }
    blk[23] = v20;
    blk[24] = v20;
    blk[25] = v20;
    func_020776d4(0x1b, &blk[23], 3);
}
