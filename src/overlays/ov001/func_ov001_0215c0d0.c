#include "ctx.h"

extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern u8 *func_02003568(u8 *a);
extern void func_020068c4(u8 *p, u16 *q);
extern void func_020068c0(u8 *p, s32 a);
extern void func_02006700(s32 a, void *fn);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov001_0215c390(void);
extern u8 *func_ov001_0215c234(u8 *p);
extern void func_020042e8(u8 *p);
extern void func_02090f40(u8 *p, u32 a);
extern void func_020fe06c(u32 a, u8 *p);
extern void func_020fc898(void *p);
extern void func_020fc880(void *p);
extern void func_ov001_0215cd7c(u8 *p, s16 a);
extern u64 func_0209af44(u32 a);
extern void func_02005900(u32 a, u32 b);
extern void func_0206c7f0(u32 data, void *dest, u32 size);

typedef struct {
    u16 num;
    u16 used;
    void *buf;
} OamBuf;

extern OamBuf *func_02006cc4(u8 *p, u32 a);

static inline void MI_CpuFill32(void *dest, u32 data, u32 size)
{
    volatile u32 d = data;
    func_0206c7f0(d, dest, size);
}

void func_ov001_0215c0d0(s32 param_1)
{
    u8 *work;
    OamBuf *oam1;
    OamBuf *oam2;
    u64 r;
    u16 local[2];

    work = func_02002e58(func_02002e60());
    work = func_02003568(work);
    local[0] = 0xff;
    local[1] = 0;
    func_020068c4(work, local);
    func_020068c0(work, 4);
    func_02006700(0, func_020068a0);
    func_02006700(1, func_020067d8);
    func_02006700(2, func_02006734);
    func_02006700(3, func_ov001_0215c390);
    func_020042e8(func_ov001_0215c234(work));
    *(vu16 *)0x04000304 |= 0x8000;
    func_02090f40(work, 10);
    func_02090f40(work, 0);
    func_020fe06c(13, work);
    oam1 = func_02006cc4(work, 128);
    oam2 = func_02006cc4(work, 128);
    oam1->used = 0;
    MI_CpuFill32(oam1->buf, 0xc0, oam1->num << 3);
    oam2->used = 0;
    MI_CpuFill32(oam2->buf, 0xc0, oam2->num << 3);
    func_020fc898(oam1);
    func_020fc880(oam2);
    func_ov001_0215cd7c(work, param_1);
    r = func_0209af44(4);
    func_02005900((u32)r, (u32)(r >> 32));
}
