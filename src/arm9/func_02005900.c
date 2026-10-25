typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_0207e9f8(u32 a, u32 b);
extern void func_020683f8(void);
void func_02005900(void)
{
    func_0207e9f8(1, 1);
    func_020683f8();
    *(vu32 *)0x04001000 |= 0x10000;
}
