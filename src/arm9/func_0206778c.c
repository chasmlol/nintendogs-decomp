typedef unsigned short u16;
typedef volatile unsigned short vu16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef volatile unsigned long long vu64;
void func_0206778c(u32 param_1)
{
    *(vu16 *)0x04000280 = 1;
    *(vu64 *)0x04000290 = (u64)4096 << 32;
    *(vu64 *)0x04000298 = param_1;
}
