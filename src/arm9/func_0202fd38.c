typedef unsigned int u32;
typedef unsigned short u16;
extern u32 data_0215942c;
extern void func_ov004_0216c088(void);
extern void func_0202fd8c(u32 a, u32 b);
void func_0202fd38(u32 param_1)
{
    if (*(u16 *)*(u32 *)&data_0215942c == 9) {
        func_ov004_0216c088();
        return;
    }
    func_0202fd8c(param_1, 0);
}
