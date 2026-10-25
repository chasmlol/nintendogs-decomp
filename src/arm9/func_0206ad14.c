typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02150e54;
extern u32 data_02150e50;
extern s32 func_02068c1c(void);
void func_0206ad14(void)
{
    s32 iVar1;
    iVar1 = func_02068c1c();
    *(u32 *)&data_02150e54 = iVar1;
    if (iVar1 == 0) {
        return;
    }
    if (iVar1 == 0x20) {
        goto c20;
    }
    if (iVar1 == 0x40) {
        *(u32 *)&data_02150e50 = 0x06894000;
    }
    return;
c20:
    *(u32 *)&data_02150e50 = 0x06890000;
}
