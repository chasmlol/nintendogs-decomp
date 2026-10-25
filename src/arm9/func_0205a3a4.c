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
extern void func_02026aac(u8 *p);
extern u8 func_02025bb0(u8 *p);
void func_0205a3a4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x13;
    SwapByte(7, param_1 + 147);
    func_02026aac(param_1);
    func_02025bb0(param_1);
    *(u32 *)(param_1 + 0x464) = 1;
}
