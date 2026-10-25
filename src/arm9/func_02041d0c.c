typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
s32 func_02041d0c(u8 *param_1)
{
    s32 i;
    s32 best;
    s16 mx;
    s16 v;
    best = 0;
    mx = 0;
    i = 0;
    do {
        v = *(s16 *)(param_1 + ((i << 16) >> 15) + 0x50);
        if (mx <= v) {
            mx = v;
            best = i;
        }
        i = (s8)(i + 1);
    } while (i < 5);
    return best;
}
