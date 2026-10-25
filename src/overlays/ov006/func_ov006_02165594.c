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
extern void func_020266f8(u8 *p);
extern void func_020253d8(u8 *p);
void func_ov006_02165594(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x11;
    SwapByte(5, param_1 + 147);
    func_020266f8(param_1);
    func_020253d8(param_1);
    *(u32 *)(param_1 + 0x464) = 1;
    *(u32 *)(param_1 + 0x474) = 0xffffffff;
}
