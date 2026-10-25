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
extern void func_02026bd0(u8 *p);
extern u8 func_02025548(u8 *p);
u8 func_0201da14(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x179;
    SwapByte(4, param_1 + 0x97);
    func_02026bd0(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
