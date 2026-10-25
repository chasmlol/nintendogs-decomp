#include "ctx.h"

extern u8 *data_0215be48;

typedef u8 *PU8;

u64 func_02080858(void);
u64 func_0205e068(u32 a, u32 b, u32 c, u32 d);
void func_020fdb24(void);
void func_020fc99c(void);
void func_020fd0d0(void);
void func_02102b1c(u8 *p);
void func_020fd878(void);
void func_020fd2f0(void);

void func_020fcf7c(void)
{
    u64 lVar11;
    u64 uVar12;
    u64 old;
    u64 diff;
    u8 *base;

    lVar11 = func_02080858();
    diff = 0;
    {
        u8 *Q = data_0215be48 + 0x4000;
        old = *(u64 *)(Q + 0x84c);
    }
    if (lVar11 > old) {
        diff = lVar11 - old;
    }
    base = *(PU8 volatile *)&data_0215be48;
    {
        u8 *Q2 = base + 0x4000;
        *(u64 *)(Q2 + 0x84c) = lVar11;
    }
    uVar12 = func_0205e068((u32)(diff * 64000), (u32)((diff * 64000) >> 32), 0x82ea, 0);
    uVar12 = func_0205e068((u32)(uVar12 * 60000), (u32)((uVar12 * 60000) >> 32), 1000000, 0);
    *(u32 *)(base + 0x4000 + 0x854) = ((u32)uVar12 << 12) / 1000;
    if (*(s32 *)(data_0215be48 + 0xb0) == 0) {
        func_020fdb24();
        func_020fc99c();
        *(u32 *)(data_0215be48 + 0x48c0) = 0;
        *(u32 *)(data_0215be48 + 0x48c4) = 0;
        *(u32 *)(data_0215be48 + 0x4874) = 0;
        *(u32 *)(data_0215be48 + 0x48b8) = 0;
        *(u32 *)(data_0215be48 + 0x48bc) = 0;
        func_020fd0d0();
        func_02102b1c(data_0215be48 + 0x5028);
        func_020fd878();
        func_020fd2f0();
        return;
    }
}
