#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off
extern u8 data_ov011_0215d324[];
extern u8 data_0214efdc[];
extern u8 data_ov011_0215d320[];
extern s32 func_0208cac8(u32 a, s32 b);
extern s32 func_0208ca20(u32 a, s32 b);
extern void func_0208f85c(u8 *p, s32 a);
extern void func_0209c598(u8 *base, s32 idx, u32 val, s32 flag);
extern void func_0208ca50(u32 a, s32 b);
extern void func_0208ca9c(u32 a, s32 b);
extern void func_01ffe474(u8 *p);

static inline void SwapR(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
}

static inline void Loop3(s32 flag)
{
    u8 *base;
    u32 val;
    s32 i;
    u32 uVar6;

    val = *(u16 *)(*(u8 **)data_ov011_0215d324 + 0x864);
    base = *(u8 **)data_ov011_0215d324 + 0x87c;
    i = 0;
    do {
        uVar6 = val;
        if (*(s16 *)(*(u8 **)data_ov011_0215d324 + 0x866) < 3 && i != *(s16 *)(*(u8 **)data_ov011_0215d324 + 0x866)) {
            uVar6 = 0;
        }
        func_0209c598(base, i, uVar6, flag);
        i = i + 1;
    } while (i < 3);
}

void func_ov011_0215ce2c(u8 *param_1)
{
    u8 *iVar9;
    u8 *pF;
    u32 local_2c;
    u8 *obj;
    s32 bVar3;
    s16 sel;
    s32 f1;
    u32 k6;

    obj = *(u8 **)data_ov011_0215d324;
    iVar9 = *(u8 **)(param_1 + 0x74);
    pF = iVar9 + 0x14;
    local_2c = 0x1000;
    sel = *(s16 *)(obj + 0x866);
    if (*(s16 *)(obj + 0x868) != sel) {
        *(s16 *)(obj + 0x868) = sel;
        Loop3(0);
    }
    bVar3 = func_0208cac8(*(u32 *)(*(u8 **)data_ov011_0215d324 + 4), 0);
    if (bVar3 != 0) {
        func_0208f85c(param_1, func_0208ca20(*(u32 *)(*(u8 **)data_ov011_0215d324 + 4), 0));
        Loop3(0);
        SwapR(0, (vu8 *)(iVar9 + 0x14));
        func_0208ca50(*(u32 *)(*(u8 **)data_ov011_0215d324 + 4), 0);
        func_0208ca9c(*(u32 *)(*(u8 **)data_ov011_0215d324 + 4), 0);
    }
    obj = *(u8 **)data_ov011_0215d324;
    if (*(s32 *)(obj + 0x870) != 0) {
        k6 = *(u16 *)(data_0214efdc + 6);
        local_2c = 0;
        if ((u16)(k6 & 0x400) != 0) {
            local_2c = 0x1000;
        }
        if ((u16)(k6 & 0x800) != 0) {
            local_2c = 0xfffff000;
        }
        if ((u16)(*(u16 *)data_0214efdc & 0x400) != 0) {
            Loop3(0);
        }
        if ((u16)(*(u16 *)data_0214efdc & 0x800) != 0) {
            Loop3(1);
        }
    }
    *(u32 *)(pF + 8) = local_2c;
    f1 = *(s32 *)(param_1 + 0x9c);
    *(s32 *)(param_1 + 0x9c) = f1 + (s32)(((s64)(-f1) * (s64)*(s32 *)(param_1 + 0x98) + 0x800) >> 12);
    f1 = *(s32 *)(param_1 + 0xa0);
    *(s32 *)(param_1 + 0xa0) = f1 + (s32)(((s64)(-f1) * (s64)*(s32 *)(param_1 + 0x98) + 0x800) >> 12);
    *(u16 *)(param_1 + 0x94) = (u16)(*(u16 *)(param_1 + 0x94) + 1);
    *(s32 *)(param_1 + 0x34) = -*(s32 *)data_ov011_0215d320;
    func_01ffe474(param_1);
}
