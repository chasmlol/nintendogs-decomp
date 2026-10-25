typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
extern u32 data_02159034;
s32 func_0209536c(void)
{
    s32 res;
    s32 i;
    u8 *p;
    res = -1;
    p = *(u8 **)&data_02159034;
    i = 0;
    do {
        if (*(u16 *)(*(u8 **)(p + 0x144c) + 4) == 0xffff) {
            res = 0;
            res = i;
            goto out;
        }
        i = (s16)(i + 1);
        p = p + 24;
    } while (i < 3);
out:
    return res;
}
