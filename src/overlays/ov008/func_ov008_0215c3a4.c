#include "ctx.h"

extern u8 data_0214efdc[];
extern u8 *data_ov008_0215c6e0;

extern void func_0208f85c(u8 *p, u32 a);
extern void func_0206793c(s32 a, u32 *b, u32 *c, u32 *d);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);
extern void func_01ffe474(u8 *p);

void func_ov008_0215c3a4(u8 *param_1)
{
    s32 iVar1;
    s32 v2;
    u32 a1;
    u32 L[9];
    u32 t1;
    u32 t2;
    u32 t3;

    iVar1 = *(s32 *)(param_1 + 0x88);
    if ((u16)(*(u16 *)data_0214efdc & 0x40) != 0) {
        *(s32 *)(param_1 + 0x88) = iVar1 + 1;
    }
    if ((u16)(*(u16 *)data_0214efdc & 0x80) != 0) {
        *(s32 *)(param_1 + 0x88) = *(s32 *)(param_1 + 0x88) - 1;
    }
    v2 = *(s32 *)(param_1 + 0x88);
    if (iVar1 != v2) {
        a1 = 0;
        if (v2 == 0) {
            goto c0;
        }
        if (v2 == 1) {
            goto c1;
        }
        if (v2 == 2) {
            a1 = *(u32 *)(data_ov008_0215c6e0 + 0x10);
        }
        goto call;
c0:
        a1 = *(u32 *)(data_ov008_0215c6e0 + 0x8);
        goto call;
c1:
        a1 = *(u32 *)(data_ov008_0215c6e0 + 0xc);
call:
        func_0208f85c(param_1, a1);
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(s32 *)(param_1 + 0x30) = *(s32 *)(param_1 + 0x30) - 0x200;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(s32 *)(param_1 + 0x30) = *(s32 *)(param_1 + 0x30) + 0x200;
    }
    t1 = *(u32 *)(param_1 + 0x5c);
    t2 = *(u32 *)(param_1 + 0x58);
    t3 = *(u32 *)(param_1 + 0x54);
    L[0] = t3;
    L[1] = t2;
    L[2] = t1;
    t1 = *(u32 *)(param_1 + 0x50);
    t2 = *(u32 *)(param_1 + 0x4c);
    t3 = *(u32 *)(param_1 + 0x48);
    L[3] = t3;
    L[4] = t2;
    L[5] = t1;
    t1 = *(u32 *)(param_1 + 0x44);
    t2 = *(u32 *)(param_1 + 0x40);
    t3 = *(u32 *)(param_1 + 0x3c);
    L[6] = t3;
    L[7] = t2;
    L[8] = t1;
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x200) != 0) {
        func_0206793c(-0x200, &L[6], &L[0], &L[0]);
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x100) != 0) {
        func_0206793c(0x200, &L[6], &L[0], &L[0]);
    }
    func_02067d04(&L[3], &L[0], &L[6]);
    func_02006a30(&L[6], &L[6]);
    func_02067d04(&L[6], &L[3], &L[0]);
    *(u32 *)(param_1 + 0x3c) = L[6];
    *(u32 *)(param_1 + 0x40) = L[7];
    *(u32 *)(param_1 + 0x44) = L[8];
    *(u32 *)(param_1 + 0x48) = L[3];
    *(u32 *)(param_1 + 0x4c) = L[4];
    *(u32 *)(param_1 + 0x50) = L[5];
    *(u32 *)(param_1 + 0x54) = L[0];
    *(u32 *)(param_1 + 0x58) = L[1];
    *(u32 *)(param_1 + 0x5c) = L[2];
    func_01ffe474(param_1);
}
