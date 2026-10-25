typedef unsigned char u8;
typedef unsigned short u16;
extern void func_02055688(u8 *p);
void func_0202c0d0(u8 *param_1)
{
    func_02055688(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
}
