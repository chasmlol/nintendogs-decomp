typedef unsigned int u32;
typedef unsigned short u16;
extern void func_02022b7c(u32 p);
extern void func_ov003_021894ec(u32 a, u32 b, u32 c, u32 d);
void func_ov003_02187dac(u32 param_1)
{
    u32 r;
    r = (0x28 < *(u16 *)(param_1 + 252));
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 6, 0x2f, r);
}
