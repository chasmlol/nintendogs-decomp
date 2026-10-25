typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0215be48;
extern u32 func_02090bb4(u32 a, u32 b, u32 c, u32 d, u32 e);
u32 func_020fc938(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_02090bb4(*(u32 *)(*(u8 **)&data_0215be48 + param_1 * 660 + param_2 * 4 + 0x2074), param_3, param_4,
                  (u32)(*(u8 **)&data_0215be48 + 0x48c8), 512);
    return (u32)(*(u8 **)&data_0215be48 + 0x48c8);
}
