typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021594d0;
extern s32 func_020d69fc(u32 p);
void func_020d50c4(u32 param_1)
{
    s32 iVar1;
    u8 *p;
    iVar1 = func_020d69fc(param_1);
    if (iVar1 != 0) {
        p = *(u8 **)&data_021594d0;
        *(u32 *)(p + 0x20) = 1;
    }
}
