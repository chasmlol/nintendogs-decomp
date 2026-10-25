typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
#define FX(a, b) ((u32)(((s64)(a) * (b)) >> 12))
void func_02066abc(s32 *param_1, u32 *param_2, s32 param_3, s32 param_4, s32 param_5)
{
    param_2[0] = FX(param_3, param_1[0]);
    param_2[1] = FX(param_3, param_1[1]);
    param_2[2] = FX(param_3, param_1[2]);
    param_2[3] = FX(param_4, param_1[3]);
    param_2[4] = FX(param_4, param_1[4]);
    param_2[5] = FX(param_4, param_1[5]);
    param_2[6] = FX(param_5, param_1[6]);
    param_2[7] = FX(param_5, param_1[7]);
    param_2[8] = FX(param_5, param_1[8]);
}
