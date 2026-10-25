#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s16 data_02159470;
extern u8 *data_02159444;

extern void func_020bdd1c(u8 *p, s32 a);
extern void func_020c1ba0(void);
extern void func_020c1810(void);
extern void func_020c1d40(void);
extern u32 func_020038b8(u8 *p, u32 v);
extern s32 func_01ffdb08(s32 a);
extern s32 func_0206782c(s32 a);

void func_020c1d60(u8 *p, u8 *p2)
{
    s32 iVar9;
    s32 iVar8;
    u8 *t;
    s32 iVar5;
    s32 v;
    u32 vv;
    u8 *piVar3;

    func_020bdd1c(p, data_02159470);
    *(u32 *)(p + 0x1f4) = (u32)func_020c1ba0;
    *(u32 *)(p + 0x1f8) = (u32)func_020c1810;
    *(u32 *)(p + 0x1f0) = (u32)func_020c1d40;
    *(u32 *)(p + 0x214) = func_020038b8(p2, 0x20);
    iVar8 = 0;
    t = (u8 *)*(u32 *)(p + 0x214);
    iVar9 = 0;
    do {
        *(u32 *)(t + iVar9 * 4 + 0x14) = 0;
        iVar5 = func_01ffdb08(iVar9);
        if (iVar5 != 0) {
            iVar8 = iVar8 + 1;
        }
        iVar9 = (s16)(iVar9 + 1);
    } while (iVar9 < 3);
    *(s32 *)(t + 4) = iVar8 << 12;
    v = func_0206782c(iVar8 << 12);
    *(s32 *)(t + 0xc) = FX_Mul(v, 4096);
    vv = *(u32 *)(t + 0xc);
    *(u32 *)(p + 0x24) = vv;
    *(u32 *)(p + 0x28) = vv;
    *(u32 *)(p + 0x2c) = vv;
    *(u32 *)(p + 0x28) = 4096;
    piVar3 = data_02159444;
    *(s32 *)(t + 8) = (s32)*(s16 *)(piVar3 + 0x10c) << 12;
    *(s32 *)(t + 0x10) = FX_Mul(*(s32 *)(t + 0xc), 0xccd);
}
