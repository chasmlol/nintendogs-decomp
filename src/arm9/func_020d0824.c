typedef unsigned char u8;
typedef unsigned int u32;
typedef struct { u32 w[10]; } T;
void func_020d0824(u8 *param_1, u32 *param_2)
{
    *(T *)param_2 = *(T *)(param_1 + 0x10);
}
