typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_020863e4(u8 *p, u32 x);
u8 func_02085f84(u8 *param_1, u32 param_2)
{
    s32 iVar1;
    iVar1 = func_020863e4(param_1, param_2);
    return *(u8 *)(*(u8 **)(param_1 + 0xc) + iVar1 * 2 + 1);
}
