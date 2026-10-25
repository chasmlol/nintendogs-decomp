typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_0215be48;
extern u32 func_0210a5c0(u32 x);
u32 func_02108ba0(void)
{
    u8 *p;
    u32 r = 0;
    p = *(u8 **)&data_0215be48;
    if (*(u32 *)(p + 0xa8) == 5) {
        r = func_0210a5c0(3);
    }
    return r;
}
