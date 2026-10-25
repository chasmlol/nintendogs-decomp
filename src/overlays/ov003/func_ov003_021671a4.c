typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026bac(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_02020768(u8 *p);
void func_ov003_021671a4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x222;
    func_02026bac(param_1);
    func_02025a84(param_1);
    func_02020768(param_1);
}
