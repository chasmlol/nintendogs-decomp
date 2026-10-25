typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
extern u32 data_0215be48;
extern void func_02094258(u32 a);
void func_020f79a4(u8 *param_1)
{
    u8 *p;
    if (*(s8 *)(param_1 + 100) == 0) {
        func_02094258((u32)(param_1 + 184));
    }
    p = *(u8 **)&data_0215be48;
    *(u32 *)(p + 0x4868) = 1;
}
