typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_020e9ca0(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020e39d4(u8 *param_1)
{
    *(u32 *)(param_1 + 0xa8) = *(u32 *)(param_1 + 0xa8) + 0xc000;
    func_020e9ca0((u32)(param_1 + 0xa8), (u32)(param_1 + 0xb0), (u32)(*(s16 *)(param_1 + 0x90) == 3) << 1, 0, 0);
}
