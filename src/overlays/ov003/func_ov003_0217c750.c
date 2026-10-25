typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_0203541c(u32 p);
extern s32 func_0202d108(u32 a, u32 b, s32 c, u32 d);
extern void func_0202fcc0(u32 p);
void func_ov003_0217c750(u32 param_1)
{
    s32 iVar1;
    if (*(u16 *)(param_1 + 252) <= 30) {
        return;
    }
    iVar1 = func_0203541c(param_1);
    iVar1 = func_0202d108(param_1, 0, iVar1, 1);
    if (iVar1 == 0) {
        func_0202fcc0(param_1);
    }
}
