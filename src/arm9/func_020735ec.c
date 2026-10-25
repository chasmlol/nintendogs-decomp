typedef unsigned int u32;
typedef signed int s32;
extern u32 func_0205e270(u32 a, u32 b);
s32 func_020735ec(s32 *param_1)
{
    s32 iVar1;
    if (param_1[2] < param_1[3]) {
        iVar1 = param_1[0];
        return iVar1 + (s32)func_0205e270(param_1[2] * (param_1[1] - iVar1), param_1[3]);
    }
    return param_1[1];
}
