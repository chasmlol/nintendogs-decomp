typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02025e18(u8 *p);
extern u8 func_02025c5c(u8 *p);
u8 func_0201e02c(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xb0;
    func_02025e18(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
