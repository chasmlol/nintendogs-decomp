typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);
u8 func_0201ecc8(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x234;
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
