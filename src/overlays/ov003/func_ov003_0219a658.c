typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;
extern s32 func_020386d0(u32 p);
extern void func_0203e908(u32 p, u32 x);
u32 func_ov003_0219a658(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_020386d0(param_1);
    func_0203e908(param_1, (s16)(iVar1 + 0x3d1));
    return 1;
}
