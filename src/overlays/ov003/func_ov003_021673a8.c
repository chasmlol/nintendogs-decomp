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
extern void func_02026bac(u8 *p);
extern u8 func_02025a84(u8 *p);
extern void func_02020768(u8 *p);
void func_ov003_021673a8(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x27;
    SwapByte(5, param_1 + 147);
    func_02026bac(param_1);
    func_02025a84(param_1);
    func_02020768(param_1);
}
