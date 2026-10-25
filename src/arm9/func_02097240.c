#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f130;

extern void func_02080d08(u8 *a);
extern void func_02080d84(u8 *a);

typedef struct {
    u8 bytes[16];
    u8 hdr[24];
    u16 cnt1;
    u16 arr1[26];
    u16 cnt2;
} Loc;

void func_02097240(u8 *p)
{
    Loc L;
    u8 *obj;
    u8 *o1;
    u8 *o2;
    s32 i;
    s32 j;
    u32 mk;
    u32 sum;
    u16 iv16;

    func_02080d08(L.hdr);
    func_02080d84(L.bytes);
    obj = data_0214f130;
    o1 = obj + 0x1c;
    L.bytes[13] = (u8)*(u32 *)(obj + 0x1c);
    L.bytes[12] = (u8)*(u32 *)(o1 + 4);
    L.bytes[11] = (u8)*(u32 *)(o1 + 8);
    o2 = obj + 0x2c;
    L.bytes[10] = (u8)*(u32 *)(obj + 0x2c);
    i = 0;
    L.bytes[9] = (u8)*(u32 *)(o2 + 4);
    L.bytes[8] = (u8)*(u32 *)(o2 + 8);
    L.bytes[14] = i;
    L.bytes[15] = i;
    mk = 0x10dcd;
    p[0] = L.bytes[5];
    p[1] = L.bytes[4];
    p[2] = L.bytes[3];
    sum = *(u32 *)(L.bytes + 8) + *(u32 *)(L.bytes + 12);
    iv16 = (u16)(sum * mk + 1);
    p[3] = (u8)(iv16 >> 8);
    p[4] = L.bytes[2];
    p[5] = (u8)iv16;
    p[6] = L.bytes[1];
    p[7] = L.bytes[0];

    if ((s32)L.cnt1 > 0) {
        do {
            if (i < 10) {
                u16 *s2 = (u16 *)(L.hdr + i * 2);
                u16 *d2 = (u16 *)(p + i * 2);
                d2[6] = s2[2];
            }
            i = (s16)(i + 1);
        } while (i < L.cnt1);
    }
    j = 0;
    if ((s32)L.cnt2 > 0) {
        do {
            if (j < 26) {
                u16 *s3 = (u16 *)(L.hdr + j * 2);
                u16 *d3 = (u16 *)(p + j * 2);
                d3[17] = s3[13];
            }
            j = (s16)(j + 1);
        } while (j < L.cnt2);
    }
    *(u16 *)(p + 0x58) = 0;
    p[90] = L.hdr[2];
    p[91] = L.hdr[3];
}
