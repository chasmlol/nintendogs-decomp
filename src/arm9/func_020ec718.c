typedef unsigned int u32;
typedef unsigned char u8;
extern u32 data_0215be3c;
extern void func_020ebec4(u32 a, u32 b, u8 *c, u32 d);
void func_020ec718(u32 param_1, u32 param_2, u8 *param_3, u32 param_4)
{
    func_020ebec4(param_1, param_2, param_3, param_4);
    *(u32 *)&data_0215be3c = 0;
}
