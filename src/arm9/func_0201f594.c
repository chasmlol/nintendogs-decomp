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
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
u8 func_0201f594(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x11b;
    SwapByte(2, param_1 + 151);
    func_02026c24(param_1);
    uVar1 = func_02025a84(param_1);
    return uVar1;
}
