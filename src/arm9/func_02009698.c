#include "ctx.h"
#pragma opt_common_subs off

typedef struct { s32 x, y, z; } V3;

extern u8 data_02152cd8[];
extern u8 data_02159444[];
extern void *func_020bc3c4(void);
extern s32 func_02067898(s32 a, s32 b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_02081aec(void *a, void *b, void *c);
extern s32 func_02028130(void *p);

#define WI(p, o) (*(s32 *)((u8 *)(p) + (o)))

void func_02009698(u8 *param_1)
{
    s32 idx;
    u8 *pp;
    u8 *q;
    u8 *obj;
    s32 scale;
    volatile u16 tmp[3];
    s32 A[3];
    s32 B[3];
    s32 C[3];
    V3 D;
    s32 local30[3];
    s64 t;
    u32 uVar9;
    u32 uVar10;
    void *p9;
    void *p1;
    s32 ret;

    idx = 0;
    pp = param_1;
    do {
        obj = *(u8 **)(param_1 + idx * 4 + 0x8fc);
        if (obj != 0) {
            q = param_1 + idx;
            switch (*(s8 *)(q + 0x838)) {
            case 0:
                WI(obj, 0x20) = WI(pp, 0x8a8) + WI(**(u8 ***)(obj + 0x18), 4);
                WI(obj, 0x24) = WI(pp, 0x8ac) + WI(**(u8 ***)(obj + 0x18), 8);
                WI(obj, 0x28) = WI(pp, 0x8b0) + WI(**(u8 ***)(obj + 0x18), 0xc);
                break;
            case 1:
                A[0] = WI(data_02152cd8, 0x4c);
                A[1] = WI(data_02152cd8, 0x58);
                A[2] = WI(data_02152cd8, 0x64);
                B[0] = WI(data_02152cd8, 0x50);
                B[1] = WI(data_02152cd8, 0x5c);
                B[2] = WI(data_02152cd8, 0x68);
                C[0] = WI(data_02152cd8, 0x54);
                C[1] = WI(data_02152cd8, 0x60);
                C[2] = WI(data_02152cd8, 0x6c);
                p9 = func_020bc3c4();
                p1 = func_020bc3c4();
                ret = func_02067898(*(s16 *)((u8 *)p9 + 0x6c), *(s16 *)((u8 *)p1 + 0x6e));
                t = (s64)(-WI(pp, 0x8b0)) * (s64)ret + 0x800;
                uVar10 = (u32)(t >> 12);
                t = (s64)(s32)uVar10 * 43 + 0x800;
                uVar9 = (u32)(t >> 12);
                scale = *(s32 *)(*(u8 **)data_02159444 + 0x1c);
                D = *(V3 *)((u8 *)scale + 0x30);
                func_01ff832c((s32)(uVar9 * WI(pp, 0x8a8)) >> 12, A, &D, &D);
                func_01ff832c((s32)(uVar9 * WI(pp, 0x8ac)) >> 12, B, &D, &D);
                func_01ff832c(WI(pp, 0x8b0), C, &D, &D);
                obj = *(u8 **)(param_1 + idx * 4 + 0x8fc);
                WI(obj, 0x20) = D.x + WI(**(u8 ***)(obj + 0x18), 4);
                WI(obj, 0x24) = D.y + WI(**(u8 ***)(obj + 0x18), 8);
                WI(obj, 0x28) = D.z + WI(**(u8 ***)(obj + 0x18), 0xc);
                break;
            case 2:
                WI(obj, 0x20) = WI(param_1, 0x33c) + WI(**(u8 ***)(obj + 0x18), 4);
                WI(obj, 0x24) = WI(param_1, 0x340) + WI(**(u8 ***)(obj + 0x18), 8);
                WI(obj, 0x28) = WI(param_1, 0x344) + WI(**(u8 ***)(obj + 0x18), 0xc);
                break;
            case 3:
                WI(obj, 0x20) = WI(param_1, 0x2e8) + WI(**(u8 ***)(obj + 0x18), 4);
                WI(obj, 0x24) = WI(param_1, 0x2ec) + WI(**(u8 ***)(obj + 0x18), 8);
                WI(obj, 0x28) = WI(param_1, 0x2f0) + WI(**(u8 ***)(obj + 0x18), 0xc);
                break;
            case 4:
                WI(obj, 0x20) = WI(param_1, 0x354) + WI(**(u8 ***)(obj + 0x18), 4);
                WI(obj, 0x24) = WI(param_1, 0x358) + WI(**(u8 ***)(obj + 0x18), 8);
                WI(obj, 0x28) = WI(param_1, 0x35c) + WI(**(u8 ***)(obj + 0x18), 0xc);
                break;
            case 5:
                func_02081aec(obj, param_1 + 0x2c4, param_1 + 0x354);
                WI(*(u8 **)(param_1 + idx * 4 + 0x8fc), 0x44) = (s16)func_02028130(param_1);
                break;
            }
            if (*(s8 *)(q + 0x831) == 1) {
                s32 l0;
                s32 l1;
                s32 l2;
                scale = WI(pp, 0x854);
                local30[0] = (u32)(((s64)WI(param_1, 0x1a4) * scale + 0x800) >> 12);
                local30[1] = (u32)(((s64)WI(param_1, 0x1a8) * scale + 0x800) >> 12);
                local30[2] = (u32)(((s64)WI(param_1, 0x1ac) * scale + 0x800) >> 12);
                func_01ff832c(WI(pp, 0x858), param_1 + 0x198, local30, local30);
                func_01ff832c(WI(pp, 0x85c), param_1 + 0x18c, local30, local30);
                l0 = local30[0];
                tmp[0] = (s16)l0;
                l1 = local30[1];
                l2 = *(volatile s32 *)&local30[2];
                tmp[1] = (s16)l1;
                tmp[2] = (s16)l2;
                obj = *(u8 **)(param_1 + idx * 4 + 0x8fc);
                {
                    s16 w0 = tmp[0];
                    s16 w1 = tmp[1];
                    *(s16 *)(obj + 0x3c) = w0;
                    *(s16 *)(obj + 0x3e) = w1;
                    *(s16 *)(obj + 0x40) = tmp[2];
                }
            }
            switch (*(s8 *)(q + 0x82a)) {
            case 1:
                WI(*(u8 **)(param_1 + idx * 4 + 0x8fc), 0x54) = *(s16 *)(param_1 + idx * 2 + 0x846);
                break;
            case 2:
                WI(*(u8 **)(param_1 + idx * 4 + 0x8fc), 0x54) = (s16)func_02028130(param_1);
                break;
            }
        }
        idx = ((idx + 1) * 0x10000) >> 16;
        pp = pp + 12;
    } while (idx < 7);
}
