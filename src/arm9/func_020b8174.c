typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0215942c;
extern s32 func_01ffdb08(s32 x);
extern s32 func_0202817c(s32 x);
extern s32 func_020941bc(s32 x);

u32 *func_020b8174(s32 param_1)
{
    u32 *ret = 0;
    s32 iVar1;
    u8 *p;
    if (param_1 == 0x30000) {
        p = *(u8 **)&data_0215942c;
        iVar1 = func_01ffdb08((s32)*(s16 *)(p + 0x1c));
        iVar1 = func_0202817c(iVar1);
        ret = (u32 *)func_020941bc(iVar1) + 3;
    }
    return ret;
}
