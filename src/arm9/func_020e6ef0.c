typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u32 func_020bd858(u32 p);
extern u8 func_020bd868(u32 p);
u32 func_020e6ef0(u32 param_1)
{
    s16 sVar1;
    sVar1 = *(s16 *)(param_1 + 0x90);
    if (sVar1 == 0) {
        goto c1;
    }
    if (sVar1 == 1) {
        return param_1;
    }
    if (sVar1 == 2) {
        goto c2;
    }
    return param_1;
c1:
    return func_020bd858(param_1);
c2:
    return (u32)func_020bd868(param_1);
}
