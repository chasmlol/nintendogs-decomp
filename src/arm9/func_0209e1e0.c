#include "ctx.h"

void func_02070938(void *p, s32 a);
void func_020709f8(void *p, s32 a, s32 b);
void func_02070838(void *p, s32 a, s16 *b);
void func_02070c18(void *p, s32 a);
void func_020a302c(void);
void func_020a0118(void);
void func_020a3b88(void *p, void *q);
void func_020e150c(void);
void func_0209e76c(void);

extern s16 data_02159148;
extern u8 data_02159198[];
extern u8 *data_0214204c[];
extern u8 data_021591a0[];

void func_0209e1e0(void)
{
    s32 xs;
    s32 ld;
    s16 local_20[4];
    u8 *r8 = data_02159198;
    u8 *r7 = data_021591a0;
    u8 *r6;
    s32 iVar4;
    u8 *tbl;
    s32 iVar3;
    s32 prod;
    s32 x8;
    s32 kc;
    s32 lo;
    s32 hi;

    r6 = 0;
    if (data_02159148 != -1) {
        r6 = data_0214204c[data_02159148];
    }
    if (r6 != 0 && r6[1] == '0') {
        if (*(s32 *)r8 != 0) {
            if (*(s32 *)(r8 + 0x40) != 0) {
                local_20[0] = -1;
                iVar4 = *(s16 *)(r8 + 50) + 256;
                tbl = *(u8 **)(data_02159198 + 0x54);
                func_02070938(r8, iVar4);
                func_020709f8(r8, 0xffff, *(s16 *)(tbl + (*(s16 *)(r8 + 50) + 100) * 2));
                if (*(s32 *)(r8 + 0x4c) == 0) {
                    func_020709f8(r7, 0xffff, *(s16 *)(r8 + 50) << 1);
                }
                func_02070838(r8, 3, local_20);
                iVar3 = local_20[0];
                if (iVar3 > 0 && iVar3 != *(s16 *)(r8 + 52)) {
                    prod = iVar3 * *(s32 *)(r6 + 4);
                    *(s32 *)(r8 + 0x3c) = (prod << 8) / 127;
                    *(s16 *)(r8 + 52) = iVar3;
                    if (*(s16 *)(r6 + 2) == 0x16 && local_20[0] == 0x3b) {
                        func_020a302c();
                    }
                } else {
                    *(s32 *)(r8 + 0x3c) += (iVar4 << 8) / 256;
                }
                {
                    u8 *p0 = data_02159198;
                    if (data_02159148 == 90) {
                        func_020a0118();
                    } else {
                        func_020a3b88(p0, p0 + 0x12);
                    }
                }
            }
            if (data_02159148 == 100) {
                func_020e150c();
            }
        } else {
            if (*(u16 *)(r8 + 56) == 0 && *(s32 *)(r8 + 0x40) != 0) {
                func_02070c18(r7, 60);
                *(s32 *)(r8 + 0x3c) = -1;
                *(s32 *)(r8 + 0x4c) = 0;
            }
        }
    }
    if (*(s32 *)(r8 + 0x44) != 0) {
        if (*(s32 *)(r8 + 0x48) == 0) {
            func_02070c18(r7, 0);
            *(s32 *)(r8 + 0x44) = 0;
        }
        if (*(s32 *)r7 != 0) {
            func_020709f8(r7, 0xffff, *(s16 *)(r8 + 50) << 1);
        }
        *(s32 *)(r8 + 0x48) = 0;
    } else {
        if (*(s32 *)r8 == 0 && *(s32 *)(r8 + 0x40) != 0) {
            *(u16 *)(r8 + 56) += 1;
            if (*(u16 *)(r8 + 56) > 30) {
                func_0209e76c();
                *(u16 *)(r8 + 56) = 0;
            }
        }
    }
    if (*(s32 *)(r8 + 0x4c) == 0) {
        return;
    }
    if (!(*(s32 *)r7 != 0 && *(s32 *)(r8 + 0x50) != 0)) {
        func_02070c18(r7, 0);
        *(s32 *)(r8 + 0x4c) = 0;
    }
    *(s32 *)(r8 + 0x50) = 0;
}
