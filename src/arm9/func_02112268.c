typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0215be48;
void func_02112268(void)
{
    s32 i;
    u32 zero;
    u32 z3;
    s32 j;
    u8 *p;
    i = 0;
    zero = i;
    z3 = i;
    do {
        p = *(u8 **)&data_0215be48 + 0x283c + (u32)i * 2048;
        j = z3;
        do {
            *(u32 *)p = zero;
            *(u16 *)(p + 6) = zero;
            *(u16 *)(p + 8) = zero;
            *(u16 *)(p + 10) = zero;
            *(u16 *)(p + 12) = zero;
            j = j + 1;
            *(u16 *)(p + 4) = zero;
            p = p + 16;
        } while (j < 128);
        i = i + 1;
    } while (i < 4);
}
