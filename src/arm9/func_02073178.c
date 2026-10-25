typedef unsigned int u32;
extern u32 data_021522a4;
extern u32 func_02080b08(void);
extern void func_0207d018(u32 a, u32 b);
extern void func_02080b1c(u32 a);
void func_02073178(u32 param_1)
{
    u32 r;
    r = func_02080b08();
    func_0207d018((u32)&data_021522a4, param_1);
    func_02080b1c(r);
}
