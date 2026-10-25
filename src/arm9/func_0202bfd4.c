typedef unsigned char u8;
typedef unsigned short u16;
extern void func_02050f1c(u8 *p);
void func_0202bfd4(u8 *param_1)
{
    func_02050f1c(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
}
