#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile unsigned char vu8;
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
extern void func_02025f2c(u8 *p);
extern u8 func_02025974(u8 *p);
u8 func_ov004_0216d384(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x147;
    SwapByte(7, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02025f2c(param_1);
    uVar1 = func_02025974(param_1);
    return uVar1;
}
