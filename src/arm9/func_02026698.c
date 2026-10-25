typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
void func_02026698(u8 *param_1)
{
    s32 x;
    x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    *(s32 *)(param_1 + 0x240) = (s32)(((s64)x * 86 + 0x800) >> 12);
    *(u32 *)(param_1 + 0x244) = 384;
    *(u32 *)(param_1 + 0x24c) = 0xb36;
}
