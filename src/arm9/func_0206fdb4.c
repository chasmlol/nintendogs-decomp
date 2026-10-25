typedef unsigned int u32;

extern void func_02071088(u32 a, u32 b, u32 c);
extern void func_020898f4(u32 a, u32 b, u32 c, u32 d);
extern u32 func_02089ecc(void);
extern void func_02089f9c(u32 a);
extern void func_02089f0c(u32 a);

void func_0206fdb4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar1;

    func_02071088(param_1, param_2, param_3);
    func_020898f4(0, 0, 0, 0);
    uVar1 = func_02089ecc();
    func_02089f9c(1);
    func_02089f0c(uVar1);
}
