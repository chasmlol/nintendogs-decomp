typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_0215be48;
extern void func_0210a854(u32 x);
void func_02115e14(u32 *param_1)
{
    u8 *p;
    *param_1 = 0;
    p = *(u8 **)&data_0215be48;
    if (*(u32 *)(p + 0xa8) == 3) {
        func_0210a854(8);
    }
}
