#pragma avoid_byte strb
#include "ctx.h"

typedef struct Slot {
    u16 w0;
    u16 w2;
    u8 pad4[4];
    u8 b8;
    u8 b9;
    u8 b10;
    u8 b11;
    u8 b12;
    u8 b13;
    u8 b14;
    u8 b15;
    u8 pad16[24];
    u8 cnt[20];
} Slot;

typedef struct Src {
    u8 pad0[0x1c];
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
} Src;

extern Src *data_0214f130;
extern u8 *data_0214f464;
extern void func_020dd5fc(s32 a, s32 b);
extern u8 *func_020a2848(void);
extern void func_0206c880(u8 *a, u8 *b, u32 n);

static inline Slot *GetSlot(u8 *p, s16 sel)
{
    if (sel < 0 || sel >= 20) {
        return 0;
    }
    return (Slot *)(*(u8 **)(p + 0x9e8) + 144 + sel * 60);
}

void func_02023ea0(u8 *param_1)
{
    u32 w;
    u32 bv;
    u8 *a;
    u8 *b;
    s32 c;
    s16 sel;

    sel = *(s16 *)(param_1 + 0xf6);
    w = *(u16 *)(param_1 + 0xf4);
    bv = *(u8 *)(param_1 + 0xa7);
    {
        Slot *pu = GetSlot(param_1, sel);
        *(u8 *)(param_1 + 0xd2) = 1;
        *(u8 *)(param_1 + sel + 0xd3) = 1;
        pu->w2 = 1;
        pu->w0 = (u16)w;
        {
            Src *iv = data_0214f130;
            u32 *q1 = (u32 *)((u8 *)iv + 0x1c);
            u32 *q2 = (u32 *)((u8 *)iv + 0x2c);
            pu->b13 = iv->f1c;
            pu->b12 = q1[1];
            pu->b11 = q1[2];
            pu->b10 = iv->f2c;
            pu->b9 = q2[1];
            pu->b8 = q2[2];
        }
        pu->b14 = 0;
        pu->b15 = 0;
    }
    func_020dd5fc(*(s8 *)(param_1 + 0x88), sel);
    if (w >= 79 && w < 99) {
        c = *(s8 *)(param_1 + 0x88);
        a = func_020a2848();
        if (*(s8 *)(data_0214f464 + c + 0x19) != 0) {
            b = data_0214f464 + 0x64c8 + c * 0x500 + sel * 0x40;
        } else {
            b = 0;
        }
        func_0206c880(a, b, 0x40);
    }
    {
        u32 k;
        Slot *pz = GetSlot(param_1, sel);
        if (pz != 0) {
            k = 0;
            do {
                pz->cnt[k] = 0;
                k = (k + 1) & 0xff;
            } while (k < 20);
        }
    }
    {
        Slot *pt = GetSlot(param_1, sel);
        if (pt != 0) {
            u8 old = pt->cnt[bv];
            pt->cnt[bv] = old + 1;
        }
    }
}
