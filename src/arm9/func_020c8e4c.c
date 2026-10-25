#include "ctx.h"

extern u32 data_02142bc4;
extern u32 data_02142bc8;
extern void func_02027668(s32 a, s32 *b);
extern void func_02027690(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(u32 v, s32 *a, s32 *b, s32 *c);

void func_020c8e4c(s32 param_1, s32 *param_2)
{
    s32 arr[4];
    s32 iv;
    s32 v;
    s64 l;
    func_02027668(param_1, param_2);
    func_02027690(param_1, arr);
    iv = *(s32 *)&data_02142bc4;
    v = func_02028130(param_1);
    l = (s64)v * (s64)iv + 0x800;
    param_2[1] = param_2[1] + (u32)(l >> 12);
    iv = *(s32 *)&data_02142bc8;
    v = func_02028130(param_1);
    l = (s64)v * (s64)iv + 0x800;
    func_01ff832c((u32)(l >> 12), arr, param_2, param_2);
}
