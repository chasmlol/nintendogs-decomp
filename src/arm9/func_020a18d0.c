typedef unsigned int u32;
extern u32 data_021592ac;
extern u32 func_02070888(u32 x);
u32 func_020a18d0(void)
{
    u32 uVar1;
    uVar1 = func_02070888((u32)&data_021592ac);
    if (uVar1 == 4 || uVar1 == 5 || uVar1 == 62) {
        return 1;
    }
    return 0;
}
