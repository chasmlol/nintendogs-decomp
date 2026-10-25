typedef unsigned int u32;
typedef signed int s32;
extern u32 func_02090b38(u32 a, u32 b, u32 c);
s32 func_02090cac(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;
    uVar1 = func_02090b38((u32)param_1, param_2, param_3);
    return param_1[2] + *(s32 *)(param_1[1] + (uVar1 & 0xffff) * 4);
}
