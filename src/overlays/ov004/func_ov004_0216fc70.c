#include "ctx.h"

extern u32 *data_027c0360;
extern void func_02066c08(void *, int, int, int);
extern void func_01ff810c(void *, void *, void *);

void func_ov004_0216fc70(int param_1, u32 *param_2)
{
    u8 buf[52];
    u32 *p = data_027c0360;
    u32 t2, t1;
    param_2[0] = p[45];
    param_2[1] = p[46];
    param_2[2] = p[47];
    param_2[3] = p[48];
    param_2[4] = p[49];
    param_2[5] = p[50];
    param_2[6] = p[51];
    param_2[7] = p[52];
    param_2[8] = p[53];
    func_02066c08(buf, 0x666, 0x666, 0x666);
    func_01ff810c(buf, param_2, param_2);
    t2 = p[44];
    t1 = p[43];
    param_2[9] = p[42];
    param_2[10] = t1;
    param_2[11] = t2;
}
