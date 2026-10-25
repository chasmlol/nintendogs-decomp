typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
s32 func_02035770(u8 *param_1, s32 param_2)
{
    param_1 = param_1 + 0x100;
    if (*(s16 *)(param_1 + 98) == *(s16 *)(param_1 + 82)) {
        if (*(s16 *)(param_1 + 78) >= param_2) {
            return 1;
        }
    }
    return 0;
}
