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
extern void func_020264f4(u8 *p);
extern u8 func_02025860(u8 *p);
u8 func_ov003_0216cd98(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0;
    SwapByte(9, param_1 + 147);
    SwapByte(4, param_1 + 151);
    func_020264f4(param_1);
    uVar1 = func_02025860(param_1);
    return uVar1;
}
