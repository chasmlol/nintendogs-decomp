typedef unsigned int u32;
typedef volatile unsigned int vu32;
void func_020fc594(u32 param_1, u32 param_2, u32 param_3)
{
    vu32 *reg;
    switch (param_1) {
    case 0:
    case 1:
        if (param_3 != 0) {
            reg = (vu32 *)0x04000000;
            *reg = *reg | (param_2 << 8);
            return;
        }
        reg = (vu32 *)0x04000000;
        *reg = *reg & ~(param_2 << 8);
        return;
    case 2:
    case 3:
        reg = (vu32 *)0x04001000;
        if (param_3 != 0) {
            *reg = *reg | (param_2 << 8);
        } else {
            *reg = *reg & ~(param_2 << 8);
        }
        return;
    default:
        return;
    }
}
