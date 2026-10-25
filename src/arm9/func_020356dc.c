typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
s32 func_020356dc(u8 *param_1, s32 param_2)
{
    u8 *o;
    u8 *t;
    o = param_1;
    param_1 = param_1 + 0x100;
    if (*(s16 *)(param_1 + 98) == *(s16 *)(param_1 + 82)) {
        t = *(u8 **)(o + 0x74);
        if (t != 0) {
            if (*(s8 *)(o + 190) > 0) {
                if (*(s16 *)(param_1 + 78) >= *(s16 *)(t + 24) - 1 - param_2) {
                    return 1;
                }
            } else {
                if (*(s16 *)(param_1 + 78) <= param_2 + 1) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
