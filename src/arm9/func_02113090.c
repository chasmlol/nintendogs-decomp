typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0215be48;
void func_02113090(s32 param_1, u32 param_2)
{
    u8 *q;
    q = *(u8 **)&data_0215be48;
    q = q + 0x1dec;
    q = q + param_1 * 660;
    if (param_2 == 0) {
        *(u32 *)(q + 4) = 0;
    } else {
        *(u32 *)(q + 4) = param_2;
    }
}
