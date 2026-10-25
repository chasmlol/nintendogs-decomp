typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
u32 func_02036434(u8 *param_1, s32 param_2)
{
    s32 i;
    u8 *q;
    i = 0;
    do {
        q = param_1 + i * 2 + 0x100;
        if (param_2 == *(s16 *)(q + 64)) {
            return 0;
        }
        i = (s16)(i + 1);
    } while (i < 2);
    return 1;
}
