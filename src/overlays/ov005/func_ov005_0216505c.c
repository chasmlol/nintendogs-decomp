typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);
u8 func_ov005_0216505c(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x1a0;
    func_020264f4(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
