typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *func_02078214(u32 p);
void func_0208f28c(u8 *param_1, u32 param_2)
{
    u8 *iVar1;
    *(u32 *)(param_1 + 8) = param_2;
    *(u32 *)(param_1 + 0xc) = 0;
    if (param_2 != 0) {
        iVar1 = func_02078214(param_2);
        *(u32 *)(param_1 + 0xc) = (u32)(iVar1 + *(u32 *)(iVar1 + *(u16 *)(iVar1 + 0xe) + 0xc));
    }
}
