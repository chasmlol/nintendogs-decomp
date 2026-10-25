typedef unsigned int u32;
extern u32 data_0215be48;
extern void func_021035d0(void);
extern void func_02112798(u32 a, u32 b, u32 c);
void func_02107dd8(void)
{
    if (*(u32 *)&data_0215be48 != 0) {
        func_021035d0();
        func_02112798(3, 0, 0);
    }
}
