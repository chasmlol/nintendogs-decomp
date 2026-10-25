typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_0213e770;
extern u32 data_0213e778;
void func_0208db10(u8 *param_1)
{
    u32 (*f1)(u32, u32, u32);
    u32 (*f2)(u32, u32, u32);
    f1 = (u32 (*)(u32, u32, u32))*(u32 *)&data_0213e770;
    *(u32 *)(param_1 + 0x268) = f1(0x5000, 0, 0);
    f2 = (u32 (*)(u32, u32, u32))*(u32 *)&data_0213e778;
    *(u32 *)(param_1 + 0x270) = f2(0xc00, 0, 0);
}
