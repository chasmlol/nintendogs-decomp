typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
u32 func_02026dc0(u8 *param_1, s32 param_2)
{
    if (*(s16 *)(param_1 + 0xea) == 0x4ec) {
        if (param_2 == (s16)*(s32 *)(param_1 + 0x484)) {
            return 1;
        }
    }
    return 0;
}
