typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0214f464;
extern void func_02048680(u32 a, u32 b, u32 c);
void func_02047b28(u32 param_1)
{
    u32 *p;
    u32 v;
    p = *(u32 **)&data_0214f464;
    v = *p * 0x10dcd + 1;
    *p = v;
    func_02048680(param_1, 7, (u32)((u16)((u32)((u16)v * 50) >> 16) == 0));
}
