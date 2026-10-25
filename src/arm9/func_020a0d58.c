typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02159074;
extern u8 data_0212fdc5[];
extern u32 func_020a202c(u32 a, u32 b, u32 c, u32 d);
u32 func_020a0d58(u32 param_1)
{
    u32 uVar1;
    u8 *p;
    p = (u8 *)&data_02159074;
    uVar1 = data_0212fdc5[*(u16 *)(p + 0x18) * 6];
    if (uVar1 != 0xff) {
        return func_020a202c(uVar1, param_1, 0x7f, 0);
    }
    return 0xffffffff;
}
