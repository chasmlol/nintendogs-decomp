#include "ctx.h"

extern u32 *data_02152f3c;
extern u8 data_02153d40[];
extern u8 data_02153d44[];
extern u8 data_02153d48[];
extern u8 data_02153d4c[];
extern u8 data_02153d50[];
extern u8 data_02153d54[];

void func_0206c804(u32 *dst, u32 *src, s32 n);

#define BM(i) (((u32 *)((u8 *)data_02152f3c + 0xc4))[(i) >> 5])

void func_0207b30c(u32 *param_1, u32 *param_2, u8 *param_3, u32 param_4)
{
    u32 bVar1;
    u32 bVar2;

    bVar1 = param_3[1];
    bVar2 = param_3[2];
    if ((param_4 & 4) != 0) {
        *param_1 = *param_1 | 1;
        if ((1 << (bVar2 & 31)) & BM(bVar2)) {
            BM(bVar1) = BM(bVar1) | (1 << (bVar1 & 31));
            *param_1 = *param_1 | 0x18;
            return;
        }
        func_0206c804((u32 *)(data_02153d40 + bVar2 * 24), (u32 *)(data_02153d40 + bVar1 * 24), 24);
        func_0206c804((u32 *)(data_02153d40 + bVar2 * 24), param_1 + 4, 24);
        return;
    }
    param_1[1] = param_2[0];
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
    if ((1 << (bVar2 & 31)) & BM(bVar2)) {
        func_0206c804(param_2, (u32 *)(data_02153d40 + bVar1 * 24), 24);
        BM(bVar1) = BM(bVar1) & ~(1 << (bVar1 & 31));
        *param_1 = *param_1 | 0x18;
        return;
    }
    BM(bVar1) = BM(bVar1) & ~(1 << (bVar1 & 31));
    *(vu32 *)(data_02153d40 + bVar1 * 24) = (u32)(((s64)(s32)param_2[0] * *(volatile s32 *)(data_02153d40 + bVar2 * 24)) >> 12);
    *(vu32 *)(data_02153d44 + bVar1 * 24) = (u32)(((s64)(s32)param_2[1] * *(volatile s32 *)(data_02153d44 + bVar2 * 24)) >> 12);
    *(vu32 *)(data_02153d48 + bVar1 * 24) = (u32)(((s64)(s32)param_2[2] * *(volatile s32 *)(data_02153d48 + bVar2 * 24)) >> 12);
    *(vu32 *)(data_02153d4c + bVar1 * 24) = (u32)(((s64)(s32)param_2[3] * *(volatile s32 *)(data_02153d4c + bVar2 * 24)) >> 12);
    *(vu32 *)(data_02153d50 + bVar1 * 24) = (u32)(((s64)(s32)param_2[4] * *(volatile s32 *)(data_02153d50 + bVar2 * 24)) >> 12);
    *(vu32 *)(data_02153d54 + bVar1 * 24) = (u32)(((s64)(s32)param_2[5] * *(volatile s32 *)(data_02153d54 + bVar2 * 24)) >> 12);
    func_0206c804((u32 *)(data_02153d40 + bVar2 * 24), param_1 + 4, 24);
}
