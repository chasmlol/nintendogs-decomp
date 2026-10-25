typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0207a210(u32 a, u32 b, s32 c, u32 d);
void func_0207a104(u32 *param_1, s32 *param_2, u32 param_3)
{
    s32 t;
    t = *param_2;
    func_0207a210((u32)param_2[2], (u32)(u16)param_3, t >> 12, (u32)param_1);
    param_1[4] = param_1[4] & 0x3fffffff;
    param_1[4] = param_1[4] | 0x40000000;
    param_1[0] = param_1[0] | 8;
}
