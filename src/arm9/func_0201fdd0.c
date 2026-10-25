typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
u8 func_0201fdd0(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x3a;
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
