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
extern void func_02026494(u8 *p);
extern void func_02025804(u8 *p);
extern void func_02034198(u8 *p);
void func_ov003_021658d4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x93;
    *(u16 *)(param_1 + 0x156) = 3;
    SwapByte(0x13, param_1 + 0x93);
    func_02026494(param_1);
    func_02025804(param_1);
    func_02034198(param_1);
}
