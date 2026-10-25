typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_0215be48;
extern void func_020fddc0(u32 x);
void func_0210828c(void)
{
    u8 *p;
    p = *(u8 **)&data_0215be48;
    if (*(u32 *)(p + 0xb8) != 3) {
        func_020fddc0(3);
    }
}
