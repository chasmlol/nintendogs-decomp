typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 *func_0207385c(u32 p, u32 tag);
extern void func_02073678(u32 p);
u16 *func_02006be0(u32 param_1)
{
    u32 *q;
    q = func_0207385c(param_1, 0x4345424b) + 2;
    if ((q[1] & 0xf000000) == 0) {
        func_02073678((u32)q);
    }
    return (u16 *)q;
}
