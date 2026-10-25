typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef signed int s32;
typedef unsigned int u32;
extern u8 data_0213c42d;
u32 func_020207cc(u8 *param_1)
{
    s32 v;
    u16 *p;
    p = *(u16 **)(param_1 + 0x9e8);
    v = ((s8 *)&data_0213c42d)[*p * 100];
    switch (v) {
    case 0:
        return 3;
    case 1:
        return 1;
    case 2:
    case 3:
        return 2;
    default:
        return 1;
    }
}
