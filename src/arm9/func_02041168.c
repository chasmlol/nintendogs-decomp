typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0214f464;
void func_02041168(u8 *param_1)
{
    u32 *g;
    u32 uVar1;
    u32 t;
    g = *(u32 **)&data_0214f464;
    uVar1 = *g * 0x10dcd + 1;
    *g = uVar1;
    t = ((u32)(u16)uVar1 * 30u) >> 16;
    *(u16 *)(param_1 + 0x10c) = (u16)((u16)t + 60);
}
