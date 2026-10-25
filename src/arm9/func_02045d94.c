typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02035770(u32 p, u32 x);
extern void func_020362f8(u32 p);
extern void func_0202fcc0(u32 p);
void func_02045d94(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_02035770(param_1, 0x32);
    if (iVar1 != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
    }
}
