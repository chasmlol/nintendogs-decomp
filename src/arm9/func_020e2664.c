typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
#define FXM(a, b) ((u32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))
void func_020e2664(s32 *param_1, s32 *param_2)
{
    param_2[0] = (s32)((0x1000 - (s32)FXM(param_1[2], param_1[2]) * 2) - (s32)FXM(param_1[3], param_1[3]) * 2);
    param_2[3] = (s32)((s32)FXM(param_1[1], param_1[2]) - (s32)FXM(*param_1, param_1[3])) * 2;
    param_2[6] = (s32)((s32)FXM(param_1[1], param_1[3]) + (s32)FXM(*param_1, param_1[2])) * 2;
    param_2[1] = (s32)((s32)FXM(param_1[1], param_1[2]) + (s32)FXM(*param_1, param_1[3])) * 2;
    param_2[4] = (s32)((0x1000 - (s32)FXM(param_1[1], param_1[1]) * 2) - (s32)FXM(param_1[3], param_1[3]) * 2);
    param_2[7] = (s32)((s32)FXM(param_1[2], param_1[3]) - (s32)FXM(*param_1, param_1[1])) * 2;
    param_2[2] = (s32)((s32)FXM(param_1[1], param_1[3]) - (s32)FXM(*param_1, param_1[2])) * 2;
    param_2[5] = (s32)((s32)FXM(param_1[2], param_1[3]) + (s32)FXM(*param_1, param_1[1])) * 2;
    param_2[8] = (s32)((0x1000 - (s32)FXM(param_1[1], param_1[1]) * 2) - (s32)FXM(param_1[2], param_1[2]) * 2);
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[11] = 0;
}
