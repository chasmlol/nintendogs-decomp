#include "ctx.h"
extern s16 data_02126868[];
extern void func_01ff8020(s32 *dst, s32 a, s32 b);
extern void func_01ff8058(u8 *dst, s32 *src, u8 *extra);
void func_020393d8(u8 *obj, s32 p)
{
    s32 arr[12];
    s32 k = p >> 4;
    func_01ff8020(arr, data_02126868[k * 2], data_02126868[k * 2 + 1]);
    func_01ff8058(obj + 0x1a4, arr, obj + 0x1a4);
}
