typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;
extern s32 func_01ffdb08(s32 x);
extern s32 func_020274a4(s32 x);
u32 func_020c8d68(void)
{
    s32 iVar1;
    s16 iVar2;
    iVar2 = 0;
    for (;;) {
        iVar1 = func_01ffdb08(iVar2);
        if (iVar1 != 0) {
            iVar1 = func_020274a4(iVar1);
            if (iVar1 == 1) {
                return 1;
            }
        }
        iVar2 = (s16)(iVar2 + 1);
        if (iVar2 >= 3) {
            return 0;
        }
    }
}
