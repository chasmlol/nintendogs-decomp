#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad[0x52];
    s16 v;
} Blk1;

extern s32 *data_0215be34;
extern void *data_02139f10[];
extern void *data_02139ea4[];
extern void func_020264f4(u8 *);
extern void func_020255a4(u8 *);
extern void func_0202da00(u8 *, s32);
extern void func_02081198(s32, s32, void *);
extern void func_0209eeec(s32, s32);
extern void func_02023590(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0215e984(u8 *p)
{
    s32 *q;
    s32 val;

    ((Blk1 *)(p + 0x100))->v = 0x1e7;
    SwapByte(4, p + 151);
    func_020264f4(p);
    func_020255a4(p);
    func_0202da00(p, 7);
    q = data_0215be34;
    func_02081198(q != 0 ? *q : 0, 15, data_02139f10[*(s8 *)(p + 0x88)]);
    q = data_0215be34;
    func_02081198(q != 0 ? *q : 0, 16, data_02139ea4[*(s8 *)(p + 0x88)]);
    func_0209eeec(0x1e, 0x7f);
    func_02023590(p);
}
