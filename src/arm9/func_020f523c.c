typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214193c;
extern s32 func_ov004_02164710(s32 x);
s32 func_020f523c(void)
{
    s32 v;
    v = *(s32 *)&data_0214193c;
    if (v == 22) {
        return func_ov004_02164710(v);
    }
    return 0;
}
