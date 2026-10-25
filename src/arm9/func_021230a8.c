typedef unsigned char u8;
typedef unsigned int u32;
extern void func_02108e24(u32 x);
void func_021230a8(u8 *param_1)
{
    func_02108e24(1);
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x1cf4) = 0xffffffff;
}
