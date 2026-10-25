#pragma avoid_byte strb
#include "ctx.h"

/* One dog's record in the 20-entry table at sub + 0x90 (60 bytes). */
typedef struct {
    u16 a;
    u16 cnt;
    u8 pad4[4];
    u8 b8[8];
    u8 pad16[0x28 - 0x10];
    u8 pts[20];
} Elem;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x90 - 0x14];
    Elem el[20];
} Sub;

extern u8 *data_0213a8d4[];
extern u8 data_021369a8[][5];
extern u8 *data_0214f130;
extern u8 *data_0214f464;
extern u8 *func_020a2848(void);
extern void func_0206c880(u8 *dst, u8 *src, u32 n);
extern void func_0202322c(u8 *p);

#define SUBOF(p) (*(Sub **)((p) + 0x9e8))

static inline void SwPB0(vu8 *p, u32 v)
{
    asm {
        swpb r0, v, [p]
    }
}

void func_020239b4(u8 *p, s32 param_2)
{
    u8 bVar11;
    s16 sVar4;
    u16 uVar2;
    Elem *pe;
    u32 st;

    uVar2 = *(u16 *)(p + 0xf4);
    bVar11 = p[0xa7];
    sVar4 = *(s16 *)(p + 0xf6);
    if (sVar4 < 0 || sVar4 >= 20) {
        pe = 0;
    } else {
        pe = &SUBOF(p)->el[sVar4];
    }

    if (param_2 == 0) {
        s32 bA;
        u32 uA;
        u32 uC;
        u8 *pA;
        if (pe != 0 && (uA = pe->a) != 0 && (uC = pe->cnt) != 0) {
            if (uA >= 79 && uA < 99) {
                pA = data_0213a8d4[79];
            } else {
                pA = data_0213a8d4[uA];
            }
            if ((s32)uC < (s32)data_021369a8[pA[2] - 1][SUBOF(p)->f13 - 1] - 1) {
                bA = 1;
                goto J1;
            }
        }
        bA = 0;
    J1:
        if (bA == 0) return;
    }

    p[0xd2] = 1;
    {
        u32 uP;
        uP = pe->cnt;
        if (uP >= 10000) return;
        pe->cnt = uP + 1;
    }
    {
        u32 *ps = (u32 *)data_0214f130;
        u32 *q1 = ps + 7;
        u32 *q2 = ps + 11;
        pe->b8[5] = (u8)ps[7];
        pe->b8[4] = (u8)q1[1];
        pe->b8[3] = (u8)q1[2];
        pe->b8[2] = (u8)ps[11];
        pe->b8[1] = (u8)q2[1];
        pe->b8[0] = (u8)q2[2];
        pe->b8[6] = 0;
        pe->b8[7] = 0;
    }

    if (uVar2 >= 79 && uVar2 < 99) {
        s8 cVar3;
        u8 *puVar8;
        u8 *puVar13;
        (p + sVar4)[0xd3] = 1;
        cVar3 = (s8)p[0x88];
        puVar8 = func_020a2848();
        if (*(s8 *)(data_0214f464 + cVar3 + 0x19) != 0) {
            puVar13 = data_0214f464 + 0x64c8 + cVar3 * 0x500 + sVar4 * 64;
        } else {
            puVar13 = 0;
        }
        func_0206c880(puVar8, puVar13, 0x40);
    }

    {
        Elem *pp;
        if (sVar4 < 0 || sVar4 >= 20) {
            pp = 0;
        } else {
            pp = &SUBOF(p)->el[sVar4];
        }
        if (pp != 0) {
            u8 *q = pp->pts;
            q[bVar11] = q[bVar11] + 1;
        }
    }

    if (pe == 0) {
        st = 0;
    } else {
        u32 uB;
        u32 uC2;
        u8 *pe2;
        if ((uB = pe->a) == 0) {
            st = 0;
        } else if ((uC2 = pe->cnt) == 0) {
            st = 0;
        } else {
            if (uB >= 79 && uB < 99) {
                pe2 = data_0213a8d4[79];
            } else {
                pe2 = data_0213a8d4[uB];
            }
            if ((s32)uC2 < (s32)data_021369a8[pe2[2] - 1][SUBOF(p)->f13 - 1]) {
                st = 1;
            } else {
                st = 2;
            }
        }
    }

    if (st == 2) {
        s32 iVar12;
        s32 cnt;
        u8 *pe79;
        pe79 = data_0213a8d4[79];
        cnt = 0;
        iVar12 = 0;
        do {
            Elem *pz;
            u8 *pe;
            u32 uV;
            u32 uD;
            s32 iVar10;
            if (iVar12 < 0 || iVar12 >= 20) {
                pz = 0;
            } else {
                pz = &SUBOF(p)->el[(s16)iVar12];
            }
            if (pz == 0) {
                iVar10 = 0;
            } else {
                uV = pz->a;
                if (uV == 0) {
                    iVar10 = 0;
                } else if ((uD = pz->cnt) == 0) {
                    iVar10 = 0;
                } else {
                    if (uV >= 79 && uV < 99) {
                        pe = pe79;
                    } else {
                        pe = data_0213a8d4[uV];
                    }
                    if ((s32)uD < (s32)data_021369a8[pe[2] - 1][SUBOF(p)->f13 - 1]) {
                        iVar10 = 1;
                    } else {
                        iVar10 = 2;
                    }
                }
            }
            if (iVar10 == 2) {
                cnt = (s16)(cnt + 1);
            }
            iVar12 = (s16)(iVar12 + 1);
        } while (iVar12 < 20);

        if (cnt <= 15) {
            u32 uMaxI;
            u32 uIdx;
            u8 bMax;
            u8 bV;
            uMaxI = 0;
            bMax = 0;
            uIdx = 0;
            do {
                bV = pe->pts[uIdx];
                if (bMax < bV) {
                    uMaxI = uIdx;
                    bMax = bV;
                }
                uIdx = (uIdx + 1) & 0xff;
            } while (uIdx < 20);
            pe->pts[0] = (u8)uMaxI;

            if (uVar2 >= 28 && uVar2 <= 34) {
                p[0xd2] = 1;
                *(u16 *)((u8 *)SUBOF(p) + (((s32)((uVar2 - 28) * 0x10000)) >> 15) + 0x7e8) = uVar2;
            }
            func_0202322c(p);
            p[0xa8] = 0;
            *(u16 *)(p + 0x112) = 0;
            *(u16 *)(p + 0xf0) = 8;
            p[0xa5] = 0;
            data_0214f464[0xf] = 5;
            return;
        } else {
            pe->cnt = pe->cnt - 1;
            data_0214f464[0xf] = 6;
            return;
        }
    } else {
        if (param_2 == 0) return;
        p[0xa8] = 0;
        *(u16 *)(p + 0x112) = 0;
        *(u16 *)(p + 0xf0) = 5;
        p[0xa5] = 0;
        SwPB0((vu8 *)(data_0214f464 + 0xf), 3);
        return;
    }
}
