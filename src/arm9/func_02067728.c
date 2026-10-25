typedef unsigned short u16;
typedef volatile unsigned short vu16;
typedef unsigned int u32;
typedef volatile unsigned int vu32;
void func_02067728(u32 param_1, u32 param_2)
{
    vu16 *r2;
    vu32 *r3;
    vu32 *r4;
    r2 = (vu16 *)0x04000280;
    *r2 = 1;
    r3 = (vu32 *)0x04000290;
    *r3 = 0;
    r3[1] = param_1;
    r4 = (vu32 *)0x04000298;
    *r4 = param_2;
    r4[1] = 0;
}
