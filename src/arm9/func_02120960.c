typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_0215be48;
extern void func_02111b94(u32 a, u32 b, u32 c);
void func_02120960(u8 *param_1)
{
    u8 *p;
    p = *(u8 **)&data_0215be48;
    if (*(u32 *)(p + 0xbc) == 0x17) {
        func_02111b94(0x14, (u32)*(s16 *)(param_1 + 0x1c18), (u32)*(s16 *)(param_1 + 0x1c1a));
    }
}
