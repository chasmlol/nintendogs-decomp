typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
void func_02077ffc(u8 *param_1, s32 param_2, u32 param_3)
{
    u8 *q;
    u32 o;
    u8 *base;
    u32 x;
    u8 *t;
    u32 v;
    u8 *r;
    q = param_1 + *(s32 *)(param_1 + 8);
    o = *(u16 *)(q + 10);
    base = q + 4;
    x = *(u16 *)(base + o);
    t = base + o + x * param_2;
    v = *(u32 *)(t + 4);
    r = q + v;
    *(u32 *)(r + 0xc) = (*(u32 *)(r + 0xc) & 0xfffffff0) | param_3;
}
