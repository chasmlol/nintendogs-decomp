typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
extern u32 data_0214f464;
u32 func_02042d1c(void)
{
    u32 r;
    u8 *p;
    r = 0;
    p = (u8 *)*(u32 *)&data_0214f464;
    if (*(s8 *)(p + 9) != -1) {
        if (*(u32 *)(p + 0x40) == 1) {
            r = 1;
        }
    }
    return r;
}
