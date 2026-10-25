typedef unsigned int u32;
typedef signed int s32;
extern void func_02022b7c(u32 p);
extern s32 func_0202c3e0(u32 a, u32 b);
extern s32 func_0203567c(u32 p);
extern void func_0203e908(u32 a, u32 b);
void func_ov003_021855d8(u32 param_1)
{
    s32 iVar1;
    func_02022b7c(param_1);
    if (func_0202c3e0(param_1, 7) != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0xf3);
    }
}
