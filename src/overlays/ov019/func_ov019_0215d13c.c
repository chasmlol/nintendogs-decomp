#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u32 data_ov019_02161610[];
extern u32 data_ov019_0216160c[];
extern u32 data_ov019_02161604[];
extern u32 data_ov019_02161608[];
extern u32 data_ov019_02161600[];
extern void func_ov019_0215cdd8(void);
extern u8 *func_020038b8(u8 *, u32);
extern void func_0208f5c4(u8 *, s32);
extern u8 *func_0208fb00(u8 *, u32, u32);
extern void func_0208f7e4(u8 *, u32);
extern void func_0208f7f8(u8 *, u32);
extern void func_0208f7d0(u8 *, u32);
extern void func_0208f840(u8 *, u32);
extern void func_0208f834(u8 *, u32);
extern void func_02066b80(u8 *);
extern void func_0208f544(u8 *, void *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 *func_ov019_0215d13c(u8 *param_1, u16 param_2)
{
    u8 *puVar2;
    u8 *puVar3;
    u8 *e;
    u8 bVar1;
    s32 iVar4;
    u32 L[12];
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    u32 t4;

    puVar2 = func_020038b8(param_1, 0xb0);
    if (puVar2 != 0) {
        t0 = data_ov019_02161610[0];
        t1 = data_ov019_0216160c[0];
        t2 = data_ov019_02161604[0];
        t3 = data_ov019_02161608[0];
        L[0] = t0;
        L[1] = t1;
        L[2] = t2;
        L[3] = t1;
        L[4] = t1;
        L[5] = t3;
        L[6] = t3;
        L[7] = t3;
        L[8] = t1;
        L[9] = t1;
        L[10] = t1;
        L[11] = t0;
        func_0208f5c4(puVar2, 0xff);
        iVar4 = 0;
        do {
            *(u32 *)(puVar2 + iVar4 * 4 + 0x78) = 0;
            puVar3 = func_0208fb00(param_1, 0x88, L[iVar4]);
            *(u8 **)(puVar2 + iVar4 * 4 + 0x78) = puVar3;
            if (*(u8 **)(puVar2 + iVar4 * 4 + 0x78) != 0) {
                func_0208f7e4(*(u8 **)(puVar2 + iVar4 * 4 + 0x78), 0x5294);
                func_0208f7f8(*(u8 **)(puVar2 + iVar4 * 4 + 0x78), 0x7fff);
                func_0208f7d0(*(u8 **)(puVar2 + iVar4 * 4 + 0x78), 3);
                e = *(u8 **)(puVar2 + iVar4 * 4 + 0x78);
                *(u16 *)(e + 0x20) = *(u16 *)(e + 0x20) | 1;
                e = *(u8 **)(puVar2 + iVar4 * 4 + 0x78);
                bVar1 = *(u8 *)(e + 1);
                SwapByte(bVar1 | 1, (vu8 *)(e + 1));
            }
            iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
        } while (iVar4 < 12);
        *(u32 *)(puVar2 + 0xa8) = 0;
        puVar3 = func_0208fb00(param_1, 0x88, data_ov019_02161600[0]);
        *(u8 **)(puVar2 + 0xa8) = puVar3;
        if (*(u8 **)(puVar2 + 0xa8) != 0) {
            func_0208f840(*(u8 **)(puVar2 + 0xa8), 0x14);
            func_0208f834(*(u8 **)(puVar2 + 0xa8), (u8)(param_2 + 0x1e));
            *(u16 *)(*(u8 **)(puVar2 + 0xa8) + 0x20) = *(u16 *)(*(u8 **)(puVar2 + 0xa8) + 0x20) | 1;
        }
        *(u16 *)(puVar2 + 0x1c) = param_2;
        *(u16 *)(puVar2 + 0x1e) = 0;
        *(u16 *)(puVar2 + 0x20) = 0;
        *(u16 *)(puVar2 + 0x22) = 0;
        *(u16 *)(puVar2 + 0x24) = 0;
        *(u16 *)(puVar2 + 0x26) = 0;
        *(u16 *)(puVar2 + 0x28) = 0xe;
        *(s16 *)(puVar2 + 0x2a) = -1;
        *(s16 *)(puVar2 + 0x2c) = -1;
        *(u32 *)(puVar2 + 0x3c) = 0;
        *(u32 *)(puVar2 + 0x40) = 0;
        *(u32 *)(puVar2 + 0x44) = 0;
        *(u32 *)(puVar2 + 0x30) = 0;
        *(u32 *)(puVar2 + 0x34) = 0;
        *(u32 *)(puVar2 + 0x38) = 0;
        func_02066b80(puVar2 + 0x48);
        func_0208f544(puVar2, func_ov019_0215cdd8);
    }
    return puVar2;
}
