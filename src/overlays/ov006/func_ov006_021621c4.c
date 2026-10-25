typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_ov006_021661c0;
extern void func_0200c498(u32 a, u32 b);
u32 func_ov006_021621c4(u32 param_1)
{
    u8 *p;
    func_0200c498(1, param_1);
    p = *(u8 **)&data_ov006_021661c0;
    p = *(u8 **)(p + param_1 * 4 + 0x2c);
    p = *(u8 **)(p + 0x2c);
    return *(u32 *)(p + 0x1c);
}
