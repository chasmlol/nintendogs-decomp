#include "ctx.h"
extern u8 data_0213a8d4[];
extern s16 data_0213c00c[][15];
extern s16 data_0213bb00[][9];
extern s16 data_0213bc5c[][15];
extern s16 data_0213bd6c[][9];

u32 func_0202dc50(u8 *param_1, u32 param_2, s32 param_3, u32 param_4, u8 param_5, s32 param_6)
{
    u8 *iv3;
    s32 bv;
    s16 uv1;
    u32 r4;

    if (*(u8 *)(param_1 + 0xa4) != 0 && *(u16 *)(param_1 + 0xf2) == param_4 && *(u8 *)(param_1 + 0xa6) == param_5) {
        return 0;
    }
    if (param_6 == 0) {
        goto ret1;
    }
    if (param_4 >= 0x4f && param_4 < 0x63) {
        iv3 = *(u8 **)(data_0213a8d4 + 0x13c) + param_5 * 10;
    } else {
        iv3 = *(u8 **)(data_0213a8d4 + param_4 * 4) + param_5 * 10;
    }
    if (iv3 == NULL) {
        goto fin;
    }
    r4 = *(u8 *)(iv3 + 4);
    uv1 = *(u8 *)(iv3 + 5);
    if (r4 == param_2) {
        if (param_2 == 0) {
            bv = data_0213c00c[uv1][param_3];
            if (bv != -1) {
                *(s16 *)(param_1 + 0xea) = bv;
                bv = 1;
            } else {
                bv = 0;
            }
        } else {
            bv = data_0213bb00[uv1][param_3];
            if (bv != -1) {
                *(s16 *)(param_1 + 0xea) = bv;
                bv = 1;
            } else {
                bv = 0;
            }
        }
    } else if (param_2 == 0) {
        bv = 1;
        *(s16 *)(param_1 + 0xea) = data_0213bc5c[uv1][param_3];
    } else {
        bv = 1;
        *(s16 *)(param_1 + 0xea) = data_0213bd6c[uv1][param_3];
    }
    if (bv == 0 && *(s16 *)(iv3 + 6) != -1) {
        *(s16 *)(param_1 + 0xea) = *(s16 *)(iv3 + 6);
    }
fin:
    return 1;
ret1:
    return 1;
}
