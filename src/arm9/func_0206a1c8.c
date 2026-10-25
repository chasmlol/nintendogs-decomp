typedef unsigned int u32;
typedef volatile unsigned int vu32;
typedef int BOOL;
u32 func_0206a1c8(u32 *param_1)
{
    vu32 *reg;
    reg = (vu32 *)0x04000600;
    if (*reg & 0x4000) {
        return 0xffffffff;
    }
    *param_1 = (*reg & 0x1f00) >> 8;
    return 0;
}
