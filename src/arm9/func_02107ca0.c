typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_0215be48;
extern void func_020fddc0(u32 x);
void func_02107ca0(u32 param_1)
{
    u8 *p;
    func_020fddc0(0x19);
    p = *(u8 **)&data_0215be48;
    *(u32 *)(p + 0x1da4) = param_1;
}
