typedef unsigned int u32;
typedef signed int s32;
extern s32 func_020bd824(u32 a, u32 b, u32 c, u32 d);
u32 func_020c604c(u32 param_1)
{
    s32 r;
    r = func_020bd824(param_1, 0, 0xffffffff, 0xffffffff);
    return r != 0;
}
