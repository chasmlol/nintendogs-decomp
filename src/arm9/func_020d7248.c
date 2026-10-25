typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0215ad30;
extern s32 func_020d699c(u32 p);
void func_020d7248(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_020d699c(param_1);
    if (iVar1 != 0) {
        *(u32 *)&data_0215ad30 = 1;
    }
}
