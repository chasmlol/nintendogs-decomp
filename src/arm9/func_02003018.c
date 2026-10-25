typedef unsigned int u32;
extern u32 data_0214e754;
extern void func_02002f9c(u32 *a, u32 b);
extern void func_02002e70(u32 *a, u32 b);
void func_02003018(u32 param_1)
{
    func_02002f9c(&data_0214e754, param_1);
    func_02002e70(&data_0214e754, 0xbeef);
}
