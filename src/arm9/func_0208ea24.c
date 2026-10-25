#include "ctx.h"

extern s16 data_02126868[];
extern u8 *func_020038b8(u8 *p, s32 n);
extern void func_0208eeb0(u8 *p);
extern void func_0208f544(u8 *p, u32 f);
extern void func_0208eb68(void);
extern void func_02067e34(u8 *a, u8 *b, u8 *c);
extern void func_02006a30(u8 *a, u8 *b);
extern void func_02067d04(u8 *a, u8 *b, u8 *c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

u8 *func_0208ea24(u8 *param_1)
{
    u8 *puVar3;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 uVar4;
    s32 k;
    s32 m;
    s32 v7c;

    puVar3 = func_020038b8(param_1, 0x84);
    func_0208eeb0(puVar3);
    func_0208f544(puVar3, (u32)func_0208eb68);
    *(s32 *)(puVar3 + 0x7c) = 0x5000;
    *(u16 *)(puVar3 + 0x80) = 0x600;
    *(u16 *)(puVar3 + 0x82) = 0;
    k = (*(u16 *)(puVar3 + 0x80) >> 4) * 2;
    m = (*(u16 *)(puVar3 + 0x82) >> 4) * 2;
    t1 = data_02126868[k + 1];
    t2 = data_02126868[m];
    v7c = *(s32 *)(puVar3 + 0x7c);
    uVar4 = FX_Mul(v7c, t1);
    *(s32 *)(puVar3 + 0x30) = *(s32 *)(puVar3 + 0x3c) + FX_Mul(uVar4, t2);
    t3 = data_02126868[k];
    *(s32 *)(puVar3 + 0x34) = *(s32 *)(puVar3 + 0x40) + FX_Mul(v7c, t3);
    t4 = data_02126868[m + 1];
    *(s32 *)(puVar3 + 0x38) = *(s32 *)(puVar3 + 0x44) + FX_Mul(uVar4, t4);
    func_02067e34(puVar3 + 0x3c, puVar3 + 0x30, puVar3 + 0x48);
    func_02006a30(puVar3 + 0x48, puVar3 + 0x48);
    func_02067d04(puVar3 + 0x54, puVar3 + 0x48, puVar3 + 0x60);
    func_02006a30(puVar3 + 0x60, puVar3 + 0x60);
    return puVar3;
}
