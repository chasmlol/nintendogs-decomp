typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_020781d4(u32 p);
extern u32 func_0208e554(u32 a, u32 b, u32 c, u32 d);
void func_0208fa04(u8 *param_1, u32 *param_2, u32 param_3)
{
    u32 iVar1;
    u32 uVar2;
    u8 *p;
    *(u16 *)(param_1 + 0x70) = (u16)param_3;
    p = *(u8 **)(param_1 + 0x1c);
    iVar1 = func_020781d4(*(u32 *)(*(u8 **)p + 8));
    uVar2 = func_0208e554((u32)param_2, param_3, (u32)(*(u8 **)(param_1 + 0x1c) + 4), iVar1);
    *(u32 *)(param_1 + 0x7c) = uVar2;
}
