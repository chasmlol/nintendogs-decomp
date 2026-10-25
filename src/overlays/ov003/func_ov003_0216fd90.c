typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);
void func_ov003_0216fd90(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x17c;
    func_02026c24(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x948) = *(u32 *)(param_1 + 0x948) | 1;
}
