typedef unsigned int u32;
typedef signed int s32;
typedef signed char s8;
typedef unsigned char u8;
extern u32 data_0214f464;
u32 func_02036544(u8 *param_1)
{
    s32 i;
    i = *(s8 *)(param_1 + 137);
    if (i < 0) {
        goto ret0;
    }
    if (i < 3) {
        goto body;
    }
ret0:
    return 0;
body:
    return *(u32 *)(*(u8 **)&data_0214f464 + i * 4 + 0x54);
}
