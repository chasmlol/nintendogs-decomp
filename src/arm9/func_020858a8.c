typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
void func_020858a8(s32 *param_1, u8 *param_2, s32 *param_3)
{
    param_3[0] = param_3[0] + (((s32)*(s16 *)((u8 *)param_1 + 12) * (param_1[0] - *(s32 *)(param_2 + 0x14) - *(s32 *)(param_2 + 0x20))) >> 12);
    param_3[1] = param_3[1] + (((s32)*(s16 *)((u8 *)param_1 + 12) * (param_1[1] - *(s32 *)(param_2 + 0x18) - *(s32 *)(param_2 + 0x24))) >> 12);
    param_3[2] = param_3[2] + (((s32)*(s16 *)((u8 *)param_1 + 12) * (param_1[2] - *(s32 *)(param_2 + 0x1c) - *(s32 *)(param_2 + 0x28))) >> 12);
}
