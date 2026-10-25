typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0214e5a0;
extern void func_02080b84(void);
void func_02000eac(u32 param_1, u32 param_2)
{
    if ((param_2 & 0x3f) != 1) {
        func_02080b84();
        return;
    }
    *(u16 *)&data_0214e5a0 = 1;
}
