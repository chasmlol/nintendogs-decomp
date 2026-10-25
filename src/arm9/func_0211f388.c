typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0215be48;
void func_0211f388(u8 *param_1)
{
    u8 *g;
    if (*(s32 *)(param_1 + 0x1cc0) == 1) {
        g = *(u8 **)&data_0215be48;
        if (*(s32 *)(g + 0xbc) == 0) {
            *(u32 *)(param_1 + 0x938) = 0;
            goto done;
        }
    }
    *(u32 *)(param_1 + 0x938) = 5;
done:
    *(u32 *)(param_1 + 0x92c) = 0;
}
