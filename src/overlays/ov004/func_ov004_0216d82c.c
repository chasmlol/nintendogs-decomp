typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
u8 func_ov004_0216d82c(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x3d;
    func_02026bac(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
