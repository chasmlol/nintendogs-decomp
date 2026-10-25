typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02159034;
u32 func_020978d0(u32 param_1, s32 param_2)
{
    u32 r;
    r = 0;
    switch (param_1) {
    case 1:
        r = (u32)(*(u8 **)&data_02159034 + 0x143c + param_2 * 24);
        break;
    case 2:
        r = (u32)(*(u8 **)&data_02159034 + 0x1484 + param_2 * 24);
        break;
    case 0:
        r = (u32)(*(u8 **)&data_02159034 + 0x140c);
        break;
    case 6:
        r = (u32)(*(u8 **)&data_02159034 + 0x1424);
        break;
    case 3:
        r = (u32)(*(u8 **)&data_02159034 + 0x14cc);
        break;
    case 4:
        r = (u32)(*(u8 **)&data_02159034 + 0x14e4 + param_2 * 24);
        break;
    case 5:
        r = (u32)(*(u8 **)&data_02159034 + 0x155c + param_2 * 24);
        break;
    }
    return r;
}
