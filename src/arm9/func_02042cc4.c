typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
extern u32 data_0214f464;
u32 func_02042cc4(void)
{
    u8 *p;
    s32 i;
    u8 *q;
    p = *(u8 **)&data_0214f464;
    i = *(s8 *)(p + 9);
    if (i < 0) {
        goto zero;
    }
    if (i < 3) {
        goto body;
    }
zero:
    q = 0;
    goto check;
body:
    q = *(u8 **)(p + i * 4 + 0x54);
check:
    if (q == 0) {
        goto ret0;
    }
    if (*(s16 *)(q + 234) == 0x47d) {
        return 1;
    }
ret0:
    return 0;
}
