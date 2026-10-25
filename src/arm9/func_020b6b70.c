#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213274c;
extern u8 *data_0215945c;
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_02006700(s32 a, void *b);
extern void func_0208c604(u8 *a, s32 b);
extern void func_02090f40(u8 *a, s32 b);
extern s32 func_0209aaf0(void);
extern void func_02096264(u8 *a, s32 b, s32 c);
extern u8 *func_020b6ce0(u8 *a);
extern void func_020075c8(u8 *a);
extern u8 *func_020038b8(u8 *a, s32 b);
extern void func_020042e8(u8 *a);
extern void func_0209944c(void);
extern s32 func_0209638c(void);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern u32 func_020a1a40(u32 a);
extern void func_02005900(void);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020b6b70(void)
{
    u16 loc[2];
    u8 *p4;
    u8 *p5;
    s32 iv;
    u8 *pp;
    u8 **pslot;

    iv = func_02002e60();
    pp = func_02002e58(iv);
    loc[0] = 0xff;
    loc[1] = 0;
    func_020068c4(pp, loc);
    func_020068c0(pp, 4);
    func_02006700(0, func_020068a0);
    func_02006700(1, func_020067d8);
    func_02006700(2, func_02006734);
    func_0208c604(pp, 0);
    func_02090f40(pp, 1);
    if (func_0209aaf0() != 0) {
        func_02096264(pp, 3, 0);
    }
    p4 = func_020b6ce0(pp);
    func_020075c8(pp);
    p5 = func_020038b8(pp, 16);
    *(u16 *)p5 = 0;
    *(u16 *)(p5 + 2) = 0;
    *(u32 *)(p5 + 4) = 0;
    *(u32 *)(p5 + 8) = 0;
    pslot = &data_0215945c;
    (void)SwapByte(data_0213274c, (vu8 *)(p5 + 12));
    *pslot = p5;
    func_020042e8(p4);
    func_0209944c();
    if (func_0209638c() != 0) {
        func_02097b94(0, 0x4b1, 0, 0, 0);
        func_020a1a40(0x43);
    } else {
        *(u16 *)data_0215945c = 1;
        *(u16 *)(data_0215945c + 2) = 0;
        func_02097b94(1, 0x838, 0, 0, 0);
    }
    func_02005900();
}
