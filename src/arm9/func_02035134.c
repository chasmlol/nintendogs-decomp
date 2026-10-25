typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
u32 func_02035134(u8 *param_1)
{
    s32 t;
    t = *(s16 *)(param_1 + 0xea) + (s32)0xfffffc22;
    if ((u16)(s16)t <= 2) {
        return 1;
    }
    return 0;
}
