typedef unsigned char u8;
typedef unsigned int u32;
extern void func_02063b24(u8 *p);
u32 func_02063b64(u32 param_1, u8 *param_2, u32 *param_3)
{
    u32 i;
    u32 n;
    n = *param_3;
    for (i = 0; i < n; i++) {
        func_02063b24(param_2 + i);
    }
    return 0;
}
